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

//˳�����ȡֵ,
int getElem(Sqlist &L,const int index) {
    if(index>=L.length||index<0) {
        printf("��������!");
        return 0;
    }
    return L.elem[index];
}

//˳����Ĳ���
bool locateElem(Sqlist &L,int e) {
    for(int i=0; i<L.length; i++) {
        if(L.elem[i]==e) {
            return true;
        }
    }
    return false;

}

//˳����Ĳ���,��ĩβ
void insertElem(Sqlist &L,int e) {
    //�������ĳ��� 
    ++L.length;
    //��ֵ���뵽ĩβ 
    L.elem[L.length-1]=e;
}

//ʵ�ֽ�s2����s1�в�����Ԫ��ժȡ��s1��
void mergeList(Sqlist &S1,Sqlist &S2) {
    int size1=S1.length;
    int size2=S2.length;
    int e;
    for(int i=0; i<size2; i++) {
        //����s2��ÿһ��Ԫ��,���丳��e
        e=getElem(S2,i);
        //��e����S1�У���������s1��ĩβ
        if(locateElem(S1,e)==false) {
            insertElem(S1,e);
        }
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
    Sqlist S1,S2;
    int size1,size2;
    scanf("%d",&size1);
    initialize(S1,size1);
    scanf("%d",&size2);
    initialize(S2,size2);
    mergeList(S1,S2);
    ouputElem(S1);
}

