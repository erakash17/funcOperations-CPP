#include <iostream>
#include<test.h>
using namespace std;
//static const int test=0;

class Akash
{
public:
    mutable const int *pdata;//by using mutable we can modified const variable

    void func(int & a) const
    {
        a++;
        pdata = &a;

        //*pdata = 11;
        cout<<"value modified "<<*pdata<<endl;
    }


};
struct akash{//by using structure we can multiple return value from function
    int var1;
    int var2;
};

typedef struct akash Struct;
//call by  value with default argument checked with const parameter error throws (read only)
Struct product(int a,int b,int c=1){//const int c=1
//     c=5;
    Struct s;
    int d;
    d=a*b;

    s.var1=c;
    s.var2=d;
   return s;
}

//call by pointer refrence and overloading
int product(int *a,int *b){
    return *a**b;
    }
//call by variable refrence
int product1(int &a, int &b){
    return a*b;

}
int variables(){

//    cout<<"static int variable value is "<<test<<endl;
//    cout<<"volatile const int variable value is "<<test1<<endl;
    cout<<"Extern const int variable value is "<<test2<<endl;
//    data++;

}

int main()
{
    int x=5,y=10;
    Struct Result;
//    Result=product(x,y);
//    cout<<"Value of C is "<<Result.var1<<" And Product of a and b Is "<<Result.var2<<endl;//By Value
//    cout<<"Product is "<<product(&x,&y)<<endl;//By Pointer Refrence
//    cout<<"Product is "<<product1(x,y)<<endl;//By Variable Refrence
//    for(int i=0;i<5;i++){
//        variables();
//    }
    Akash object;
    int a=10;
    for(int i=0;i<5;i++){
    object.func(a);
}
    return 0;
}

