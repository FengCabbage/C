#define  _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main() {
	//创建字符数组
	char arr[5] = { 'h','e','l','l','o' };

	printf("第一个字符数组大小：%d\n", sizeof(arr));

	//可以直接写sizeof(arr)，一个字符占1个字节，数字一个占4个字节。
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("%c", arr[i]);
	}

	printf("\n--------------------------------\n");



	//创建字符串
	//字符串结尾带\0
	char * ch1 = "hello";//第一种写法
	char ch2[] = "hello";//第二种写法
	// 你把鼠标移到数组名上方看看大小。
	//此时  ch1=ch2=arr1；   Tips1:字符串后面都带有“\0”(字符串打印结束标志)
	//字符串结束标志为\0,数字0等同于\0，但不等于'\0';
	// 
	char arr1[] = { 'h','e','l','l','o' ,'\0' };
	


	printf("\n--------------定义存储字符串------------------\n");

	//定义存储字符串
	printf("请输入字符串(10):\n");
	char ch3[10];
	scanf("%s", &ch3);//Tips2:“&”可以不加，字符数组的数组名本身就是一个地址。
	printf("%s", ch3);
	//Tips3:输入的时候超过9个字符将会报错
	//Tips4：输入途中加入（空格/回车）将会在（空格/回车）处结束打印

	printf("\n-----------字符串拼接---------------------\n");

	char ch4[] = "hello";
	char ch5[] = "world";
	char ch6[20] = "";

	//不建议用for循环
	//for (int i = 0; ch4[i]!='\0'; i++)
	//{
	//	ch6[i] = ch4[i];
	//}
	int i = 0;
	while (ch4[i] != '\0')
	{
		ch6[i] = ch4[i];
		i++;
	};
	int j = 0;
	while (ch5[j]!='\0')
	{
		ch6[i + j]=ch5[j];
		j++;
	}
	ch6[i + j ] = '\0';
	printf("%s", ch6);
}