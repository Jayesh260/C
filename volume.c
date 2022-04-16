#include<stdio.h>
int main(){
   float radiusofball,volumeofball;
   scanf("%f",&radiusofball);
   volumeofball=(4.0/3.0)*3.14*radiusofball*radiusofball*radiusofball;
   printf("%f",volumeofball);
    return 0;
}