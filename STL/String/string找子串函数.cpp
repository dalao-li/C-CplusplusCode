#include<bits\stdc++.h>
using namespace std;
int main() {
    string str("heoolo sdaa ss");
    /*���ص����Ӵ�λ�á��ڶ��������ǲ��ҵ���ʼλ�ã�
    ����Ҳ������ͷ���string::npos*/
    
    if (str.find("as", 0) == string::npos) {
        cout << "�Ҳ������Ӵ���" << endl;
    }
    else{
        cout << str.find("as", 0) << endl;
    }
}
