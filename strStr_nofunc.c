#include<stdio.h>
#include<string.h>
#define N 1000

int main()
{	//source��target���ļ����� 
	FILE *in;
	in=fopen("strStr.in","r");

	char sourcestr[N];				//source�ַ���
	char targetstr[N];				//target�ַ���

	int i,j;								//ѭ������
	int lensource=0,lentarget=0;			//�ַ������� 
	int flag=0;								//��ǣ�����ͳ��ÿһ��λ�ñȽ�ʱ��source��target�ַ�ƥ��ĸ��� 
	int succeed=-1;						//����Ƿ�ɹ�
	
	//�����ļ�����
	fscanf(in,"%s %s",sourcestr,targetstr);
	
	//��ʾ���������
	printf("source=		%s \n",sourcestr);
	printf("target=		%s \n",targetstr);
	
	//��ʼ���� 
	
	//��ȡ�ַ������� 
	lensource=strlen(sourcestr);
	lentarget=strlen(targetstr);
	
	//��ʽ������� 
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
		flag=0;				//��Ǹ�λ 
	}
	
	//������
	printf("Result:		%d\n",succeed); 
	
	fclose(in);
	return 0;
}
