#include<iostream>
using namespace std;

int main(){
    int i;
                                //using break statement 
    for(i=0;i<=40;i++)
    {
        cout<<i<<endl;
        if(i==3){
            break;
        }
    }
                                //using continue statement
 for(i=0;i<=40;i++)
    {
    
        if(i==3){
            continue;
        }
            cout<<i<<endl;
    }
    return 0;
}           
