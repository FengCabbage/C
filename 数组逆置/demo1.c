#include<stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int j = sizeof(arr)/sizeof(arr[0])-1;
	//�൱��10-1=9.����Ϊʲô��-1��
	//�㿴�����飬�����Ŵ�0��ʼ��10����������9.
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