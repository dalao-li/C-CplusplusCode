#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
#include<iostream>
using namespace std;
typedef struct {
	int data;
	char alpht;
} SlemType;

typedef struct {
	SlemType *top;   //栈顶指针
	SlemType *base;  //栈底指针
	int size;
} Stack ;

//栈的初始化
void initStack(Stack &S) {
	S.base = (SlemType *) malloc (MAXSIZE*sizeof(Stack));
	if(!S.base) {
		exit(0);
	}
	S.top = S.base;
	S.size = MAXSIZE;
	printf("初始化成功\n");
}

//入栈
void pushStack(Stack &S,SlemType &e) {
	//如果满栈
	if(S.top - S.base == S.size) {
		exit(0);
	}
	*S.top = e;
	S.top++;
}


//出栈
void popStack(Stack &S) {
	if(S.top == S.base) {
		exit(0);
	}
	--S.top;
}

void

int find(Stack &S,SlemType &e) {
	int i = 1;
	for(SlemType *p = S.top-1; p != S.base-1; p--,i++) {
		if(e.data == p->data) {
			return i;
		}
	}
	return -1;
}

void somePop(Stack &S,Stack &S2,SlemType &e) {
	int position = find(S,e);
	SlemType e1;
	for(int i =S.size ; i>position ; i--) {
		e1 = *(S.top-1);
		popStack(S);
		cout<<e1.data<<" "<<e1.alpht<<"离开S"<<endl;
		pushStack(S2,e1);
		e1 = *(S2.top-1);
		cout<<e1.data<<" "<<e1.alpht<<"进入S2"<<endl;
	}
	popStack(S);
	cout<<e.data<<" "<<e.alpht<<"离开S"<<endl;
	for(int i =S2.size ; i>position ; i--) {
		e1 = *(S2.top-1);
		popStack(S2);

		cout<<e1.data<<" "<<e1.alpht<<"离开S2"<<endl;
		pushStack(S,e1);
		e1 = *(S.top-1);
		cout<<e1.data<<" "<<e1.alpht<<"进入S"<<endl;
	}


}

void print(Stack &S) {
	cout<<"-----------"<<endl;
	for(SlemType *e = S.top-1; e != S.base-1; e--) {
		printf("%d %c\n",e->data,e->alpht);
	}
	cout<<"-----------"<<endl;
}







void judge(Stack &S) {
	if(S.top - S.base == S.size ) {
		cout<<"满栈"<<endl;
	}
}
int main() {
	Stack S,S2;
	initStack(S);
	initStack(S2);
	int n = 5;
	SlemType e;
	for(int i = 0 ; i < 5; i++) {
		cin>>e.data>>e.alpht;
		pushStack(S,e);
		judge(S);

	}
	print(S);
	cin>>e.data>>e.alpht;
	cout<<find(S,e);
	/*cin>>e.data>>e.alpht;
	somePop(S,S2,e);*/
	print(S);
	return 0;
}



