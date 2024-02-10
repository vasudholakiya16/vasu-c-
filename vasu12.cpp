#include<iostream>
using namespace std;

int main(){
    //What is the pointer ?? ans-- data type which hold address of othe data type  
    int a=6;
    int*b=&a;
    // &--> (address of) operator
    cout<<"the add of a is "<<&a<<endl;
    cout<<"the add of a is "<<b<<endl;
    cout<<endl;
    // *-->(value of)  Dereference operator
    cout<<"the value of  add b is "<<*b<<endl;
    //pointer to pointer
    int** c=&b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the  value at the address c is "<<*c<<endl;
    cout<<"the value of address value_at(value_at(c)) is :- "<<**c<<endl;


       return 0;
}                                                                                                                       