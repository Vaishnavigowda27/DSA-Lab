#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *next;
    char name[25], usn[15], branch[10];
    int sem;
    int ph_no;
} *newnode, *head = NULL, *temp, *tail,*prev;

void create(){
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = NULL;
    printf("\nEnter Name:");
    scanf("%s", newnode->name);
    printf("Enter USN:");
    scanf("%s", newnode->usn);
    printf("Enter branch:");
    scanf("%s", newnode->branch);
    printf("Enter Sem:");
    scanf("%d", &newnode->sem);
    printf("Enter Phone Number:");
    scanf("%d", &newnode->ph_no);
  if (head == NULL){    
      tail = temp = head = newnode;
    }
  else{
      temp->next = newnode;
      temp=temp->next;
    }
}

int insertfront(){
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = NULL;
    printf("\nEnter Name:");
    scanf("%s", newnode->name);
    printf("Enter USN:");
    scanf("%s", newnode->usn);
    printf("Enter branch:");
    scanf("%s", newnode->branch);
    printf("Enter Sem:");
    scanf("%d", &newnode->sem);
    printf("Enter Phone Number:");
    scanf("%d", &newnode->ph_no);
      newnode->next = head;
      head = newnode;
}

int delfront(){
    temp = head;
    temp = temp->next;
    free(temp);
}

int insertend(){
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Name:");
    scanf("%s", newnode->name);
    printf("Enter USN:");
    scanf("%s", newnode->usn);
    printf("Enter branch:");
    scanf("%s", newnode->branch);
    printf("Enter Sem:");
    scanf("%d", &newnode->sem);
    printf("Enter Phone Number:");
    scanf("%d", &newnode->ph_no);
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
}

int delend(){
    temp = head;
while (temp->next != NULL){
        prev = temp;
        temp = temp->next;
}
        prev->next = NULL;
        tail = prev;
        free(temp);
    }

void display(){
        temp = head;
        int count = 1;
    while (temp != NULL){
  printf("\nDetails of Student %d", count++);
  printf("\nName:%s\nUsn:%s\nbranch:%s\nSem:%d\nPhone Number:%d\n", temp->name, temp->usn, temp->branch, temp->sem, temp->ph_no);
        temp = temp->next;
        }
}

int main() {
   int n,ch;
    while(1) {
     printf("\nSingle linkedlist for Student details\n\n1.Create\n2.Insert at front\n3.Delete at front\n4.Insert at end\n5.Delete at end\n6.Display\n7.Exit\n");
     printf("Enter your choice:\n");
     scanf("%d", &ch);
        switch (ch) {
        case 1: printf("\nEnter No. of students:");
                scanf("%d", &n);
                for (int i=0;i<n;i++) {
                 create();
                }
                 break;
        case 2:insertfront();
                 break;
        case 3:delfront();
                 break;
        case 4:insertend();
                 break;
        case 5:delend();
                 break;
        case 6:display();
                 break;
        case 7:exit(0);
                 break;
       default:printf("\ninvalid choice\n");
                 break;
      }
   }
}