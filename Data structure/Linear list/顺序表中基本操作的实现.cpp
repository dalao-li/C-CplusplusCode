#include<stdio.h>
#include<stdlib.h>

//����˳���
typedef int ElemType;

typedef struct {
    ElemType *elem;
    int length;
} Sqlist;

//˳����ĳ�ʼ��
void initialize(Sqlist &L) {
    //��̬���ٽṹ������
    //L.elem = (Polynomial *) malloc (MAXSIZE * sizeof(Polynomial)); 
    L.elem=(ElemType *) malloc (6 * sizeof(Sqlist));
    if(!L.elem) {
        return;
    }
    L.length=0;
    printf("��ʼ���ɹ�\n",L.length);
    //˳���������
    for(int i=0; i<5; i++) {
        scanf("%d",&L.elem[i]);
        L.length++;
    }
}

//˳�����ȡֵ,
void getElem(Sqlist &L,const int index) {
    if(index<1||index>L.length) {
        printf("��������!");
        return;
    }
    printf("��%d������ֵΪ:%d\n",index,L.elem[index-1]);
}

//˳����Ĳ���
int locateElem(Sqlist &L,const int e) {
    for(int i=0; i<L.length; i++) {
        if(L.elem[i]==e) {
            return i+1;
        }
    }
    return 0;
}

//˳����Ĳ��룬ǰ�� 
void insertElem(Sqlist &L,int index,int e) {
    if(index<1||index>L.length) {
        return;
    }
    //���ûλ�ò��� 
    /*if(L.length=MAXSIZE) {
        return;
    }*/
    for(int i=L.length-1; i>=index-1; i--) {
        L.elem[i+1]=L.elem[i];
    }
    L.elem[index-1]=e;
    L.length++;
}

//˳��������
void ouputValue(Sqlist &L) {
    for(int i=0; i<L.length; i++) {
        printf("%d\n",L.elem[i]);
    }
}

int main() {
    Sqlist L;
    initialize(L);
    printf("����������ҵ�����:");
    int index;
    scanf("%d",&index);
    getElem(L,index);
    printf("����������ҵ�ֵ:");
    int e;
    scanf("%d",&e);
    printf("%d������Ϊ%d\n",e,locateElem(L,e));
    printf("������������λ�ú�ֵ:");
    int index,e;


    scanf("%d%d",&index,&e);
    insertElem(L,index,e);
    printf("���鳤��Ϊ%d\n",L.length);
    ouputValue(L);
    return 0;


}
