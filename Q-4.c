#include<stdio.h>
int main(){
    int testnum1 , testnum2;
    scanf("%d", &testnum1 );
    scanf("%d", &testnum2 );
    int sum,sub,mult,mod ;
    float div;
    sum = testnum1 + testnum2;
    sub = testnum1 - testnum2;
    mult = testnum1 * testnum2;
    div = testnum2/(float)testnum1;
    mod = testnum1 % testnum2;
    printf("addition : %d\n",sum);
    printf("subtraction : %d\n",sub);
    printf("multiplication : %d\n",mult);
    printf("division : %f\n",div);
    printf("modulus : %0.3d\n",mod);
    return 0;
}