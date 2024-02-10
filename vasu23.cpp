#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter(void) { counter = 0;}
    void setprice(void);
    void displyprice(void);

};

void shop :: setprice(void){
    cout<<"Enter Id for your item number "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price for your item "<<endl;
    cin>>itemPrice[counter];
    counter ++;
}

void shop :: displyprice(void){ 
    for (int i=0 ; i < counter ; i++ )
    {
        cout<<"The price of a item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;

    }
}

int main(){

shop v;
v.initCounter();
v.setprice();
v.setprice();
v.setprice();
v.displyprice();   
    return 0;
}