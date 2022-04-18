#include<iostream>
#include<set>
using namespace std;
int main() {
    set<int> s1;
    int n,temp;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>temp;
        //����һ����������s1��,�Զ�ִ�������ȥ�� 
        s1.insert(temp);
    }
    for(set<int>::iterator it = s1.begin(); it!=s1.end(); it++) {
        cout<<*it<<" ";
    }
    return 0;
}
