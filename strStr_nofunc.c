#include<stdio.h>
#include<string.h>
#define N 1000

int main()
{	//source和target从文件读入 
	FILE *in;
	in=fopen("strStr.in","r");

	char sourcestr[N];				//source字符串
	char targetstr[N];				//target字符串

	int i,j;								//循环变量
	int lensource=0,lentarget=0;			//字符串长度 
	int flag=0;								//标记，用于统计每一个位置比较时，source与target字符匹配的个数 
	int succeed=-1;						//标记是否成功
	
	//读入文件数据
	fscanf(in,"%s %s",sourcestr,targetstr);
	
	//显示输入的数据
	printf("source=		%s \n",sourcestr);
	printf("target=		%s \n",targetstr);
	
	//开始处理 
	
	//获取字符串长度 
	lensource=strlen(sourcestr);
	lentarget=strlen(targetstr);
	
	//正式处理过程 
	for(i=0; i<lensource; i++)
	{	//printf("LENSOURCE=%d	\n",lensource);
		for(j=0; j<lentarget; j++)
		{
			if(sourcestr[i+j]==targetstr[j])	flag++;
		}
		
		if(flag==lentarget) {
			
			succeed=1;
			break;
		}
		flag=0;				//标记复位 
	}
	
	//输出结果
	printf("Result:		%d\n",succeed); 
	
	fclose(in);
	return 0;
}
