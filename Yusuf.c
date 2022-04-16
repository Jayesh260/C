#include <stdio.h>
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    (m*n)%2==0?printf("%d",(m*n)/(2*1)):printf("%d",((m*n)/2+1));
    return 0;
}