#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private:
    double salary; // private member = not accessible from outside the class.
public: // Access modifier - public means these members are accessible from outside the class..
    //properties/ attributes
    string name;
    string dept;
    string subject;
    

    //methods/ member functions
    void changeDept(string newDept){
        dept= newDept;
    }
    //setter = this function use for set private member.
    void setSalary(double s){
        salary =s;
    }

    //getter = this function use for get private member.
    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1; //t1 is an object of class teacher.
    t1.name = "aviral";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(50000);

    
    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
    return 0;

}