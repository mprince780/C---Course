#include<iostream>

using namespace std;

int main()
{
    int age;
     cout<<"Tell me ur age"<<endl;
     cin>>age;
     if ((age>18) && (age>0)){
        cout<<"Allowed";
     }
     else if(age==18){
        cout<<"kid";
     }
     else if (age<1)
     {
        cout<<"not born";
     }
     else{
        cout<<"not allowed";
     }


    return 0;
}
