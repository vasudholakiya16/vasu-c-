#include<iostream>
using namespace std;

int sum (int a, int b){
    int c;
    c=a+b;
    return c;   
}
// This will not swap a and b
void swap (int a,int b) {  
int temp = a;                 
a = b;                     
b = temp;
}
// Temp   a     b   
// 4      4     5               
// 4      5     5 
// 4      5     4
/* op
The value of x is 4 and the value of y is 5
The value of x is 4 and the value of y is 5
in case of this argument we have see that a and b both value are not swap because of.....
in this condition a and b are actiual argumen and the a and b value are copy void swap (int a,int b) in this condition 
copy the value it is not effect by int x =4, y=5; this conditio it is a reasion that the not swapi a number
*/  
// call by refrence using pointers
void swapPointer(int* a,int* b) {  
int temp = *a;                 
*a = *b;                     
*b = temp;
}
/* op
The value of x is 4 and the value of y is 5
The value of x is 5 and the value of y is 4
*/
// call by refrence using C++ Variable 
void swapRefrenceVar(int &a,int &b) {  
int temp = a;                 
a = b;                     
b = temp;
}
/* op
The value of x is 4 and the value of y is 5
The value of x is 4 and the value of y is 5
*/
int & swapRefrenceVar(int &a,int &b) {  
int temp = a;                 
a = b;                     
b = temp;
return a;
}
/* op
The value of x is 4 and the value of y is 5
The value of x is 5454 and the value of y is 4
*/
int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    //swap(a,b);//This will not swap a and b
    //swapPointer(&x, &y); //This will  swap a and b using pointers refrence
    //swapRefrenceVar(x,y); //This will  swap a and b using refrence variable 
    swapRefrenceVar(x,y) =5454; //


    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    

    return 0;
}