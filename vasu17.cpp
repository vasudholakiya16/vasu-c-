#include<iostream>
using namespace std;
 /* inline int product(int a, int b){  // in case of using receration , static variable no uses inline function
    return a*b;
}
note: if we make a inline function it is a one type of request to compiler to make a inline function
*/

// Default argument : it is a which type of aregument if we not give a value it is come bi default in turms of value
// float moneyReceived( float factor=1.08,int currentMoney) if we have not retturn this type 
float moneyReceived(int currentMoney , float factor=1.08){
return currentMoney * factor;

}
 /*int product(int a, int b){ 
     static int c= 0; // This executs only one tyme
     c=c+1; //Next time this functon run, the value of c will be return 
    return a*b+c;
}
*/
/*constent argument :- it is a this type of argument exceidently your functon will not change value 
-- use a colyfier and this name is const.
int strlen(const char *p){
    
}
*/ 
int main(){
    //int a,b;
   // cout<<"enter the value of a and b is : "<<endl;
    //cin>>a>>b;
    //cout<<" The product of a and b is : "<<product(a,b)<<endl;
    //cout<<" The product of a and b is : "<<product(a,b)<<endl;
    int money = 100000;
    cout<<" If you have a "<<money<< " Rs in your bank account, you wil be received  "<<moneyReceived(money)<<  " Rs after 1 years"<<endl; 
    cout<<" for a VIP : If you have a "<<money<< " Rs in your bank account, you wil be received  "<<moneyReceived(money,1.1)<<  " Rs after 1 years"<<endl;
    return 0;
}