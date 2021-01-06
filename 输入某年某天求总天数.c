#include<stdio.h>
int main()
{
	int a[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	int yd,d,m,i,leap,y;
	printf("请输入年月日用空格隔开\n");
	scanf("%d %d %d",&y,&m,&d);
	leap=((y%4==0)&&(y%100!=0)||(y%400==0));
	yd=d;
	for(i=1;i<m;i++)
	yd+=a[leap][i];
	printf("%d",yd);
	 
	return 0;
}
