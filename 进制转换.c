#include<stdio.h>
int main(){	
	int i,n,k=16,a[16]={0};
	printf("Please enter a digit:");
	scanf("%d",&n);
	while(n>0)		/* ��ʮ������ת��Ϊ��������*/
	{	
		a[--k]=n%2;
			n=n/2;
	}
	for(i=0;i<16;i++)
		printf("%2d",a[i]);
	return 0;
}
