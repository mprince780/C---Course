#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int a = 13;
    int *b=&a;
    int **c=&b;

    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<*b<<endl;
    cout<<c;

    return 0;
}
