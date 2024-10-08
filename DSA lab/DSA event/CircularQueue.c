#include<stdio.h>
#include<stdlib.h>
#define MAX 4

char cq[MAX];
int front=-1,rear=-1;          

void enqueue() {
    if(front==-1 && rear==-1){       //Queue is Empty
         front=rear=0;
         printf("Enter the Character to insert in queue :");
         scanf(" %c",&cq[rear]);
    }
    else if((rear+1)%MAX==front){   //Queue is Full
     printf("Queue Overflow!");
    }
    else{                           // If some elements are in Queue
        rear=(rear+1)%MAX;
        printf("Enter the Character to insert in queue :");
         scanf(" %c",&cq[rear]);
    }
}

void dequeue(){
    if(front==-1 && rear==-1){      //Queue is Empty
        printf("Queue Underflow!");
    }
    else if(front==rear){          //If 1 element is there
        printf("Deleted Character is %c",cq[front]);
        front=rear=-1;             //Queue is Empty
        }
    else{
         printf("Deleted Character is %c",cq[front]);
         front=(front+1)%MAX;
    }
}

void display(){
    int i;
    if(front==-1 && rear==-1){
        printf("Queue Underflow!");
    }
    else{
        for(i=front;i!=rear;i=(i+1)%MAX){
            printf("%c\t",cq[i]);
        }
        printf("%c\n",cq[rear]);
    }
}

void main()
{
    int ch;
    while(1){   
        printf("\nCircular Queue Operation\n");
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("Enter your Choice: ");
        scanf("%d",&ch);
        switch(ch) {
        case 1:enqueue();
        break;
        case 2:dequeue();
        break;
        case 3:display();
        break;
        case 4:exit(0);
        default :printf("\n INVALID CHOICE\n");
        }
    }
}