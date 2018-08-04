//打印输入中各个字符出现频度的直方图 2018.08.04
#include<stdio.h>
int main()
{
	char c;	
	int digit=0,space=0,inter=0,letter=0,others=0;
	while((c=getchar())!=EOF)
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
			letter++;
		else if(c==' '||c=='\n'||c=='\b'||c=='\t')
			space++;
		else if(c<='9'&&c>='0')
			inter++;
		else if(c==','||c=='.'||c=='?')
			digit++;
		else
			others++;
	printf("letter\t");
	for(;letter>0;letter--)
		printf("*");
	printf("\n");
	printf("space\t");
	for(;space>0;space--)
		printf("*");
	printf("\n");
	printf("inter\t");
	for(;inter>0;inter--)
		printf("*");
	printf("\n");
	printf("digit\t");
	for(;digit>0;digit--)
		printf("*");
	printf("\n");
	printf("others\t");
	for(;others>0;others--)
		printf("*");
	printf("\n");
	return 0;
}
	

