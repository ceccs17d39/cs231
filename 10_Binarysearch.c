/*Nithya Venugopal
  S3 D 39
  Binary Search*/


#include<stdio.h>
int main()
{
	int f=0,l,m,k;
	int i,n,ar[100];
	printf("Enter the size");
	scanf("%d",&n);
	printf("Enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&k);
	l=n-1;
	m=(f+l)/2;
	while(f<=l)
	{
		if(ar[m]<k)
			f=m+1;
		else if (ar[m]==k)
		{
			printf("element found at location %d \n",m+1);
			break;
		}
		else
			l=m-1;
		m=(l+f)/2;
	}
	if(f>l)
		printf("Element doesnt exist \n");
	return 0;
} 
