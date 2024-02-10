#include<iostream>
using namespace std;
 int glo =8;
void sum (){
    int a; 
    cout<<glo;
}
int main()
{
    int glo = 9;
    glo= 89;
    int a=10;
    int b=15;
    float pi=3.14;
    char x = 'v';
    sum();
    bool d = false;
    cout<<glo<<d;

    //cout<<"the lecture is 3rd.\n the value of a is "<<a<<". \nthe vlaue of b is "<<b;
    //cout<<"\nthe value of pi is  = "<<pi;
    //cout<<"\nthe value of x is  = "<<x;
    return 0;
}