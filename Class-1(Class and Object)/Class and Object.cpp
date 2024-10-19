#include<iostream>
#include<string>
using namespace std;
class Teacher{
     public:
      //properties //attributes
      string name;
      string dept;
      string subject;
      double salary;
      //method
      void changeDept(string newDept){
         dept=newDept;
      }

};

int main(){
    Teacher t1;
    t1.name="Moriom";
    t1.subject="C++";
    t1.dept="Computer Science";
    t1.salary=25000;

    cout << t1.name <<endl;
return 0;
}
