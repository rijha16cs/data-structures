#include <stdio.h>
int main()
{
	int i,c,n,p,temp,a[15];
	printf("enter the number of elements\n");
	scanf("%d",&n);	
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(p=1;p<n;p++)
	{
		for(c=0;c<n-p;c++)
		{
			if(a[c]>a[c+1])
			{
				temp=a[c];
				a[c]=a[c+1];
				a[c+1]=temp;
			}
		}
	}
	printf("the arranged elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
