#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	char name[10];
	int edg=0;
	char zy[10];

	printf("�������������֣��ַ�����\n");
	scanf("%s", &name);

	//�������getchar()�ǻ����������գ����Կ����ɾ����
	//getchar();

	printf("��������������(����)\n");
	scanf("%d", &edg);


	printf("����������ְҵ���ַ�����\n");
	scanf("%s", &zy);


	//ע�⣬��������"%s"֮���û���ϣ��򲻻��ӡ��name��������Ϊû���ڴ�ӡ���͡�
	//��������Ҳһ����
	printf("���������ǣ�%s\n",name);
	printf("���������ǣ�%d\n", edg);
	printf("����ְҵ�ǣ�%s\n", zy);




}
