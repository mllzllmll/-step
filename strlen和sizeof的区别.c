#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="abc";
	char a1[]={'a','b','c'};
	printf("%d",sizeof(a));
	printf("%d",sizeof(a1));//sizeof�Ǽ�������ڴ���ÿռ��С�� 
	printf("%d",strlen(a));
	printf("%d",strlen(a1));//strlen�Ǽ����ַ�����,��Ҫͷ����string 
	return  0;
 } 
