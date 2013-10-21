#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{
	int i;
	printf("argument count=%d\n",argc);
	if(argc<=1)
	return 1;

	if(strcmp(argv[1],"enum")==0)
	 for(int i=0;i<argc;i++)
		printf("argv[%d]=%s\n",i,argv[i]);
	
	else if(strcmp(argv[1],"count")==0)
	{
		printf("커맨드라인수%d\n",argc-1);
	}

	return 0;
}
