#include<iostream>
using namespace std;
int main() {
    long n,num=0;
    cin>>n; 
    //�ۼӸ����ָ�����λ�ϵĺ�
    while(n!=0) {
        num+=n%10;
        n/=10;
        //�������λ�ۼ�����ҵõ�����������һλ��
        if(num>=10&&n==0) {
            n=num;
            num=0;
        }
    }
    cout<<num<<endl;
    return 0;
}

    
        
