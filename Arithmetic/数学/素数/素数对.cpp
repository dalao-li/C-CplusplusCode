/*
�������Ϊ2��������Ϊ�����ԣ���5��7��17��19
�ȣ�����ĿҪ���ҳ�������������������n�������ԡ�
����
һ��������n��1 <= n <= 10000��
���
����С�ڵ���n�������ԡ�ÿ�����������һ�У���
���õ����ո��������û���ҵ��κ������ԣ����empty��
*/
#include<iostream>
#include<math.h>
using namespace std;
int isPrime(int n) {
    int i;
    for(i=2; i<=sqrt(n); i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n,i;
    bool a=false;
    cin>>n;
    for(i=2; i<=n-2; i++) {
        if(isPrime(i)&&isPrime(i+2)){
            cout<<i<<" "<<i+2<<endl;
            a=true;
        }
    }
    if(a=false){
        cout<<"empty"<<endl;
    }
    return 0;
}
