#include<iostream>

using namespace std;

class ClassName{
  public:
    int a;
    ClassName& add_a(){
        cout << this->a << endl;
        this->a += 10;
        return *this;
    }
  };
  

int main(){
    ClassName entity;
    entity.a = 10;
    entity.add_a().add_a().add_a().add_a();
    cout << entity.a;
    return 0;
}

//若将add_a函数的返回值改为ClassName，则结果将为20。
//因为若不返回当前类的引用的话，返回值则会是当前对象的一个拷贝。
//第一个add_a()之后的add_a()调用不是在原本对象的基础上将a+10
//而是在一个新创建的对象上将新对象的a属性加10