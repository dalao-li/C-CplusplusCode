#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define MAXPARKSPORT 5
using namespace std;
typedef struct {
    char flag;
    int licensePlate;

} Car,*CarList;

//���
typedef struct {
    Car *base;
    //ͷָ��
    int front;
    //βָ��
    int rear;
} Road,*RoadList;

//��ʼ�����
void initQuene(Road &r) {
    r.base = (CarList)malloc(MAXPARKSPORT *sizeof(Road));
    if(!r.base) {
        exit(0);
    }
    //ͷβָ����Ϊ0����Ϊ��
    r.front = r.rear = 0;
    printf("��ʼ���ɹ�\n");
}


//����������
void carDirvingInRoad(Road &r,Car &elem) {
    if((r.rear +1) % MAXPARKSPORT == r.front) {
        return;
    }
    //��Ԫ�ز����β
    r.base[r.rear] = elem;
    //��βָ���1
    r.rear = (r.rear + 1) % MAXPARKSPORT;
}

//�����뿪���
void carLeaveRoad(Road &r,Car &c) {
    if(r.front == r.rear) {
        return ;
    }
    c = r.base[r.front];
    //��ͷָ���1�൱��ɾ���˶�ͷ
    r.front = (r.front + 1)  % MAXPARKSPORT ;
}

//��Ѱ������ͨ���ڵ�λ��
int getCarPositon2(Road &r,Car &elem) {
    for(int i = r.rear ; i>=r.front  ; i--) {
        if(elem.licensePlate == r.base[i].licensePlate) {
            return i;
        }
    }
    return -1;
}

int main() {
    Car c;
    Road r;
    initQuene(r);
    for(int i = 0 ; i < 3; i++) {
        cin>>c.flag>>c.licensePlate;
        carDirvingInRoad(r,c);
        cout<<"��ӳɹ�"<<endl;
    }
    cin>>c.flag>>c.licensePlate;
    cout<<getCarPositon2(r,c);
}
