#include<stdio.h>

int main(){
    char x;
    int letter=0,blank=0,digit=0,other=0;
    for(int i=0;i<10;i++){
        scanf("%c",&x);
        if(('a'<=x&&x<='z') || ('A'<=x&&x<='Z')){
            letter++;
        }
        else if(x==' '||x=='\n'){
            blank++;
        }
        else if('0'<=x&&x<='9'){
            digit++;
        }
        else{
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
    return 0;
}