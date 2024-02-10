#include<iostream>
using namespace std;

class Employee{
    int id;
    /*int count;  if we decler the in side of the class we have not pass the argument of the differernt typer of employee
     that problem sol is that we hav decler the cout function in outside of the class */
     static int count; 
    public:
    void setData(void){
        cout<<"Eent the id  is "<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of  the employee is "<<id<<" ans the employee number is :"<<count<<endl;
    }
    static void getCount(void){
        // count<<id;  // error
    cout<<"The value of count is :"<<count<<endl;
}

};

// count is a statick datat memer of a class employee
int Employee :: count; //Default value is 0

int main(){
   Employee a,b,c;
   
   a.setData();
   a.getData();
   Employee::getCount();

   b.setData();
   b.getData();
   Employee::getCount();

   c.setData();
   c.getData();
   Employee::getCount();
   // a.id=1;
   //a.count=1;  can not do this id and count are private 
    return 0;
}
/* statick function = if we make which kind of function those access all of this statick variable 
(if it is maybe functio or variable dosent metter) */