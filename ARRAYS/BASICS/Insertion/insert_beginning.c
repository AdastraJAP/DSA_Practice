#include<stdio.h>
#include<stdlib.h>

int main (){

    int a[50],size,i, num;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    if(size > 50 || size <=0){
        printf("Invalid size \n") ;
        return 1;
    }
    
    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("The elements of the array are : ");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter the number you want to insert:\n");
    fflush(stdout);
    scanf("%d",&num);

    for(i=size-1;i>=0;i--){
        a[i+1]=a[i];
    }
      a[0]=num;
      size++;
      printf("The new array is : ");

      for(i=0;i<size; i++){
        printf("%d ",a[i]);
      }
    



    return 0;
}