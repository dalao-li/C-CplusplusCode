#include<stdio.h>
#include<stdlib.h>
//注意必须调用stdlib.h函数库
int main(void) {
	int a;
	scanf("%d",&a);
	char str[30];
	//2即是代表转换为2进制
	itoa(a,str,2);
	printf("%s",str);
	return 0;
}

