 #include <iostream>
 #include<string>
 using namespace std;

 class Student {
     public:
         string name;
         double* cgpaPtr;
      Student(string name,double cgpa){
          this->name=name;
          cgpaPtr=new double;
          *cgpaPtr=cgpa;
      }
      //destructor
      ~Student(){
          cout << "Hi I delete everything\n";
          delete cgpaPtr;
      }


      void getInfo(){
         cout << "name: " << name << endl;
         cout << "cgpa: " << *cgpaPtr << endl;
      }
 };
 int main(){
     Student s1("Moriom",8.9);
     s1.getInfo();
 return 0;
 }

