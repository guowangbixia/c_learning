//output the line that longer than 80 characters
#include<stdio.h>
#define MAXSIZE 1000
#define THRESHOLD 80
int main()
{
	char c;
	int num=0;
	printf("please input the text:\n");
	do {
		char a[MAXSIZE]="";
		while( (c=getchar())!=EOF &&c!='\n' ){
			a[num]=c;
			num++;
		}
	    if(num>=THRESHOLD){
			printf("\n%s\n",a);
			num=0;
			putchar('\n');
		}
	} 	while(c!=EOF);
	printf("exit\n");
	return 0;
}
