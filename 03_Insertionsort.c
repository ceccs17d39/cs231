/*Nithya Venugopal
  S3 D 39
  3_Insertion Sort*/


#include<stdio.h>
void main() 
{
	int i,j,n,s1,ar[50];
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
		{
			scanf("%d",&ar[i]);
		}
	for(i=1;i<n;i++)
	{
		s1=ar[i];
		j=i-1;
		while((s1<ar[j])&&(j>=0))
		{
	 		ar[j+1]=ar[j];
		   	j=j-1;
		}
	        ar[j+1]=s1;
	}

	printf("After Sorting \n");
	for(i=0; i<n; i++)
		{
	  	    	printf("%d",ar[i]);
		        printf("\n");
		}

}

Output
Enter the size:4
Enter the elements23
45
34
11
After Sorting 
11
23
34
45
