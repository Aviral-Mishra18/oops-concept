#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private:
    double salary; // private member = not accessible from outside the class..

public: 
//properties/ attributes
    string name;
    string dept;
    string subject;

//non parameterized constructor..
Teacher(){
    dept = "Computer Science";
}

//parameterised constructor..
Teacher(string name, string dept, string subject,double salary){
   this->name = name;
   this->dept = dept;
   this->subject = subject;
   this->salary = salary;

}    

    //methods/ member functions
    // void changeDept(string newDept){
    //     dept= newDept;
    // }
//     //setter = this function use for set private member.
//     void setSalary(double s){
//         salary =s;
//     }

//     //getter = this function use for get private member.
//     double getSalary(){
//         return salary;
//     }

void getInfo(){
    cout <<"name: "<< name<< endl;
    cout<<"subject : "<< subject << endl;
}
 };



int main(){
    Teacher t1("Aviral", "Computer Science", "C++", 25000);// parameterized constructor..
    t1.getInfo();

    // t1.name = "aviral";//{non parameterized contrcutor}
    // t1.subject = "C++";//{non parameterized contrcutor}
    // t1.setSalary(50000);//{non parameterized contrcutor}

    
    // cout << t1.dept<<endl;
    return 0;

}