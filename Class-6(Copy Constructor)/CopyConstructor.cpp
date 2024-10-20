#include<iostream>
#include<string>
using namespace std;
class Teacher{
     private :
      double salary;
     public:
        //properties //attributes
            string name;
            string dept;
            string subject;


      //2.Parameterized Constructor
      Teacher(string name,string dept,string subject,double salary ){
             this->name=name;
             this->dept =dept;
             this->subject=subject;
             this->salary=salary;
      }
   //Copy Constructor
   Teacher(Teacher &orgobj){
             this->name=orgobj.name;
             this->dept =orgobj.dept;
             this->subject=orgobj.subject;
             this->salary=orgobj.salary;
   }

      void getinfo(){
      cout << "Name:"<< name << endl;
      cout << "Subject:"<<subject << endl;
      cout << "Department:"<<dept << endl;
      cout << "Salary:"<<salary << endl;
      }
};


int main(){
    //cout << t1.dept << endl;
    Teacher t1("Moriom","Computer Science","C++",25000);//constructor call
    //t1.getinfo();
    Teacher t2(t1);//custom copy Constructor
    t2.getinfo();
return 0;
}
