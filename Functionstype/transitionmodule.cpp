#include <iostream>
#include<test.h>
using namespace std;
//static const int test=0;


int variables(){

    cout<<"static int variable value is "<<test<<endl;
//    test++;

}

int main()
{

    variables();


    return 0;
}

