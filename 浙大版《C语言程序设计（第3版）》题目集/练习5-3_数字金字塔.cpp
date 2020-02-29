#include <stdio.h>

void pyramid( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
void pyramid( int n ){
    for(int i=1;i<=n;i++){
        for(int blank=n-i;blank>0;blank--){
            printf(" ");
        }
        for(int j=i;j>0;j--){
            printf("%d ",i);
        }
        printf("\n");
    }
}