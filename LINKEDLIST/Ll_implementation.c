#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
int main(){

struct node  *head,*newnode,*temp;
head=0;
int choice =1;
while(choice !=0){
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d",&newnode->data);
newnode->next=0;

if(head==0){
    head=temp=newnode;
}
else{
    temp->next=newnode;
    temp= newnode;
}
printf("Press 1 to continue and 0 to stop: ");
scanf("%d",&choice);
}
temp=head;
printf("List is: ");
while(temp!=0){
    printf("%d",temp->data);
    printf("->");
    temp=temp->next;
}
printf("NULL\n");

    temp = head;
    struct node* toFree;
    while (temp != 0) {
        toFree = temp;      // save current node
        temp = temp->next;  // move to next
        free(toFree);       // free the saved one
    }
    return 0;
}