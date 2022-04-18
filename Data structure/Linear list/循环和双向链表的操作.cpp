#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct Lnode {
    ElemType data;
    struct Lnode *next;
} Lnode,*Linklist;



//��ʼ��
Lnode *initList(Linklist &head) {
    head = (Linklist)malloc(sizeof(Lnode));
    head->next=NULL;
    return head;
}

//��巨����ѭ������
Lnode *inputList(Linklist &head,int n) {
    head->next=NULL;
    //r��βָ��
    Linklist p,r;
    r=head;
    for(int i=0; i<n; i++) {
        p=(Lnode *)malloc(sizeof(Lnode));
        scanf("%d",&p->data);
        p->next=NULL;
        r->next=p;
        r=p;
    }
    p->next=head;
    return head;
}

//����
void ouputList(Linklist &head) {
    Linklist p;
    p=head->next; 
    while(p->next!=head) {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

/*
//����ѭ������������
Lnode *linkTwolinks(Linklist &head1,Linklist &head2) {
    //tail����β�ڵ�
    Linklist tail1,tail2;
    //һ��ʼβ�ڵ�ָ��ͷ�ڵ�
    tail1=head1;
    tail2=head2;
    while(tail1->next!=head1) {
        tail1=tail1->next;
    }
    while(tail2->next!=head2) {
        tail2=tail2->next;
    }
    Linklist p;
    p=tail2->next->next;
    tail2->next=tail1->next;
    tail1->next=p;
    return head1;
}

*/
int main() {
    Linklist head1,head2;
    head1=initList(head1);
    head2=initList(head2);
    int n;
    scanf("%d",&n);
    head1=inputList(head1,n);
    /*ouputList(head1);
    scanf("%d",&n);
    head2=inputList(head2,n);
    ouputList(head2);
    head1=linkTwolinks(head1,head2);*/

    ouputList(head1);
    return 0;
}
