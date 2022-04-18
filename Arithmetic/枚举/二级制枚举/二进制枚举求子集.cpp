#include<iostream>
#include<cstdlib>
using namespace std;
int a[3]= {2,3,4};
int main() {
    //�Ӽ��ĸ���
    for(int i = 1; i<=(1<<3); i++) {
        //�Ӽ�������
        for(int j = 0; j<3; j++) {
            if(i&(1<<j)) {
                cout<<a[j]<<" ";
            }

        }
        cout<<endl;
    }
}

