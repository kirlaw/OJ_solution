#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int pow(int n,int p){
    int a=n;
    while(--p){
        n=n*a;
    }
    return n;
}
//判断number是否为水仙花数，是则返回1，否则返回0
int narcissistic( int number ){
    int i;//保存数字位数
    int a[5]={-1};//最多五位
    int num=number;
    int dig=0;
    for(i=0;number>0;i++){
        a[i]=number%10;
        number=number/10;
    }
    for(int j=0;j<i;j++){
        if(a[j]!=-1){
            dig=dig+pow(a[j],i);
        }
    }
    if(num==dig){
        return 1;
    }
    return 0;
}
//打印开区间(m, n)内所有的水仙花数，每个数字占一行
void PrintN( int m, int n ){
    for(int i=m+1;i<n;i++){
        if(narcissistic(i)){
            printf("%d\n",i);
        }
    }
}