#include<stdio.h>
#include<string.h>
//#incluce<stdbool.h>
#define N 1000

int strStr(const char *source, const char *target){
	int i,j;								//ѭ������
	int lensource=0,lentarget=0;			//�ַ������� 
	int flag=0;								//��ǣ�����ͳ��ÿһ��λ�ñȽ�ʱ��source��target�ַ�ƥ��ĸ��� 
	int succeed=0;						//����Ƿ�ɹ����Ծ������ֵ 
	
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
		flag=0;				//��Ǹ�λ 
	}
	
	printf("Debug Source=		%s\n Length=		%d\n",source,lensource);		//���ڵ��� 
	
	switch (succeed) {
		case 0:		return -1;
		case 1:		return 1;
	}
	
}

int main()
{
	//source��target���ļ����� 
	FILE *in;
	in=fopen("strStr.in","r");

	char sourcestr[N];				//source�ַ���
	char targetstr[N];				//target�ַ���
	
	//�����ļ�����
	fscanf(in,"%s %s",sourcestr,targetstr);
	
	//��ʾ���������
	printf("source=		%s \n",sourcestr);
	printf("target=		%s \n",targetstr);
	
	//����strStr���������������
	printf("result=		%d \n",strStr(sourcestr,targetstr)); 
	
	
	fclose(in);
	return 0;
}
