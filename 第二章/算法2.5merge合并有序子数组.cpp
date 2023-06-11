#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <string.h>
//输入：整数数组A[],下标p,q,r；p到q以及q+1到r的数据按递增排列
//输出：合并排序好的p-r段子数组
const int N=15;
void merge(int A[],int p,int q,int r){
	int *bp=new int[N];//缓冲区，大小大于等于r-p+1
	if(r-p+1<=N){
		int i,j,k;
		i=p;j=q+1;k=0;
		while(i<=q&&j<=r){
			if (A[i]<=A[j])
			bp[k++]=A[i++];
			else bp[k++]=A[j++];
		}
		if(i==q+1){
		for(;j<=r;j++)
		bp[k++]=A[j];
		}
		else{
		for(;i<=q;i++)
		bp[k++]=A[i];
		} 
		k=0;
		for(i=p;i<=r;){
			A[i++]=bp[k++];
		}
	}
	else printf("缓冲区溢出，请调整缓冲区大小");
	delete bp;//一定脱离if-else，merge函数的最后一行
}

int main(){
	int i,A[]={1,0,2,4,17,8,10,13,18,25,100};//p=1,q=4,r=9,0-25排序
	int p=1,q=4,r=9;
	printf("before merge: \n");
	for(i=p;i<=r;i++){
	printf(" %d",A[i]);	
	}
	merge(A,p,q,r);
	printf("\n after merge: \n");
	for(i=p;i<=r;i++){
	printf(" %d",A[i]);	
	}
	for(i=0;i<=10;i++){
	printf("\n A[%d]=%d",i,A[i]);	
	}		
	return 0;
	
}