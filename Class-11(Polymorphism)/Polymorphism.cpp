 #include <iostream>
 #include<string>
 using namespace std;

 /*class person {
     public:
     string name;
     person(){
       cout << "non parameterized";
     }
     person(string name){
       this->name=name;
       cout << "Parameterized";
     }
 };
 int main(){
    person p1("moriom");
 return 0;
 }*/
/*class Print {
     public:
         void show(int x){
           cout << "int :"<< x <<endl;
         }
       void show(char ch){
          cout << "char :" << ch << endl;
       }
 };
 int main(){
    Print p1;
    p1.show('&');
 return 0;
 }
*/
//Function Overriding
/*class parent{
  public:
    void getinfo(){
      cout << "parent class";
    }
};
class child : public parent {
   public:
       void getinfo(){
        cout << "child class";
       }
};
int main(){
   child c1;
   c1.getinfo();
   return 0;
}*/
//Virtual Function
class parent{
  public:
    void getinfo(){
      cout << "parent class\n";
    }
    virtual void hello(){
      cout << "hello from parent\n";
    }
};
class child : public parent {
   public:
       void getinfo(){
        cout << "child class\n";
       }
       virtual void hello(){
      cout << "hello from child \n";
    }
};
int main(){
   child c1;
   c1.hello();
   c1.getinfo();
   return 0;
}
