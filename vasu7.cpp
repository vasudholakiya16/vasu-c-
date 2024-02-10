#include<iostream>
using namespace std;
int c= 78;
int main()

{
                                //*************Build in data type *************// 

   int a,b,c;
   cout<<"enter the value of a is : "<<endl;
      cin>>a;
      cout<<"enter the value of b is : "<<endl;
      cin>>b;
   cout<<"the sum of the value is : "<<a+b<<endl;
   cout<<"the globel c is : "<<::c<<endl; //uses of ::(scope) is to decler the globel value in local variable

                             //*************Float,double,long double literlas *************// 

   float s= 65.15f; //as a c++ we have not usingn eny decimal number at the end word 'f' compiler always consider double value ex 89.85 it is a  double and 89.85f it is consider a float value.

   long double e=65.15; 
   cout<<"The sizeof 65.15 is : "<<sizeof(65.15)<<endl;
    cout<<"The sizeof 65.15f is : "<<sizeof(65.15f)<<endl;
    cout<<"The sizeof 65.15F is : "<<sizeof(65.15F)<<endl;
   cout<<"The sizeof 65.15l is : "<<sizeof(65.15l)<<endl;
    cout<<"The sizeof 65.15L is : "<<sizeof(65.15L)<<endl;
   cout<<"the value of s is : "<<s<<endl<<"the value of e is : "<<e<<endl;

                                //*************Reference Variable*************// 

 //in case of program we as a use call the same value but different type to call that time this function are use.
 float n= 458;
 float & y=n;
 cout<<n<<endl;
 cout<<y<<endl; 
                                //*************Type casting*************// 

   int d= 45.00;
   float h=87.56;
   cout<<"The vlaue of d is :"<<(float)d<<endl;
   cout<<"The vlaue of h is :"<<float(d)<<endl;

   cout<<"The vlaue of d is :"<<(int)h<<endl;
   cout<<"The vlaue of h is :"<<float(h)<<endl;

   cout<<"the expressin is : "<<d+h<<endl;
   cout<<"the expressin is : "<<d+(int)h<<endl;
   cout<<"the expressin is : "<<d+int(h)<<endl;

   cout<<"the expressin is : "<<d+(float)h<<endl;
   cout<<"the expressin is : "<<d+float(h)<<endl;

    return 0;  
}