#include<iostream>
using namespace std;
int fib(int n) {
    if(n<2) {
        return 1 ;
    }
    return fib(n-2) + fib(n-1);
}
int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
} 
//calcluation
 /*factorial(4) = 4 * factorial (3)
                4 * 3 factorial (2)
                4 * 3 *2 factorial (1)
                4 * 3 *2 * 1
                =24
                */


int main()
{
    int a;
    cout<<"enter  a number :"<<endl;
    cin>>a;
    cout<<" the term in fibonacci sequence of a position  "<<a<< " is : "<<fib(a)<<endl;
    //cout<<" the factorial of "<<a<< " is : "<<factorial(a)<<endl;// use to find factorial code 
    //Factoril of a number 
    //5!= 4*5*3*2*1
    //0!= 1 by definition
    //0!= 1 by definition
    //n!= n*(n-1)!
    return 0;
    
}

