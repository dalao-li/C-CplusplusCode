#include<iostream>
using namespace std;
int main(){
    int a[10]={0,0,5,9,3,3,6,6,7,12};
    int max=a[0];
    for(int i=1;i<10;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    //����Ͱ,Ͱ�ĸ���Ϊ������Ԫ�ص����ֵ+1,��Ŷ�ӦͰ�ĸ��� 
    int *b=new int [max];
    //��Ͱ,����ͬ��С��Ԫ�ط����Ӧ��ŵ�Ͱ�� 
    for(int i=0;i<max+1;i++){
        b[i]=0;
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<max+1;j++){
            //�ҵ��˶�Ӧ��Ͱ 
            if(a[i]==j){
                //Ͱ��������һ 
                b[j]++;
            }
        }
    } 
    //���������ÿ��Ͱ����Ͱ�ڻ���Ԫ��ʱ���Ͱ����ţ���Ԫ�ص�ֵ 
    for(int i=max;i>=0;i--){
        for(int j=b[i];j>0;j--){
            cout<<i<<endl;
        }
    }
    return 0; 
} 

