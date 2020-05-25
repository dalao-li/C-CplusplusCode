#include<iostream>
using namespace std;
typedef long long ll;

ll fastPower(int a,int b) {
	if(a==0) {
		return 0;
	} else if(b==0) {
		return 1;
	}

	ll res = 1;
	while(b) {
		if(b&1) {
			res*=a;
		}
		b>>=1;
		a*=a;
	}
	return res;

}
int main() {
	int a,b;
	cin>>a>>b;
	cout<<fastPower(a,b)<<endl;
	return 0;
}
