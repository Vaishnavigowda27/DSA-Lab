#include<stdio.h>
void TOH(int n,char source,char auxillary,char destination){
  if(n==1)
  {
    printf("Move disk 1 from %c to %c\n",source,destination);
    return;
  }
  TOH(n-1,source,destination,auxillary);
  printf("Move disk %d from %c to %c\n",n,source,destination);
  TOH(n-1,auxillary,source,destination);
}
int main(){
  int num;
  printf("Enter the number of disks:");
  scanf("%d",&num);
  printf("TOH for %d disks\n",num);
  TOH(num,'A','B','C');
  return 0;
}