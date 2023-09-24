#include<stdio.h>

int binary(int l,int h,int a[],int k)
{
while(l<=h)
	{
		int mid = l + (h-l) / 2;
		if(a[mid] == k)
		{
			return mid;
			printf("%d,mid");
		}
		else if(a[mid] < k)
		{
			l = mid+1;
		}
		else
		{
			h = mid-1;
		}
	}return -1;
}
int main()
{
	int l,h,n,a[50],i,k;
	printf("ENTER THE LIMIT FOR ARRAYVALUES:");
	scanf("%d",&n);
	l=0;
	h=n-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the key value");
	scanf("%d",&k);
	
	int result = binary(l,h,a,k);
	if(result == -1)
	{
		printf("Element not found");
	}
	else
	{
		printf("Element found");
	}
	
}
