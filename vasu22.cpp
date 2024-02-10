                                   // Nesting of Number function                  
#include<iostream>
#include<string>
using namespace std;

class binary{
    private:
    string s;
    public: 
    void read(void);
    void chk_bin(void);
    void  once_complement(void);
    void display(void);
};
void binary :: read(void){    // This use because of this function read a binary number 
    cout<<"enter the binary number is : "<<endl;
    cin>>s;
}
   void binary :: chk_bin(void){  // This use because of this function will cheack use input is binary or not.
   // if binary then code will run propre way other wise display Incorrect binary operation.
        int i=0;
       for ( i=0;i<s.length();i++)
       {
           if (s.at(i)!='0' && s.at(i)!='1')
           {
           cout<<"Incorrect binary operation : "<<endl;
           exit(0);
        
           }

       }
   }
   void binary ::  once_complement(void){ //This use because of this function will once_complement of a given function 
   chk_bin();
        int i=0;
       for ( i=0;i<s.length();i++){
           if(s.at(i) == '0'){
               s.at(i) ='1';
           }
           else {
               s.at(i) = '0';
           }
       }

   }
   void binary :: display(void){ // This use because of this function will display your output
       cout<<"Disply your binary number is :"<<endl;
        int i=0;
       for ( i=0;i<s.length();i++){
           cout<<s.at(i);
         }
         cout<<endl;

   }
   int main(){
    binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.once_complement();
    b.display();
    return 0;
}

    // c++ --> classes and objects
    // class --> initially called --> c with classes by stroustroup 
    // structure had limitations 
    //          -- members are public
    //          -- no methods
    // classes --> structure + more
    // classes --> can have methods and properties 
    // classes --> can make few members as priveate & few as public
    // structure in c++ are typedefed 
    // you can declare ibjects along wiht the class declarion like this :
    /* class Employee {
        class definition 
    } vasu,parshave,harsh; */

    



