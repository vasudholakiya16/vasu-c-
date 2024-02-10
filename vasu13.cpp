#include<iostream>
using namespace std;

int main(){
                                     //Array example 

    int marks[5]={45,78,64,78,96};
    int mathmarks[4]={878,987,545,654};

    cout<<"This is a math mark : "<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<endl;
    marks[3]=789; //you can change the value of array
    cout<<"thsi is a mark : "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl; 

                                  // using for loop 
    int i=0;
    for(i=0;i<=4;i++)
    {
        cout<<"this is a math marks "<<i<<" is "<<marks[i]<<endl;
    }

                                        //using while loop
       while(i<=4){
           cout<<"this is a math marks "<<i<<" is "<<marks[i]<<endl;
           i++;
    }
      
                                       //using do while loop
     do{
         cout<<"this is a math marks "<<i<<" is "<<marks[i]<<endl;
           i++;
     }while(i<=4);
     
                                           //pointer with array
    int* p=marks;
    cout<<*p<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(p--)<<endl;
    cout<<*(--p)<<endl;
    

    cout<<"The value of marks [0] is "<<*p<<endl;
    cout<<"The value of marks [1] is "<<*(p+1)<<endl;
    cout<<"The value of marks [2] is "<<*(p+2)<<endl;
    cout<<"The value of marks [3] is "<<*(p+3)<<endl;
    cout<<"The value of marks [4] is "<<*(p+4)<<endl;
 
 
    return 0;
}