#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define SIZE 10

int main() {
	int  arr1[SIZE];
	for (int i = 0; i < SIZE; i++) {
		scanf("%d", &arr1[i]);
	};
	int max = 0;
	for (int i = 0; i < SIZE; i++) {
		if (arr1[i] > max) {
			max = arr1[i];
		}
	}
	printf("最大值是：%d", max);

}