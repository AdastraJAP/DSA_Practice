#include <stdio.h>
#include <stdlib.h>


int main(){
int a[50],size,i;
printf("Enter the size of the array : ");
scanf("%d",&size);
if (size >50 || size <= 0) {
    printf("Invalid size. Please enter a size between 1 and 50.\n");
    return 1;
}
printf("Enter the elements of the array: ");
 for (i=0; i<size; i++){
    scanf("%d",&a[i]);
 }
printf("The elements of the array are : ");

for (i=0;i<size;i++){
    printf("%d ", a[i]);
}

    return 0;
}