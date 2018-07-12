#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * 1. 类的函数
 *
 * 类的函数需要声明在类的内部，但是可以定义(实现)在类的外部
 * 调用函数的时候，默认传了一个隐式的 this 指针，指向对象，如果想把这个 this 指针变成常量指针，需要在函数后面加上一个 const 修饰符
 */
struct Sales_data {

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    /**
     * 2. 构造函数
     * 可以在类的内部定义，也可以在类的外部定义
     */
    Sales_data() = default;

    Sales_data(const string &s) : bookNo(s) {}

    Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(n * p) {}

    Sales_data(istream &);

    string isbn() const {
        return bookNo;
    }

    Sales_data &combine(const Sales_data &);

    double avg_price() const;

};

// 在类的外部定义构造函数
Sales_data::Sales_data(istream &) {
    // 具体实现
}

double Sales_data::avg_price() const {
    if (units_sold) {
        return revenue / units_sold;
    }
    return 0;
}

//  返回 this 本身
Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}

/**
 * 3. 使用 class 定义类
 *
 * 和 struct 比，只有默认的权限不同
 */
class Sales_data2 {

public:

    Sales_data2() = default;

    Sales_data2(const string &s) : bookNo(s) {}

    Sales_data2(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(n * p) {}

    Sales_data2(istream &);

    string isbn() const {
        return bookNo;
    }

    Sales_data2 &combine(const Sales_data &);

private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    double avg_price() const {
        if (units_sold) {
            return revenue / units_sold;
        }

        return 0;
    }

};


/**
 * 4. 定义在类内部的函数自动式内联的
 */
class Screen {

public:
    //   using pos = string::size_type;
    typedef string::size_type pos;

    Screen() = default;

    Screen(pos ht, pos wt, char c) : height(ht), width(width), contents(ht * wt, c) {}

    // 隐式内联
    char get() const {
        return contents[cursor];
    }

    // 显式内联
    inline char get(pos ht, pos wt) const;

    // 参数时行和列
    Screen &move(pos r, pos c);

    Screen &set(char ch);

    Screen &set(pos r, pos c, char ch);

private:
    pos cursor = 0;
    pos width = 0, height = 0;
    string contents;

};

// 声明为 inline 类型， 更容易理解和可读
inline Screen &Screen::move(Screen::pos r, Screen::pos c) {
    cursor = r * width + c;
    return *this;
}

inline char Screen::get(Screen::pos ht, Screen::pos wt) const {
    return 0;
}

Screen &Screen::set(char ch) {
    contents[cursor] = ch;
    return *this;
}


class Window_mgr {

private:
    // 刚开始就初始化一个 vector , 用 {} 或者 =
    vector<Screen> screens{Screen(24, 80, '')};
//    vector<Screen> screens = {Screen(24, 80, '')};
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}