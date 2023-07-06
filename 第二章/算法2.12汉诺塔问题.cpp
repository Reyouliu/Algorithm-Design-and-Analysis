#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <string.h>
//输入：汉诺塔字符个数n,原字符组a，目的字符组b，辅组字符组c
//输出：字符移动列表

void Hanoi(char a,char b,char c,int n){
	if(n==1)printf("%c->%c\n",a,b);
	else{
		Hanoi(a,c,b,n-1);
		printf("%c->%c\n",a,b);
		Hanoi(c,b,a,n-1);
	}	
}

int main(){
	char a='A',b='B',c='C';
	int n;
	printf("请输入汉诺塔字符个数n: ");
	scanf("%d",&n);
	Hanoi(a,b,c,n);	
	return 0;
	
}