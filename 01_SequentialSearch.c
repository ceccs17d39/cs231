/*Nithya Venugopal
  S3 D 39
  Sequential Search*/


#include<stdio.h>
void main()
{
	int ar[50],k,i,n,p=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("Enter number to be searched:\n");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(ar[i]==k)
		{
			p=i+1;
			break;
		}
	}
	if(p!=0)
		printf("%d is found in the list, at position %d\n",k,p);
	else
		printf("%d is not in the list\n",k);
}

Output
Enter the size of array:5
Enter elements:
23
32
12
9
75
Enter number to be searched:
12
12 is found in the list, at position 3
