#include<iostream>

using namespace std;

int main(){

    int a= 10;
    int b = 20;
    
    //1. const修饰指针
    const int* p1 = &a;
    //*p = 20;  //错误
    p1 = &b;     //正确
    
    //2. const修饰常量
    int* const p2 = &a;
    //p = &b;     //错误
    *p2 = 20;  //正确

    //2. const修饰指针和常量
    const int* const p3 = &a;
    //p = &b;     //错误
    //*p3 = 20;  //正确

    cout << "p1 = " << *p1 << ", p2 = " << *p2 << ", p3 = " << *p3 << endl;
    

    return 0;
}