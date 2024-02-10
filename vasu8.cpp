#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a= 65;
    cout<<"the value of a is : "<<a<<endl;
    a=52;
    cout<<"the value of a was : "<<a<<endl;

                             //***************** constent in c++ *****************//

     //const float =98.45;
    cout<<"the value of a is : "<<a<<endl;
    a=52;
    cout<<"the value of a was : "<<a<<endl;
      //op 
     //error: expected unqualified-id before '=' token
     //const float =98.45;

                                //***************** Manipulators*****************// 
     
     //in case of Manipulators first of all we have include  #include<iomanip> 
     //two type of function are used 1. endl 2. setw
      int b=45,c=789,s=7894;
      cout<<"The value of b without setw is b : "<<b<<endl;
      cout<<"The value of c without setw is c : "<<c<<endl;
      cout<<"The value of s without setw is s : "<<s<<endl;
      cout<<endl;

      cout<<"The value of b with setw is b : "<<setw(5)<<b<<endl;
      cout<<"The value of c with setw is c : "<<setw(5)<<c<<endl;
      cout<<"The value of s with setw is s : "<<setw(5)<<s<<endl;

                             //***************** Operator Precedence *****************// 
        
        int g=8,h=4;
        int j=((((g*5)+h)-78)+65);
        cout<<endl;
        cout<<j;
                    
    return 0;
}