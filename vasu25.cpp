#include<iostream>
using namespace std;

class Employee{
    int Id;
    int Salary;
    public:

    void setId(void){
        Salary = 123;
        cout<<"Enter the Id of Employee is : "<<endl;
        cin>>Id;
    }
    void getId(void){
        cout<<" The id of this Employee is "<<Id<<endl;
    }
    

};
int main(){
   //Employee vasu ,vedant , parshave, khusharth , meet ;
    //vasu.setId();
    //vasu.getId();
    /* it is a one type of a method but in big company ve ha faces a big amount of id or date that
     time we use a arraymethod*/
     Employee patel [5];
     int i;
     for (i=0;i<5;i++){
         patel[i].setId();
         patel[i].getId();
     }
    return 0;
}