#include<stdio.h>
int main()
{
	int a;
	printf("������һ������:\n");
	scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0)
	  {
	  printf("%d����ͬʱ��3��5��7����\n",a);
	  printf("%d����ͬʱ��3��5����\n",a);
	  printf("%d���ܱ�3����\n",a);
	  } 
	else if(a%3==0&&a%5==0)
	  {
	  printf("%d����ͬʱ��3��5����\n",a);
	  printf("%d���ܱ�3����\n",a);
	  } 
	else if(a%3==0)
	  printf("%d���ܱ�3����\n",a);
	else if(a%3!=0||a%5!=0||a%7!=0)
	  printf("%d�����ܱ�����3��5��7����\n",a);
	return 0;
 } 
