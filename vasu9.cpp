#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age : "<<endl;
    cin>>age;

                //**************selection conterol statement: if else ledder**************// 

    if ((age<18) && (age>0))
     {
     cout<<"you can not come to the party : "<<endl;
    }
    else if (age==18)
    {
        cout<<"you are a kid you go to the children party  : "<<endl;
    }
    else if (age<1)
    {
        cout<<"you can not born : "<<endl;
    }
    else 
    {
        cout<<"come to the party : "<<endl;
    }
             //**************selection conterol statement: switch case statement**************// 

    switch (age)
    {
        case 22:
        cout<<"your aer 22";
        break;
        case 78:
        cout<<"your aer 78";
        break;
        case 45:
        cout<<"your aer 45";
        break;
        case 12:
        cout<<"your aer 12";
        break;
        case 13:
        cout<<"your aer 13";
        break;
        default:
        cout<<"invalid input";
        break;
    }
    return 0;
}