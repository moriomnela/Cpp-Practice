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

      //method
      void changeDept(string newDept){
         dept=newDept;
      }
      //setter
      void setSalary(double s){
         salary = s;
      }
      //getter
      double getSalary(){
        return salary;
      }
};
   class Account{
       private:
           double balancel;
           string password;//Hiding Data
        public:
        string username;
        string accountId;
};

int main(){
    Teacher t1;
    t1.name = "Moriom";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(25000);

    cout << t1.name <<endl;
    cout << t1.getSalary() <<endl;
return 0;
}
