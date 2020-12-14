#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个整数:\n");
	scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0)
	  {
	  printf("%d：能同时被3，5，7整除\n",a);
	  printf("%d：能同时被3，5整除\n",a);
	  printf("%d：能被3整除\n",a);
	  } 
	else if(a%3==0&&a%5==0)
	  {
	  printf("%d：能同时被3，5整除\n",a);
	  printf("%d：能被3整除\n",a);
	  } 
	else if(a%3==0)
	  printf("%d：能被3整除\n",a);
	else if(a%3!=0||a%5!=0||a%7!=0)
	  printf("%d：不能被任意3，5，7整除\n",a);
	return 0;
 } 
