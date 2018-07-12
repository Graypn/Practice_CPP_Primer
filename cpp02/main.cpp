//
//  main.cpp
//  demo
//
//  Created by macc on 2018/5/4.
//  Copyright © 2018年 macc. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    unsigned u = 10;
    int i = -42;

    /**
     * 1. 数值转换
     * 无符号的和有符号的进行算数运算，会把有符号的转换成无符号的，再进行运算
     */
    cout << "--------- 1. 数值转换 ----------" << endl;

    cout << i + i << endl;
    cout << u + i << endl;
    
    
    /**
     * 2. 引用
     * 定义引用的时候必须进行初始化，因为引用是和一个变量进行绑定
     * 引用本身不是一个对象，所以不能定义引用的引用
     */
    cout << "--------- 2. 引用 ----------" << endl;

    int ii = 2;
    int &refi = ii;
    int ii1 = refi;
    cout << refi << endl;
    cout << ii1 << endl;
    
    /**
     * 3. 指针
     * 指针和引用的不同点：
     * 指针是一个对象，允许对指针进行赋值和拷贝
     * 定义指针的时候无需赋初值
     */
    cout << "--------- 3. 指针 ----------" << endl;

    double dval;
    double *pd = &dval;
    double *pd1 = pd;
    dval = 4.2;
    cout << dval << endl;
    cout << *pd << endl;
    cout << *pd1 << endl;
    
    // 空指针
    int *pn1 = 0;
    int *pn2 = NULL;
    int *pn3 = nullptr; // 推荐写法
    if(pn1) {} // pn1 为0，所以是 false
    
    // void* 指针
    // 是一种特殊类型的指针，可以存放任意对象的地址
    // 通常作为函数的传入值和传出值，因为并不知道指针具体指向的对象类型，所以不能直接操作对象
    void *pv = pn1;
    
    // 指向指针的指针
    // 看 * 的个数可以知道是否是指向指针的指针
    int iii = 40;
    int *piii = &iii;
    int **ppiii = &piii;
    cout << iii << endl;
    cout << *piii << endl;
    cout << **ppiii << endl;
    
    // 指针的引用
    int *&refp = piii;
    cout << *refp << endl;
    
    
    /**
     * 4. const
     * 常量声明，不允许修改
     */
    cout << "--------- 4. const ----------" << endl;

    const int ci = 1024;
    
    // 默认范围在当前文件，如果其他文件需要共享使用，需要加上 extern
    // 头文件里： extern const int bufSize；
    // 实现文件： extern const int bufSize = 1024;
    
    // const 的引用
    // 定义 const 的引用，必须也要加上 const（用于声明引用的const都是底层const）
    const int &r1 = ci;
    
    int i11 = 111;
    const int &r2 = i11; // 允许 const 引用绑定到普通变量
    
    // 指向 const 类型的指针（指针内保存的地址可以变，不能通过指针修改变量的值：底层const）
    const int *pp1 = &ci; // 定义一个指向常量的指针 pp1， ppi 也可以指向非常量，但是这两种情况都不能通过指针去修改值
    pp1 = &i11;
    
    // const 指针（指针内保存的地址不可以变，可以通过指针修改变量的值：顶层const）
    int errNum = 121;
    int *const cpp1 = &errNum;
    
    *cpp1 = 12; // 可以修改指向变量的值
    cout << *cpp1 << endl;
    
    const int *const cpp2 = &errNum; // 定义了一个指向常量的常量类型指针
//    *cpp2 = 1; 错误
    
    // 常量表达式
    // constexpr 用来声明一个常量表达式，编译期间就能确认的值，这个声明只是告诉编译器这个变量是个常量表达式，会在编译期间进行验证
    const int i6 = 16;
    constexpr int i7 = 16;
    
    /**
     * 5. auto
     * 会根据变量类型自动推断声明类型
     */
    cout << "--------- 5. auto ----------" << endl;

    auto i21 = 121;
    cout << i21 << endl;
    
    
        

    
    
    
    
    
    
    
    
    return 0;
}
