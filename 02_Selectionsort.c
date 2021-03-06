/*Nithya Venugopal
  S3 D 39
  2_Selection Sort*/


#include <stdio.h>
int selectionSort(int array[], int size) 
{
	int i, j, pos, temp;
	for (i=0; i<size; i++) 
	{
		pos = i;
		for (j=i; j<size; j++) 
		{
			if (array[j] < array[pos]) 
			{
				pos =j;
			}
		}
		if (i != pos) 
		{
			temp = array[i];
			array[i] = array[pos];
			array[pos] = temp;
		}
	}
}

int main() 
{
	int i, j, pos, array[100], temp, size;
	printf("Enter number of elements in the array : ");
	scanf("%d", &size);
	printf("Enter the array\n");
	for (i=0; i<size; i++) 
	{
		scanf("%d", &array[i]);
	}
	
	selectionSort(array, size);
	printf("Sorted array \n");
	for (i=0; i<size; i++)
	{
		printf("%d\n", array[i]);
	}
}

Output
Enter number of elements in the array : 5
Enter the array
43
32
12
56
3
Sorted array 
3
12
32
43
56
