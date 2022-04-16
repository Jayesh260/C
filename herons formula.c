#include <stdio.h>
#include<math.h>
int main() {
int a,b,c; 
float s, area; 
scanf("%d %d %d",&a,&b,&c); 
s=(a+b+c)/(float)2; 
area=(float)sqrt(s* (s-a)*(s-b)*(5-c));
printf("%.21f", area); 
return 0;
}