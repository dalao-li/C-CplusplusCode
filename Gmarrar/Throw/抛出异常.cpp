#include<iostream>
#include<stdlib.h>
using namespace std;
double fun(double x,double y) {
    if(y==0) {
        throw y;        //����Ϊ0,�׳��쳣
    }
    return x/y;
}

int main() {
    double res;
    try {               //�����쳣
        res=fun(2,3);
        cout<<"The result of x/y is:"<<res<<endl;
        res=fun(4,0);   //�����쳣 
    }
    catch(double){      //���񲢴����쳣 
        cerr<<"Error of dividing zero."<<endl;
        exit(1);          
    } 
}
