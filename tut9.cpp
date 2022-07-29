#include<iostream>

using namespace std;

int main()
{
    int age;
     cout<<"Tell me ur age"<<endl;
     cin>>age;
    //  if ((age>18) && (age>0)){
    //     cout<<"Allowed";
    //  }
    //  else if(age==18){
    //     cout<<"kid";
    //  }
    //  else if (age<1)
    //  {
    //     cout<<"not born";
    //  }
    //  else{
    //     cout<<"not allowed";
    //  }

    switch (age)
    {
    case  18:
        cout<<"y r 18";
        break;

    case  22:
        cout<<"y r 22";
        break;

    case  5:
        cout<<"y r 5";
        break;        
    
    default:
        cout<<"no spl case";
        break;
    }


    return 0;
}
