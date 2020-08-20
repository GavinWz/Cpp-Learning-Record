#include<iostream>

using namespace std;

int& test1(){
    //int a = 10; //不能返回本地变量的引用，因为存在栈区
    static int a = 10; //静态变量存才全局区
    return a;
}

int main(){
    int a = test1();
    cout << a << endl;
    int &b = test1();
    test1() = 1000;
    cout << b << endl;
    return 0;
}