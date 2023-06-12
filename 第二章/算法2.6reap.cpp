#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <string.h>
//输入：白菜个数n
//输出：按收割顺序存放白菜编号的数组B[]
const int N=100;
void reap(int B[],int n){
	int i,j,k,s,t;
	int *A=new int[N];
	if(n<N){
	j=0;k=3;s=n;
	for(i=0;i<n;i++)
	A[i]=i+1;
	while(j<n){
		t=s;s=0;
		for(i=0;i<t;i++){
			if(--k!=0)
				A[s++]=A[i];
			else {
				B[j++]=A[i];k=3;
			}
		}
	}
	}
	else printf("A[N]溢出，请调整N大小");
	delete A;
}

int main(){
	int i,n;
	printf("请输入白菜的总数n:\n");
	scanf("%d",&n);
	int B[n]={};
	reap(B,n);
	for(i=0;i<n;i++){
	printf("B[%d]=%d \n",i,B[i]);	
	}		
	return 0;
	
}