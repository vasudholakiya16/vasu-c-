#include<iostream>
using namespace std;
int sum(int a, int b){
    cout<<"using function with 2 argument "<<endl;
    return a+b;
}
// Calculate of a volum of cylinder
int volum( double r, int h){
    return (3.14 * r * h);
}
//claculate the volum of cube
int volum( int a){
    return (a * a * a);
}
//Rectuangle box 
int volum( int l, int b, int h){
    return (l*b*h);
}

int sum(int a, int b, int c){
    cout<<"using function with 3 argument "<<endl;
    return a+b+c;
}

int main(){
    cout<<"The sum of 6 and 7 is : "<<sum(6,7)<<endl;
    cout<<"The sum of 4 ,7 and 8 is : "<<sum(4,7,8)<<endl;
    cout<<" The volum of cuboide 7,8 and 6 is : "<<volum(7,8,6)<<endl;
    cout<<" The volum of cylinder of redius 7 and hight  6 is : "<<volum(7,6)<<endl;
    cout<<" The volum of cube of side 3 is : "<<volum(3)<<endl;
    
    return 0;
}