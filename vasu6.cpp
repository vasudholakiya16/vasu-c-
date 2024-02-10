/*Header fines 
ther are two type of header files. 
1. system header files= it comes with the compiler. 
#include<iostream>
2. User defined header files = it is written by the programmer. 
#include "this.h" // --> this will produce an error if this.h is not present in th current directory 
*/
#include<iostream>
using namespace std;
int main()
{
    int a=6,b=9;
    cout<<"operators in c++ :"<<endl;
     cout<<"following are the types of operators in c++ :"<<endl;  
     //arithmatic operator
     cout<<"The value of a+b is :"<<a+b<<endl;
     cout<<"The value of a-b is :"<<a-b<<endl;
     cout<<"The value of a/b is :"<<a/b<<endl;
     cout<<"The value of a*b is :"<<a*b<<endl;
     cout<<"The value of a%b is :"<<a%b<<endl;
     cout<<"The value of a++ is :"<<a++<<endl;
     cout<<"The value of a-- is :"<<a--<<endl;
     cout<<"The value of ++a is :"<<++a<<endl;
     cout<<"The value of --a is :"<<--a<<endl;
     cout<<endl;
     //assignment operators <-- use to assigne value of operators
     //int a=8,b=7;
     //char c='d';
     //comparsion operators
     cout<<"following the comparsion operators in c++ :"<<endl; 
     cout<<endl;
     cout<<"The value of a==b is :"<<(a==b)<<endl;
     cout<<"The value of a!=b is :"<<(a!=b)<<endl;
     cout<<"The value of a<=b is :"<<(a<=b)<<endl;
     cout<<"The value of a>=b is :"<<(a>=b)<<endl;
     cout<<"The value of a>b is :"<<(a>b)<<endl;
     cout<<"The value of a<b is :"<<(a<b)<<endl;
     // Logical operators
     cout<<"following the  Logical operators in c++ :"<<endl; 
     cout<<endl;
     cout<<"The value of ((a==b)&&(a<b)) logical and operator is :"<<((a==b)&&(a<b))<<endl;
     cout<<"The value of ((a==b)||(a<b)) logical or operator is :"<<((a==b)||(a<b))<<endl;
     cout<<"The value of (!(a==b)) logical and operator is :"<<(!(a==b))<<endl;
    return 0;
}