#include<iostream>
 using namespace std;

 //function prototype
 //int sum(int a, int b);

int sum(int, int);
void g();

//  int sum(int a, int b)
//  {
//     int c=a+b;
//     return c;
//  }
 

 int main()
 {
    int num1,num2;
    cout<<"enter 1st number"<<endl;
    cin>>num1;
    cout<<"enter 2nd number"<<endl;
    cin>>num2;

    cout<<sum(num1,num2);
    g();
    return 0;
 }

 int sum(int a, int b)
 {
    int c=a+b;
    return c;
 }

 void g(){
    cout<<"\ngood mng";
 }
 
 