#include<iostream>
using namespace std;
// In case of using struct keyword the mamory allocation is every member use in size to add and after that momory allocated
//in case of structure we have a use a multipul data type at a time
 typedef struct empoly
{
    int id; //4                  //total memory use in 9
    char favchar; //1
    float salary; ///4
} ep;
// In case of using union keyword the mamory allocation is every member use in size union consider a higer size member memory allocation 
// In case of union we have a use only one data type at a time
union money
{
    int rice; //4              //total memeory use in 4
    char car; //1
    float pounds; //4
};


int main(){
/*union money m1;
m1.rice =36;
cout<<rice;
*/
    /*struct empoly het;
    struct empoly parshav;
    het.id = 1;
    het.favchar ='c';
    het.salary = 100000;
cout<<"The information about your empoly is : "<<het.id<<endl;
cout<<"The information about your empoly is : "<<het.favchar<<endl;
cout<<"The information about your empoly is : "<<het.salary<<endl;
cout<<endl;
    parshav.id = 2;
    parshav.favchar ='p';
    parshav.salary = 10000000;
cout<<"The information about your empoly is : "<<parshav.id<<endl;
cout<<"The information about your empoly is : "<<parshav.favchar<<endl;
cout<<"The information about your empoly is : "<<parshav.salary<<endl;
*/
enum meal{ breakfast , lunch , dinner };
cout<<breakfast;
cout<<lunch;
cout<<dinner<<endl;
    return 0;
}