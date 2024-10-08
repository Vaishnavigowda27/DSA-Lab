
#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack[MAX], top=-1 ;

void push(){
   int item;
   if (top==MAX-1){
      printf("Stack Overflow\n");
  }
   else{
     printf("Enter the element to be pushed into the stacks :");
     scanf("%d",&item);
     top=top+1;
    stack[top]=item;
  } 
}

void pop(){
    if(top==-1){
        printf("Stack Underflow!\n");
    }
    else{
        printf("Popped element is %d\n",stack[top]);
        top=top-1;
    }
}

int palindrome(){
  int start=0;
  int end=top;
  while(start<end){
   if(stack[start]!=stack[end]){
    printf("Not a palindrome\n");
    return 1;
    start++;
    end--;
   }
   else
   printf("It is a palindrome\n");
   return 0;
  }
}
  
  void display(){
  int i;
  if(top==-1){
    printf("\nUnderflow\n");
  }
  else {
    for(i=top;i>=0;i--){
      printf("%d\n",stack[i]);
    }
  }
}


int main(){
    int ch;
    while(1){
        printf("STACK OPERATION\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Palindrome\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:push(); 
            break;
            case 2:pop();
            break;
            case 3:palindrome();
            break;
            case 4:display();
            break;
            case 5:exit(0);
            break;
            default: printf("Invalid Choice\n");
            break;
        }
    }
    return 0;
}