#include<stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int j = sizeof(arr)/sizeof(arr[0])-1;
	//相当于10-1=9.你问为什么以-1，
	//你看看数组，索引号从0开始，10的索引号是9.
	int temp;

	while (i<j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		i++;
		j--;
	}

	for ( i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%4d", arr[i]);
	}
}