#include<iostream>
#include<string>
using namespace std;
//Static variables in function
  /*void func(){
     static int x=0;
     cout <<"x:" << x <<endl;
     x++;
  }*/
  //Static variables in class
  class A{
 public:
    int x;
    void incX(){
        x=x+1;
  }
  };


int main(){
    A obj1;
    A obj2;

    obj1.x=100;
    obj2.x=200;
    cout << obj2.x<< endl;

   return 0;
};
