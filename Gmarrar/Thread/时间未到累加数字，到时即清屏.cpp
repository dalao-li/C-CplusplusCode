#include<iostream>
#include<thread>
#include<stdlib.h>
#include<time.h>
using namespace std;

void playThread01()
{
    for(int i=0;i<100;i++){
        cout<<i<<" "<<endl;
    }
}
void playThread02()
{
    //����ʱ����� 
    int hour;  
    int mintue;  
    int second; 
    
    //����ʱ�� 
    cout<<"�����뵹��ʱ��ʱ��(Сʱ�����ӣ���)��"; 
    cin>>hour>>mintue>>second;  
    
    //ֻҪʱ��δ������һֱִ��ѭ��
    while(hour!=0||mintue!=0||second!=0){ 
        //ȡ�õ�ǰʱ��    
        time_t t=time(NULL);   
        while(time(NULL)==t);  
        if(--second<0){  
            second=59;  
            if(--mintue<0){  
                mintue=59;  
                --hour<0;  
            }  
        } 
        //���ʱ��  
        cout<<'\r';  
        if(hour<10){
            cout<<0;    
        }  
        cout<<hour<<':';  
        if(mintue<10){
            cout<<0;
        }  
        cout<<mintue<<':';  
        if(second<10){
            cout<<0; 
        } 
        cout<<second<<flush;      
    }  
    cout<<endl<<"--------------Time out!-------------"<<endl;
    cout<<endl<<"--------------Game over!------------"<<endl;  
    cout<<'\a';  
    
} 
 

int main()
{
    thread task01(playThread01());
    thread task02(playThread02());
    task01.detach();
    task02.detach();
    return 0;
}
