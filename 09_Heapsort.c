/*Nithya Venugopal
  S3 D 39
  9_Heap Sort*/

#include<stdio.h>
void main()
{
    int heap[10],n,i,j,c,root,temp;
    printf("\n enter the number of elements:");
    scanf("%d",&n);
    printf("\n enter the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&heap[i]);
    }
    for(i=1;i<n;i++)
    {
        c=i;
        do
        {
            root=(c-1)/2;
            if(heap[root]<heap[c])
            {
                temp=heap[root];
                heap[root]=heap[c];
                heap[c]=temp;
            }
            c=root;
        }while(c!=0);
    }
    printf("heap array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",heap[i]);
    }
    for(j=n-1;j>=0;j--)
    {
        temp=heap[0];
        heap[0]=heap[j];
        heap[j]=temp;
        root=0;
        do
        {
            c=2*root+1;
            if((heap[c]<heap[c+1])&&(c<j))
            {
                c++;
            }
            if((heap[root]<heap[c])&&(c<j))
            {
                temp=heap[root];
                heap[root]=heap[c];
                heap[c]=temp;
            }
            root=c;

        }while(c<j);
    }
    printf("\n the sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",heap[i]);
    }
    
}

Output
enter the number of elements:4

 enter the numbers:23
12
8
34
heap array:34	23	8	12	
 the sorted array is:12	8	23	34	
