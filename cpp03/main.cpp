//
//  main.cpp
//  cpp03
//
//  Created by macc on 2018/5/8.
//  Copyright © 2018年 macc. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

/**
 * 1. 两种写法：using namespace std 和 using std::cout
 */
using namespace std;
//using std::cout;

int main(int argc, const char * argv[]) {
    /**
     * 2. string
     * 直接初始化：=
     * 拷贝初始化：不用 = 的情况
     */
    cout << "-------string-------" << endl;
    string s1;
    string s2(s1);
    string s3("value");
    string s4 = "value";
    string s5(5, 'c');
    
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    
    /**
     * 3. cin 和 string
     * cin 会度输入的内容判断，如果为空，就进行截取
     */
    cout << "--------cin 和 string------" << endl;


    string sin;
//    cin >> sin;  // 如果输入了  "aaa bbb" ，会进行截取，把 aaa 赋值给 sin
    cout << sin << endl;
    
    string sin1, sin2;
//    cin >> sin1 >> sin2; // 如果输入了  "aaa bbb" ，会进行截取，把 aaa 赋值给 sin1, bbb 赋值给 sin2
    cout << sin1 << endl << sin2 << endl;
    
    /**
     * 4. getline 截取一行
     */
    cout << "--------getline 截取一行------" << endl;

//    while (getline(cin, sin)) {
//        cout << sin << endl;
//    }
    
    /**
     * 5. empty 和 size
     */
    cout << "--------empty 和 size------" << endl;

    if(sin.empty()) {
        cout << "empty" << endl;
    }
    sin = "666";
    cout << sin.size() << endl;
    cout << sin[1] << endl; // 索引
    
    /**
     * 6. string 的一些函数
     */
    cout << "--------string 的一些函数------" << endl;

    string s6 = "hello world";
    for(auto &c : s6) {
        c = toupper(c);
    }
    cout << s6 << endl;
    
    /**
     * 7. vector
     * () :构建
     * {} :初始化
     */
    cout << "--------vector------" << endl;

    vector<string> sv1 = {"hi","hi2","hi3"};
    vector<string> sv2 = sv1;
    vector<string> sv3(sv1);
    vector<string> sv4(10); // 创建 sieze 是 10 的空 vector
    vector<string> sv5(10, "hi");
    vector<string> sv6{"hi"};
    
    // push_back
    sv6.push_back("h2");
    // empty
    bool vempty = sv6.empty();
    // 取值
    cout << sv1[1] << endl;
    
    /**
     * 8. 迭代器
     * + 往后跳转某个位置
     * - 往前跳转某个位置
     * end - begin 两个迭代器位置的距离
     */
    cout << "--------迭代器------" << endl;

    string st = "some thing";
    // st.end() ：最后一个元素的下一个元素
    // 如果 st.begin() = st.end()，则说明是空的
    if (st.begin() != st.end()) {
        auto it = st.begin();
        *it = toupper(*it);
        cout << st << endl;
    }
    
    // iterate 和 const_iterate
    // iterate：可写；const_iterate：不可写
    auto its = st.cbegin();
    auto ite = st.cend();
    auto mid = its + (ite - its) / 2;
    
    // -> 箭头操作符，解引用（未知）
    auto ict = sv1.begin();
//    (*its).empty();
//    its->empty();
    
    /**
     * 9. 数组
     */
    
    
    
    
    
    
    return 0;
}
