#include <stdio.h>
int main() {
   int i,space,rows,k=0,j;
   scanf("%d",&rows);
   for(i=1;i<=rows-1;++i,k=0)  
   {
      for(space=1;space<=rows-i;++space) 
      {
         printf("  ");
      }
      while (k!=2*i-1) 
      {
         printf("%d ",i);
         ++k;
      }
      printf("\n");
   }
      for (i=rows;i>=1;--i)
      {
      for (space=0;space<rows-i;++space)
         printf("  ");
      for (j=i;j<=2*i-1;++j)
         printf("%d ",i);
      for (j=0;j<i-1;++j)
         printf("%d ",i);
      printf("\n");
      }
   return 0;
}