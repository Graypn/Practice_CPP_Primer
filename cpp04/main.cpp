//
//  main.cpp
//  cpp04
//
//  Created by macc on 2018/5/10.
//  Copyright © 2018年 macc. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
    /**
     * 1. 位运算符
     */
    std::cout << "------1. 位运算符------" << endl;


    /**
     * 2. 类型转换
     */
    // 隐式转换
    // 原则：尽可能减少精度损失；这里先把 3 转化成 double 类型，相加后，再把 double 类型转换成 int 类型
    std::cout << "------2. 类型转换------" << endl;

    int i1 = 3.14 + 3;
    std::cout << i1 << endl;;

    /**
     * 3. 显式转换
     * static_cast
     */
    // static_cast：改变非底层 const
    // 转换数值类型
    std::cout << "------3. 显式转换------" << endl;

    int i = 3, j = 4;
    double d = static_cast<double >(i) / j;
    std::cout << d << endl;;

    // 转换指针类型
    void *p = &d;
    double *dp = static_cast<double *>(p);
    std::cout << *dp << endl;

    // const_cast: 只能改变常量，底层 const，把const 类型变成 非const 类型，然后修改
    const double *cd = &d;
    double *dd = const_cast<double * >(cd);
    *dd = 3.11;
    std::cout << d << endl;;


    return 0;
}
