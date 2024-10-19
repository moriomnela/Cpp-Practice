#include<iostream>
#include<string>
using namespace std;
class Teacher{
     private :
      double salary;
     public:

        //1.Non Parameterized Constructor
       Teacher(){
           //cout << "Hi I am Constructor" << endl;
           dept = "Computer Science";
      }

      //2.Parameterized Constructor
      Teacher(string n,string d,string s,double sal ){
             name=n;
             dept =d;
             subject=s;
             salary=sal;
}

      //properties //attributes
      string name;
      string dept;
      string subject;

      //method
      void changeDept(string newDept){
         dept=newDept;
      }

      void getinfo(){
      cout << "Name:"<< name << endl;
      cout << "Subject:"<<subject << endl;
      cout << "Department:"<<dept << endl;
      cout << "Salary:"<<salary << endl;
      }
};


int main(){
    Teacher t1("Moriom","Computer Science","C++",25000);//constructor call
    t1.getinfo();
return 0;
}
