/*
国王将金币作为工资，发放给忠诚的骑士。第一天，骑士收到一枚金币；
之后两天（第二天和第三天）里，每天收到两枚金币；之后三天（第四、
五、六天）里，每天收到三枚金币；之后四天（第七、八、九、十天）
里，每天收到四枚金币……这种工资发放模式会一直这样延续下去：当
连续N天每天收到N枚金币后，骑士会在之后的连续N+1天里，每天收到
N+1枚金币（N为任意正整数）。
你需要编写一个程序，确定从第一天开始的给定天数内，骑士一共获得了多少金币。
*/
#include<stdio.h>
int main()
{
    int n,i,j=1,k=1,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=k;
        if(i==j){
            k++;   //k表示当天可以获得的金币数 
            j+=k;  //j表示到获得下一金币数所需要经历的天数 
        }
    }
    printf("%d\n",sum);
    return 0;
}

/*
int n,sum=0,day=0;coins=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
    sum+=coins;
    day++;
    if(coins==day){
        coins++;
        day=0;
    }
}
printf("%d\n",sum);
    return 0;
*/


