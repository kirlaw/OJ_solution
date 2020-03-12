#include<stdio.h>

int main(){
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
    int n;
    double price[4]={3.00,2.50,4.10,10.20};
    int i=0;
    while(i<5){
        scanf("%d",&n);
        i++;
        if(n==0){
            break;
        }
        else if(n>4){
            printf("price = 0.00\n");
        }
        else{
            printf("price = %.2f\n",price[n-1]);
        }
    }    
    return 0;
}