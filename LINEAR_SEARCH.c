#include<stdio.h>

int main()
{
	int i,n,a[50],k;
	printf("Enter the arrayLimit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the KEY value to search:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i] == k)
		{
			printf("KEY IS FOUND at %d index.",i);
			return 0;
		}
	}
	printf(" KEY IS NOT FOUND");
}
