#include<iostream>
using namespace std;


int main( )
{
    int i=0;
     int marks[]={23,45,65,45,76};
     cout<<marks[2]<<endl;
      marks[2]={34};
     cout<<marks[2]<<endl<<"new"<<endl;

    //  for (int i = 0; i < 5; i++)
    //  {
    //     cout<<marks[i]<<endl;
    //  }

    // while (i<=5)
    // {
    //     cout<<marks[i]<<endl;
    //     i=i+1;
    // }

    // do
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    // } 
    // while (i<5); 

    int *p =  marks;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;

    // cout<<*p<<endl;
    // cout<<*(p+1)<<endl;
    // cout<<*(p+2)<<endl;
    // cout<<*(p+3)<<endl;
    return 0;
}
