#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private:
    double salary; // private member = not accessible from outside the class..

public: 
// Access modifier - public means these members are accessible from outside the class..

//non parameterized constructor..
// Teacher(){
//     dept = "Computer Science";
// }

//parameterised constructor..
Teacher(string n, string d, string s,double sal){
    name = n;
    dept=d;
    subject=s;
    salary=sal;

}
//properties/ attributes
    string name;
    string dept;
    string subject;
    

    //methods/ member functions
    void changeDept(string newDept){
        dept= newDept;
    }
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