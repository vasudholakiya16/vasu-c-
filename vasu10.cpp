#include<iostream>
using namespace std;
int main()
{
                     /* Loops in c++ 
    There are three type of loops in c++
    1. for loop
    2. while loop
    3. do while loop */
                     /* Loops in c++
    syntax :- for(initialization; condition; updation)
    {
        loop body(c++ code)
        }*/
        //int i;
   
    for ( i=0;i<40;i++)
    {
        cout<<i<<endl;
    }
    /*
    explain infinit for loop
     for ( i=0;34<=40;i++)
    {
        cout<<i<<endl;
    }
    */
   /*while loop
   syntax : while (condition)
   {
       statement c++;
       }
       */
      //print 1 to 40 using while loop
      int i=1;
      while(i<=40)
      {
       cout<<i<<endl;
       i++;
     }
     /*
     explain infinit while loop
     int i=1;
      while(true)
      {
       cout<<i<<endl;
       i++;
     */
    /*do while loop
    syntax :- do
   {
       statement c++;
       } while (condition);
        */
       int j=1;
      do
      {
       cout<<j<<endl;
       j++;
     }while(j<=40);
     return 0;

}