//t.detach()�����ڳ���һ���п�ʼ�������ַ�
//t.join()��ȴ��������߳̽������ż�������ִ��
#include <iostream>
#include <thread>
#include<windows.h>

using namespace std;

void output1() {
    for (int i = 0; i < 4; i++) {
        cout <<"�߳�1:" <<i << endl;
    }
}

void output2() {
    for (int i = 0; i < 4; i++) {
        cout <<"�߳�2:"<<i*i<<endl;
    }
}

int main() {
    //����һ���߳�t
    thread t1(output1);
    thread t2(output2);
    //���߳��ں�̨����������ȴ����̵߳����
    t1.detach();
    Sleep(1000);
    t2.detach();
    Sleep(1000);
    return 0;
}
