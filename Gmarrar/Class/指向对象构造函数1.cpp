#include<iostream>
using namespace std;
class Time {
    public:
        Time(int,int,int);
        int hour;
        int minute;
        int sec;
        void get_time();
};
Time::Time(int h,int m,int s) {
    hour=h;
    minute=m;
    sec=s;
}

void Time::get_time() {
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

int main() {
    Time t1(10,13,56);
    int *p1=&t1.hour;              //����ָ���������ݵ�ָ�����P1����ʹ��ָ��t1.hour
    cout<<*p1<<endl;
    t1.get_time();                 //���ö���t1��һ����Ա����get_time()
    Time *p2=&t1;                  //����ָ����Timeһ������t1��ָ���������ʹp2ָ��t1
    p2->get_time();                //p2ָ��t1�ĳ�Ա����get_time
    void(Time::*p3)();             //����ָ����Time������Ա������һ��ָ�����p3
    p3=&Time::get_time;            //p3->get_time,p3ָ��get_time
    (t1.*p3)();                    //��t1.get_time
}
