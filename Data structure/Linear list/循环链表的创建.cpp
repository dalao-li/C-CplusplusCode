
#include<stdio.h>
#include<stdlib.h>

//建立一个结构体,数据成员为自己的密码
typedef struct List {
	int num;
	int possward;
	struct List *next;
} Lnode,*Linklist;



//建立链表函数
Lnode *creatJosephList(const int n) {
	//建立第一个节点
	Linklist pFirst;
	pFirst=(Linklist)malloc(sizeof(Lnode));
	//输入该节点的密码
	scanf("%d",&pFirst->possward);
	pFirst->num=1;
	pFirst->next=NULL;
	//tail代表尾节点
	Linklist p,tail;
	//首先让尾节点指向首节点
	tail=pFirst;
	for(int i=1; i<n; i++) {
		p=(Linklist)malloc(sizeof(Lnode));
		p->num=i+1;
		//输入该节点的密码
		scanf("%d",&p->possward);
		//连接到前一节点
		p->next=NULL;
		tail->next=p;
		tail=p;
	}
	tail->next=pFirst;
	return pFirst;
}

void ouputList(Linklist &pFirst,int n) {
	Linklist p;
	p=pFirst;
	for(int i=0; i<3; i++) {
		for(int j=0; j<n; i++) {
			printf("%d->",p->possward);
			p=p->next;
		}
	}
}

int main() {
	Linklist pFirst;
	int n;
	scanf("%d",&n);
	pFirst=creatJosephList(n);
	/*int index,e;
	scanf("%d%d",&index,&e);
	insertList(head,index,e);*/
	ouputList(pFirst,n);
	return 0;
}
