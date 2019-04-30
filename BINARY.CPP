#include <stdio.h> 
#include <conio.h>

int binarySearch(int arr[], int l, int r, int x) 
{ 
	while (l <= r) { 
		int m = l + (r - l) / 2; 
		if (arr[m] == x) 
			return m; 

		if (arr[m] < x) 
			l = m + 1; 

		else
			r = m - 1; 
	} 
	return -1; 
} 

void main()
{
    clrscr();
	int arr[10],n,x,i;
	printf("enter no of size of element\n");
	scanf("%d", &n);
	printf("Enter %d integers\n",n);
	for(i=0;i<n;i++) scanf("%d", &arr[i]);
	printf("ENter the number to be search\n");
	scanf("%d", &x);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? printf("Element is not present in array")
				: printf("Element is present at index %d", result);
	getch();
}