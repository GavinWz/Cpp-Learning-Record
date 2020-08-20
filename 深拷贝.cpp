#include<iostream>

using namespace std;

class Person{
public:
    int age;
    int* height;

    Person(){}

    Person(int age, int height){
        this->age = age;
        this->height = new int(height);
    }

    

    Person(const Person & p1){
        age = p1.age;
        // height = p1.height; //浅拷贝
        
        height = new int(*p1.height);//深拷贝
    } 

    ~Person(){
        cout << "析构" << endl;
        if(height != NULL){
            delete height;
            height = NULL;
        }
    }
};

int main(){
    Person p1(10, 20);
    
    Person p2(p1);
    cout << p2.age << endl;
    return 0;
}