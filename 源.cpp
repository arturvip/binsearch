#include <stdio.h>

#define true 1;
#define false 0;

int binsearch(int R[], int n, int k)
{
	int low = 0, high = n - 1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (k == R[mid])
			return mid + 1;
		if (k< R[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return 0;
}
int main()
{
	
	int a[10]= { 1,2,3,4,5,6,7,8,9,10};
	
	int x=binsearch(a,10, 9);
	printf("关键字9在第%d位", x);
}
