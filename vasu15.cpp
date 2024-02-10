#include<iostream>
using namespace std;

/*function prototype 
Syntax:-
type function_name(argument);
*/
//int sum(int a, int b); //-- Acceptable
int sum(int,int); //-- Acceptable
//int sum(int a,b); //--  Not Acceptable
void g(void);

int main(){
    int num1,num2;
    cout<<"the value of first number is : "<<endl;  
    cin>>num1;
    cout<<"the value of second number is : "<<endl;
    cin>>num2;
    //num1 and um2 are actual parameter
    cout<<" the sum of the number is : "<<sum(num1,num2)<<endl;
    g();  // if we not written "void g(void);" this sentence then will come to  the error: 'g' was not declared in this scope
    
    return 0;
    
}
int sum(int a, int b){
    // Formal parameter :- a and b will be taking value from actiual paremeter num1 and num2
    int c=a+b;
    return c;
}
/*two type of parameter 
1. formeal parameter :- it is a this type of paremeter if we have make a function. 
2. actual parameter :- it is a this ttype of value in passed in function 
*/
void g(){
    cout<<"hello good morning";
}
