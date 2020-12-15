#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="abc";
	char a1[]={'a','b','c'};
	printf("%d",sizeof(a));
	printf("%d",sizeof(a1));//sizeof是计算存入内存里得空间大小； 
	printf("%d",strlen(a));
	printf("%d",strlen(a1));//strlen是计算字符串的,需要头函数string 
	return  0;
 } 
