#include<iostream>
using namespace std;


int sum(int a, int b){
    int c = a+b;
    return c;
}

// void swap(int a, int b){
//     int temp =a;
//     a=b;
//     b = temp;
// }

void swapPointer(int* a, int* b){
    int temp =*a;
    *a=*b;
    *b = temp;

    //cout<<a<<b;
}

//cout<<a<<b;

int main()
{
    int x=4,y=5;
    cout<<x<<y<<endl;
    swapPointer(&x,&y);
    cout<<x<<y<<endl;
    //cout<<"the sum is "<<sum(4,5);
    return 0;
}
