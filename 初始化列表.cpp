#include<iostream>

using namespace std;

class Person{
public:
    int a;
    int b;
    int c;
    Person(): a(10), b(20), c(30)
    {
        //无参构造函数
    }
    Person(int a, int b, int c): a(a), b(b), c(c)
    {
        //有参构造函数
    }
};

int main(){
    Person p1;
    cout << "P1: " << p1.a << " " << p1.b << " " << p1.c << endl;
    Person p2(20,40,60);
    cout << "P2: " << p2.a << " " << p2.b << " " << p2.c << endl;
    return 0;
}