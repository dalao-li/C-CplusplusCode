#include<iostream>
using namespace std;
int main() {
	int payMoney,i;
	int money[6]= {100,50,20,10,5,1};
	int quantity[6]= {0};
	cin>>payMoney;
	for(i=0; i<6; i++) {
		//若至少能用一张
		if(payMoney>=money[i]) {
			quantity[i]=payMoney/money[i];
			payMoney-=quantity[i]*money[i];
			if(payMoney==0) {
				break;
			}
		}
		//一张都用不了
		else {
			continue;
		}
	}
	for(i=0; i<6; i++) {
		cout<<quantity[i]<<endl;
	}
	return 0;
}
