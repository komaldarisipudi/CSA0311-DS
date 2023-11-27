#include<stdio.h>
int main()
{
   int n1,n2,n3;
    int a[100],b[100],c[100];
    printf("Enter the number of elements present in n1:\n");
    scanf("%d",&n1);
    int i;
    for(i=0;i<n1;i++)
    {
	   printf("Enter a[%d]:",i);
	    scanf("%d",&a[i]);
    }
    printf("Enter the number of elements present in n2:\n");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
       printf("Enter b[%d]:",i);
	    scanf("%d",&b[i]);
    }
    n3=n1+n2;
    for(i=0;i<n1;i++)
    {
	    c[i]=a[i];
    }
    for(i=0;i<n2;i++)
    {
	    c[i+n1]=b[i];
    }
    printf("The Merged array\n");
    for(i=0;i<n3;i++)
    {
	    printf("%d ,", c[i]);
    }
    return 0;			
	
}
