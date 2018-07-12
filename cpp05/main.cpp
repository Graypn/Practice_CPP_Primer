#include <iostream>

using namespace std;

// 1. 抛出异常
void throwError() {
    throw runtime_error("hello error");
}


int main() {

//    2. 捕获处理异常
    try {
        throwError();
    } catch (runtime_error) {
        cout << "catch error" << endl;
    }


    return 0;
}
