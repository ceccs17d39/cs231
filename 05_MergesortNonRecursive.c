/*Nithya Venugopal
  S3 D 39
  5_Merge sort:Non-recursive*/


#include<stdio.h>
#define max 25
int main()
{
	int a[max],t[max],i,j,k,n,size,x1,y1,x2,y2;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(size=1;size<n;size=size*2 )
	{
		x1=0;
		k=0; 
		while(x1+size<n)
		{
			y1=x1+size-1;
			x2=y1+1;
			y2=x2+size-1;
			if(y2>=n) 
				y2=n-1;
				i=x1;
            			j=x2;
			while(i<=y1&&j<=y2)
			{
				if(a[i]<=a[j] )
					t[k++]=a[i++];
				else
					t[k++]=a[j++];
			}
			while(i<=y1)
				t[k++]=a[i++];
			while(j<=y2)
				t[k++]=a[j++];
	                x1=y2+1; 
		}
                for(i=x1; k<n; i++) 
			t[k++]=a[i];
                for(i=0;i<n;i++)
			a[i]=t[i];
	}
        printf("Sorted list is :\n");
        for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}

Output
enter the number of elements:5
enter the elements34
21
11
23
8
Sorted list is :
8
11
21
23
34
