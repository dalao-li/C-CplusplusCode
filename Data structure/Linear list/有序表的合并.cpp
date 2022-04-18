#include<stdio.h>
#include<stdlib.h>

//����˳���
typedef struct {
    int *elem;
    int length;
} Sqlist;

//˳����ĳ�ʼ��
void initialize(Sqlist &L,const int n) {
    //��̬���ٽṹ������
    L.elem = (int *) malloc (100 * sizeof(Sqlist));
    if(!L.elem) {
        return;
    }
    L.length=0;
    printf("��ʼ���ɹ�\n",L.length);
    //˳���������
    for(int i=0; i<n; i++) {
        scanf("%d",&L.elem[i]);
        L.length++;
    }
}

//ʵ�ֽ�s1 s2�е�Ԫ�ذ�˳��ժȡ��s3��
void mergeList(Sqlist &S1,Sqlist &S2,Sqlist &S3) {

    int e;
    int start1=0,start2=0,start3=0;
    int end1=S1.length-1;
    int end2=S2.length-1;

    S3.elem=(int *) malloc (200 * sizeof(Sqlist));
    S3.length=S1.length+S2.length;
    //s1 s2��δ��ĩβʱ�����β�����������ֵ���ѽ�С��ֵ����s3��
    while(start1<=end1&&start2<=end2) {
        if(S1.elem[start1]<=S2.elem[start2]) {
            S3.elem[start3++]=S1.elem[start1++];
        } else {
            S3.elem[start3++]=S2.elem[start2++];
        }
    }
    //���s2�ȵ���ĩβ����ô��s1��ʣ��Ԫ�ز���s3��
    while(start1<=end1) {
        S3.elem[start3++]=S1.elem[start1++];
    }
    while(start2<=end2) {
        S3.elem[start3++]=S2.elem[start2++];
    }
}

//˳��������
void ouputElem(Sqlist &L) {
    for(int i=0; i<L.length; i++) {
        printf("%d ",L.elem[i]);
    }
    printf("\n");
}

int main() {
    Sqlist S1,S2,S3;
    int size1,size2;
    scanf("%d",&size1);
    initialize(S1,size1);
    scanf("%d",&size2);
    initialize(S2,size2);
    mergeList(S1,S2,S3);

    ouputElem(S3);
}

