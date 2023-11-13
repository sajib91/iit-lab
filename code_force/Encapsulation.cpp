#include<iostream>
using namespace std;

class Employee{
    private:
    //private attribute
    int salary;

    public:
    //setter
    void setSalary(int s){
        salary = s;
    }
    //getter
    int getSalary(){
        return salary;
    }
};

int main(){
    Employee obj;
    obj.setSalary(500000);
    cout << obj.getSalary();

    return 0;
}