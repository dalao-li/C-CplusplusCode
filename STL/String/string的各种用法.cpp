#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main() {
    //���弰��ʼ��
    string s1;

    string s3= "Ich liebe dich!";                 //ֱ�ӳ�ʼ��
    string s4(10,'a');                            //s4�д���10��a
    string s5(s4);                                //������ʼ��������ַ���
    string s6=string(6,'c');
    string s7=s3+s4;
    string s8="";                                 //s8Ϊ���ַ���

    /*-------string�Ĳ���--------*/

    getline(cin,s1);                              //��getline����ȡһ��������
    string s2=s1;                                 //s2��s1�ĸ���
    int size=s3.size();

    /*����string������ַ���ֵ���ַ�����ֵ����һ�������ʹ��ʱ��
    ����ȷ��+��������������������һ����string*/
    string s10 = s2 + ", ";                       //s2��ĩβ���� ","
    string s11 = s1 + "hello " + ", ";            //��һ��˳��s1��ǰͷ����ȷ�ˣ�ע������=���ұߵ�����˳��

    /*--------���---------------*/
    cout<<"s1:"<<s1<<endl;
    cout<<"s2:"<<s2<<endl;
    cout<<"s3:"<<s3<<" "<<size<<endl;
    cout<<"s4:"<<s4<<endl;
    cout<<"s5:"<<s5<<endl;
    cout<<"s6:"<<s6<<endl;
    cout<<"s7:"<<s7<<endl;
    cout<<s8.empty()?"s8 is empty string":"NO";    //s8Ϊ��ʱ����true
    cout<<"s10:"<<s10<<e-ndl;
    cout<<"s11:"<<s11<<endl;
}
