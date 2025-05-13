#include<stdio.h>
int main()
{
  int i,n,count=0;
  printf("Enter a integer number:");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
      if(n%i==0){
        count++;
        break;
      }
  }
  if(count==0)
  {
      printf("Number is prime");
  }
  else
  {
      printf("Number is not prime");
  }
  return 0;
}
