#include<stdio.h>
int main(){
    float a,b,ans=0;
    char op;
    sum:
    ans=a+b;
    sub:
    ans=a-b;
    mult:
    ans=a*b;
    divide:
    ans=a*b;
    mod:
    ans=(int)a%(int)b;
    printf("Enter 1st no:");
    scanf("f",&a);
    printf("Enter the operation you want to perform:");
    scanf("%c",op);
    if(op!='='){
        printf("enter the other no;");
        scanf("%d",&b);
        if(op='+'){
            goto sum;
        }
        else if(op='-'){
            goto sub;
        }
        else if(op='*'){
            goto mult;
        }
        else if(op='/'){
            goto divide;
        }
        else if(op='%'){
            goto mod;
        }
        else {
            printf("Enter Correct operation.");
        }
        if(op=='='){
            printf("%f",ans);
        }
    }
    return 0;
    }
