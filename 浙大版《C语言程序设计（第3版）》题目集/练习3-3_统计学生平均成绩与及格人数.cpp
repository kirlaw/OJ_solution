#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int s;
    double avg=0;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&s);
        avg+=s;
        if(s>=60){
            count++;
        }
    }
    if(n!=0){
        avg=avg/n;
    }    
    printf("average = %.1f\ncount = %d",avg,count);
}