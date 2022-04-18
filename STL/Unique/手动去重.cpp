/*
���������±�Ϊ0��Ԫ�ؿ�ʼ���Ƚϣ������ظ�Ԫ�غ��ԣ�������ͬԪ�أ�
�Ͱ������ͬԪ�ش��� t ���飬ͬʱ�ٴӸղ��Ǹ���ͬԪ���±괦��ʼ��
�����Ƚϣ��Դ����ơ�
*/ 
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int i = 0, j = 0;
    const int len = 10;  //����ĳ���
    int p[len] = { 0, 7, 7, 6, 1, 1, 5, 5, 8, 9 };
    int t[len] = {0};  //��������������
    int counter = 1;  //��¼t�����д��˶���Ԫ��

    sort(p, p + len);   //����

    t[0] = p[0];
    //ȥ��
    while (i < len) {
        if (p[i] != p[++j]) {
            i = j;
            t[counter++] = p[i];  //���ظ��Ĵ���t���飬Ȼ��counter��һ
        }
    }

    //���
    for (i = 0; i < (counter-1); i++)  //counter-1����t�����д��Ԫ�ظ���
        cout << t[i] << " ";  //0 1 5 6 7 8 9

    return 0;
}
