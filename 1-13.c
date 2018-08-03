//打印输入中单词长度的直方图 ２０１８．０８．０３ 
#include<stdio.h>
int main()
{
	char ch[10][10];
	int sum[10];
	int i,j,k;
	char c;
	for(j=0;j<=9;j++)
		sum[j]=0;
	j=0;//将计数的数组初始化为零
	while((c=getchar())!=EOF)
		if((c>='a'&&c<='z')||(c<='Z'&&c>='A'))
			i++;
		else
		{	sum[i]++;
			i=0;
		}//记录下每个单词的长度

	for(i=0;i<=9;i++)
		for(j=0;j<=9;j++)
			ch[i][j]='0';//将直方图初始化为零

	for(i=0;i<=9;i++)
	{	j=i;
		k=9;
		for(;sum[i]>0;sum[i]--)
		{	ch[j][k]='*';
			k--;
		}
	}//把计数数组的值转化为*

	for(j=0;j<=9;j++)
	{	putchar('\n');
		for(i=1;i<=9;i++)
			putchar(ch[i][j]);
	}//把直方图输出
	return 0;
}
