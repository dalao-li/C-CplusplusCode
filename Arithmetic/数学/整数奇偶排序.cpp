/*����10�����������У�������������Ҫ��:
1.������ǰ��ż���ں�2.�����Ӵ�С����
3.ż����С��������
*/
#include<iostream>
using namespace std;
int main() {
    int n,i,b[101]= {0};
    for(i=0; i<10; i++) {
        cin>>n;
        //b[n]��ֵΪ�����ֳ��ֵĴ��� 
        b[n]++;
    }
    for(i=99; i>=1; i-=2) {
        if(b[i]) {
            //�������ظ�����ʱ 
            while(b[i]--) {
                cout<<i<<" ";
            }
        }
    }
    for(i=0; i<=100; i+=2) {
        if(b[i]) {
            while(b[i]--) {
                cout<<i<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}
