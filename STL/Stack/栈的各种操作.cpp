#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    int n,item;
    cin>>n;   
    for(int i=0;i<n;i++){
        cin>>item;
        //��ջ  
        s.push(item);
    }
    while(!s.empty()){
        //����ջ��Ԫ�� 
        cout<<s.top()<<" ";
        //ɾ��ջ��Ԫ�� 
        s.pop();
    }
    cout<<endl;
    return 0;
} 
