#include <stdio.h>
int main()
{ 
   int sec,h,m,s,ds;
    scanf("%d",&sec);
    ds=sec/86400;
    h=(sec%86400)/3600;
    m=(sec%3600)/60;
    s=sec-((h*3600)+(m*60)+(ds*86400));
    printf("The Duration is %d days %d hours %d minutes %d seconds ",ds,h,m,s);
    return 0;
}
