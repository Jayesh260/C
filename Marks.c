#include <stdio.h>
int main (){
    int i,j,temp,n;
    printf("Enter the no of students\n");
    scanf("%d",&n);
    int marks[n];
    printf("Enter the Marks of each student\n");
    //for taking the input of array
    for(i=0;i<n;++i){
    scanf("%d",&marks[i]);
    }
    //sorting the array 
    for (i=0;i<n;++i){
        for (j=i+1;j<n;++j){
            if (marks[i]<marks[j]){
                temp=marks[i];
                marks[i]=marks[j];
                marks[j]=temp;
                }
            }
        }
        //printing the highest two numbers
    printf("%d,%d\n",marks[0],marks[1]);
    return 0;
}