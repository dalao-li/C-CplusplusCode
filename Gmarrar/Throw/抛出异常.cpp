#include<iostream>
#include<stdlib.h>
using namespace std;
double fun(double x,double y) {
	if(y==0) {
		throw y;        //除数为0,抛出异常
	}
	return x/y;
}

int main() {
	double res;
	try {               //定义异常
		res=fun(2,3);
		cout<<"The result of x/y is:"<<res<<endl;
		res=fun(4,0);   //出现异常 
	}
	catch(double){      //捕获并处理异常 
		cerr<<"Error of dividing zero."<<endl;
		exit(1);          
	} 
}
