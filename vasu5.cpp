/*wap to add,mul,div,mod,sub*/ 
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter the value of num1 : \n";/* << is called Insertion operator*/
    cin>>num1; /*>> is called extraction  operator*/
    cout<<"enter the value of num2 : \n";/* << is called Insertion operator*/
    cin>>num2; /*>> is called extraction  operator*/
    cout<<"the sum is"<<num1+num2;
    cout<<"\nthe sub is"<<num1-num2;
    cout<<"\nthe div is"<<num1/num2;
    cout<<"\nthe mul is"<<num1*num2;
    cout<<"\nthe mode is"<<num1%num2;
    return 0;
}