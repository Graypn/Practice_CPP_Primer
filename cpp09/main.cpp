#include <iostream>
#include <list>
#include <array>
#include <vector>

using namespace std;

/**
 * 顺序容器
 */

int main() {

    /**
     * 1. 不同的顺序容器
     *
     * vector
     *
     * string
     *
     * list
     * forward_list
     *
     * deque
     *
     */

    /**
     * 2. 容器的 begin 和 end
     *
     * （普通，反转类型）* const类型 ，一共四种类型
     *
     * 普通类型(非const对象)是 iterate 类型，const 类型是 const_iterate 类型
     */
    list<string> a = {"str1", "str2", "str3"};

    auto bt1 = a.begin();  // 只有 a 是 const 类型，bt1 才是 const_iterate类型
    auto bt2 = a.rbegin(); // r 类型，起点是最后一个元素
    auto bt3 = a.cbegin(); // 获取到的是 const_iterate 类型
    auto bt4 = a.crbegin();

    auto et3 = a.cend();
    auto et4 = a.crend();

    while (bt3 != et3) {
        cout << *bt3 << endl;
        bt3++;
    }

    while (bt4 != et4) {
        cout << *bt4 << endl;
        bt4++;
    }

    /**
     * 3. 容器初始化
     */
    list<string> list1 = {"str1", "str2", "str3"};
    // 1. 直接拷贝初始化
    list<string> list2(list1);
    list<string> list3 = list2;
    // * 因为是拷贝初始化，所以 lsit2 中插入数据，不影响 list3 的大小
    list2.push_back("str4");
    cout << list2.size() << endl; // 4
    cout << list3.size() << endl; // 3
    // 2. 迭代器初始化，也属于拷贝初始化的一种
    auto it1 = list1.begin();
    auto it2 = list1.end();
    list<string> list4(it1, it2);
    cout << list4.size() << endl; // 3
    // 构造器初始化
    list<string> list5(10); // 初始化 10 个空的字符串
    list<string> list6(3, "hi"); // 初始化 3 个 "hi"
    cout << list5.size() << endl; // 10
    cout << list6.size() << endl; // 3

    /**
     * 4. array
     *
     * 声明的时候除了 类型 ，还要有数量
     */
    array<int, 10> array1; // 保存 10 个 int 型的数组，默认初始化
    array<int, 10> array2 = {0, 1, 2, 3, 4}; // 剩余元素是 0

    int dig[3] = {1, 2, 3};
//    int dig2[3] = dig;  // 错误：内置数组不支持拷贝和赋值，array 类型可以

    /**
     * 5. 使用 assign
     *
     * 只有除了 array 的顺序容器可以使用
     */
    list<string> names = {"a", "b"};
    vector<const char *> old;
    names.assign(old.cbegin(), old.cend());
    cout << names.size() << endl; // 0
    // 直接用 assign 进行赋值
    names.assign(10, "a");
    cout << names.size() << endl; // 0

    /**
     * 6. swap
     */
    vector<string> v1(10);
    vector<string> v2(20);
    swap(v1, v2);
    cout << v1.size() << endl; // 20
    cout << v2.size() << endl; // 10


    return 0;
}