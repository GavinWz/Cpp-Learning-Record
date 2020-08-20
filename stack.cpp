#include<iostream>

using namespace std;

int* test(){
    int *a = new int(10);
    return a;
}

int main(){
    int *p = test();
    cout << *p << endl; 
    return 0;
}