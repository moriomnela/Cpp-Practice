 #include <iostream>
 #include<string>
 using namespace std;

 class person {
 public:
    string name;
    int age;
    person(string name,int age){
       this->name=name;
       this->age=age;
    }
 };
 class Student:public person {
     public:
         int roll;
         Student(string name,int age,int roll):person( name,age){
           this->roll=roll;
         }

     void getinfo(){
     cout<< "Name :" << name << endl;
     cout << "Age: " << age << endl;
     cout << "Roll: " <<roll << endl;
     }

 };
 int main(){
     Student s1("Moriom",21,123);
     s1.getinfo();
 return 0;
 }

