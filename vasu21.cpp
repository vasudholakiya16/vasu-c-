#include<iostream>
using namespace std;

class empoly
{
    private:
    int a,b,c;

    public: 
    int d,e;
    void setData(int a1, int b1, int c1);  //Declaration
    void getData(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
        cout<<"The value of d is : "<<d<<endl;
        cout<<"The value of e is : "<<e<<endl;
    }
};
void empoly ::setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;

}
   int main(){
       empoly v;
       //v.a=145; //--> This will throw error because of a is private
       v.e=78;
       v.d=98;
       v.setData(1,2,6);
       v.getData();
      
    
    return 0;
   }