#include<iostream>
#include<vector>
using namespace std;
typedef struct Address {
	string name;
	string birthday;
	char sex;
	string telephone;
	string movephone;
} Address;

void inputValue(vector<Address> &v,const int n) {
	Address add;
	for(int i=0; i<n; i++) {
		cin>>add.name>>add.birthday>>add.sex>>add.telephone>>add.movephone;
		v.push_back(add);
	}
}

void inputNumber(vector<int> &v,const int n) {
	int temp;
	for(int i=0; i<n; i++) {
		cin>>temp;
		v.push_back(temp);
	}
}

void findValue(vector<Address> &v1,vector<int> &v2) {
	for(vector<int>::iterator it=v2.begin(); it!=v2.end(); it++) {
		vector<Address>::iterator ut=v1.begin()+*it;
		if(ut<v1.end()) {
			cout<<ut->name<<" "<<ut->telephone<<" "
			    <<ut->movephone<<" "<<ut->sex<<" "<<ut->birthday<<endl;
		} else {
			cout<<"Not Found"<<endl;
		}
	}
}

int main() {
	vector<Address> v1;
	vector<int> v2;
	int n,k;
	cin>>n;
	inputValue(v1,n);
	cin>>k;
	inputNumber(v2,k);
	findValue(v1,v2);
	return 0;
}
