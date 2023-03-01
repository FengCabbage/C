#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	char name[10];
	int edg=0;
	char zy[10];

	printf("请输入您的名字（字符串）\n");
	scanf("%s", &name);

	//下面这个getchar()是缓冲区报错保险，可以看情况删除。
	//getchar();

	printf("请输入您的年龄(数字)\n");
	scanf("%d", &edg);


	printf("请输入您的职业（字符串）\n");
	scanf("%s", &zy);


	//注意，如果下面的"%s"之类的没打上，则不会打印出name变量，因为没定于打印类型。
	//其他两个也一样。
	printf("您的名字是：%s\n",name);
	printf("您的年龄是：%d\n", edg);
	printf("您的职业是：%s\n", zy);




}
