#include<iostream>

using namespace std;
  void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
  }

  int main(){
    int c = 10;
    int d = 20;
    swap(c, d);
    cout << c << " " << d << endl;
  }
// int main(){
//     int a = 10;
//     int &b = a;
//     cout << "b = " << b <<endl;
//     cout << "a = " << a <<endl;
//     a = 20;
//     cout << "b = " << b <<endl;
//     cout << "a = " << a <<endl;
//     return 0;
// }