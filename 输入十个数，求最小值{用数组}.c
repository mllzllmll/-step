#include<stdio.h>
int main()
{
	int a[10];
	int i,min;
	for(i=0;i<=9;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<=9;i++)
	    printf("%4d",a[i]);
	min=a[0];
	for(i=1;i<=9;i++)
	   if(a[i]<min)
        	min=a[i];//Ҫ����ʮλ�������һ��пո���� 
    printf("\n��СֵΪ��%d",min);
	return 0;
 } 
