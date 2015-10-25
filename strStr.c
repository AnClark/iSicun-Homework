#include<stdio.h>
#include<string.h>
//#incluce<stdbool.h>
#define N 1000

int strStr(const char *source, const char *target){
	int i,j;								//循环变量
	int lensource=0,lentarget=0;			//字符串长度 
	int flag=0;								//标记，用于统计每一个位置比较时，source与target字符匹配的个数 
	int succeed=0;						//标记是否成功，以决定输出值 
	
	lensource=strlen(source);
	lentarget=strlen(target);
	
	for(i=0; i<lensource; i++)
	{
		for(j=0; j<lentarget; j++)
		{
			if(source[i+j]==target[j])	flag++;
		}
		
		if(flag==lentarget) {
			succeed=1;
			break;
		}
		flag=0;				//标记复位 
	}
	
	printf("Debug Source=		%s\n Length=		%d\n",source,lensource);		//用于调试 
	
	switch (succeed) {
		case 0:		return -1;
		case 1:		return 1;
	}
	
}

int main()
{
	//source和target从文件读入 
	FILE *in;
	in=fopen("strStr.in","r");

	char sourcestr[N];				//source字符串
	char targetstr[N];				//target字符串
	
	//读入文件数据
	fscanf(in,"%s %s",sourcestr,targetstr);
	
	//显示输入的数据
	printf("source=		%s \n",sourcestr);
	printf("target=		%s \n",targetstr);
	
	//运行strStr函数，并输出其结果
	printf("result=		%d \n",strStr(sourcestr,targetstr)); 
	
	
	fclose(in);
	return 0;
}
