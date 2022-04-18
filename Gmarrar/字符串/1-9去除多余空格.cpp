#include<stdio.h>
int main() {
    int c;
    int n=0;  //n==1���´ο��Գ��ֿո�
    while((c=getchar()) != EOF) {
        //�����ǰ���ǿո�
        if(c!=' ') {
            //�����´γ���һ���ո�
            n=1;
            putchar(c);
        }
        //����ǵ�һ�γ��ֵĿո�
        else if(c==' '&&n==1) {
            putchar(c);
            //��һ���������ǿո�
            n=0;
        }
    }
    return 0;
}
