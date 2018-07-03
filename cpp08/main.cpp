#include <iostream>

using namespace std;

int main() {

    /**
     * 1. 把流的操作当成条件进行判断
     *
     *
     * 注意： 流不能拷贝，也不能赋值，一般使用引用传递
     */
    int val;
//    while (cin >> val) {
//        std::cout << "Hello, World!" << val << std::endl;
//    }

    /**
     * 2. 刷新缓冲区
     *
     *
     */
    // 输出一个 hello 和换行，然后刷新缓冲区
    cout << "hello" << endl;
    // 输出一个 hello ，然后刷新缓冲区
    cout << "hello" << flush;
    // 输出一个 hello 和一个 空字符，然后刷新缓冲区
    cout << "hello" << ends;


    return 0;
}