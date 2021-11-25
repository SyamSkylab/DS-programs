#include<stdio.h>
int main()
{
  int i,n,a[50];
printf("To read and display an array\n");
printf("Enter the size of the array:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{

   scanf("%d",&a[i]);

}
printf("The elements of the array:");
for(i=0;i<n;i++)
{
  printf("%d\t",a[i]);

}
return 0;
}

