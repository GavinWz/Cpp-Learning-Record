#include<iostream>

using namespace std;

class Person{
public:
    int age;
    Person(){}

    Person(const Person & p1){
        age = p1.age;
    } 

    ~Person(){
        cout << "年龄" << endl;
    }
};

int main(){
    Person p1;
    p1.age = 18;
    Person p2(p1);
    cout << p2.age << endl;
    return 0;
}