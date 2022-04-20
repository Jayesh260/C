#include<stdio.h>
int main(){
    int no,ans;
    ans=0;
    printf("Enter First No:");
    scanf("%d",no);
    printf ("Operation You Want to perform:");
    char op;
    scanf("%c",&op);
    if(op!='='){
    switch (op)
    {
    case '+':
    int other;
    printf("Enter other no:");
    scanf("%d",&other);
    ans=no+other;
    break;
    case '-':
    int other;
    printf("Enter other no:");
    scanf("%d",&other);
    ans=no-othe
    break;
    case '*':
    int other;
    printf("Enter other no:");
    scanf("%d",&other);
    ans=no*other;
    break;
    case '/':
    int other;
    printf("Enter other no:");
    scanf("%d",&other);
    ans=no/other;
    break;
    default:
    printf("'Enter valid input(+,-,*,/)'");
        break;
    }
    }
    else
    {
        printf("%d",ans);
    }
    return 0;
}
