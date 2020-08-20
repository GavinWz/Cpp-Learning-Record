#include<iostream>

using namespace std;

int g_a = 10;
int g_b = 10;
void test(int param);
int main(){
    static int a;
    int b = 10;
    // cout << (int*)&g_a << " " << (int*)&g_b << endl;
    test(10);
    test(20);
    cout << a;
    cout << a;  
    return 0;
}
void test(int param){
    static int a;
    a = 20;
    cout << a << endl; 
    a += param;
    cout << a << endl << endl;
}   

