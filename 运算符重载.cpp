#include<iostream>

using namespace std;

class Person{
public:
    int age;
    string name;
    Person(){};
    Person(int age, string name){
        this->age = age;
        this->name = name;
    }
    Person operator+(Person& p){
        Person temp;
        temp.age = this->age + p.age;
        temp.name = this->name + p.name;
        return temp;    
    }

    Person& operator++(){
        age++;
        return *this;
    }
    
    Person operator++(int){
        Person temp = *this;
        age++;
        return temp;
    }
};

// Person operator+ (Person& p1, Person& p2){
//     Person temp;
//     temp.age = p1.age + p2.age;
//     temp.name = p1.name + p2.name;
//     return temp;
// }

int main(){
    Person p1(10,"铠屙");
    Person p2(10,"憨批");
    cout << (p1+p2).age << " " <<(p1+p2).name << " " <<endl;
    cout << (++p1).age << endl;
    return 0;
}
