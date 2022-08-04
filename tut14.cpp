#include<iostream>

using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;


int main()
{
//     struct employee harry;
//     struct employee roahn;
//      harry.eId=1;
//      harry.favChar='d';
//      harry.salary=100000;

//      roahn.eId=2;
//      roahn.favChar='g';
//      roahn.salary=200000;

//      cout<<harry.eId<<endl;
//      cout<<harry.favChar<<endl;
//      cout<<harry.salary<<endl;

//      cout<<roahn.eId<<endl;
//      cout<<roahn.favChar<<endl;
//      cout<<roahn.salary;


    union money
    {
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
    };


        // union money m1;
        // m1.rice = 34;
        // m1.car='c';
        // cout<<m1.rice;

    enum Meal{brkfst, lunch,dinner};
        Meal m1 = lunch;
        Meal m2 = lunch;
        cout<<(m1==1);
        cout<<m2;   



        return 0;
}