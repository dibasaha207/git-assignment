#include<iostream>
using namespace std;
class Employee{
    int id ,salary;
    public:
    void setid(void){
        salary=122;
        cin>>id;
    }
    void getid(void){
        cout<<"The Id of the employee is "<<id<<endl;
    }
};

int main(){
    //array of objects
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    

    return 0;
}