 #include <iostream>
 #include<string>
 using namespace std;
 //Multi-Level Inheritance
/*
 class person {
 public:
    string name;
    int age;

 };
 class Student:public person {
     public:
         int roll;
 };
 class GradStudent : public Student {
 public:
    string researchArea;
 };
 int main(){
     GradStudent s1;
     s1.name = "Moriom";
     s1.researchArea = "Robotics";
     cout << s1.name <<endl;
     cout << s1.researchArea<<endl;
 return 0;
 }
*/
//Multiple- Inheritance
 /*class Student {
     public:
         string name;
         int rollno;
 };
 class Teacher {
     public:
         string subject;
         double salary;
 };
 class TA: public Student,public Teacher {
 };
 int main(){
     TA t1;
     t1.name="Moriom";
     t1.subject="Engineering";
     t1.salary = 50000;

    cout << t1.name << endl;
    cout << t1.subject << endl;
    cout << t1.salary << endl;
 return 0;
 }*/
 //Hierarchical Inheritance:
 class person {
   public:
          string name;
          int age;
}
 class Student:public person {
     public:
         int rollno;
 };
 class Teacher:public person {
     public:
         string subject;
         double salary;
 };

