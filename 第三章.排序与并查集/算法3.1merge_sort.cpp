#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <string.h>

const int N=100;

void merge(int A[],int p,int q,int r){//合并，算法2.5 p:子数组1起始位置 q：子数组1结尾位置 r：与1相连的子数组结尾
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

void merge_sort(int A[],int n){//归并排序
	int i,s,t=1;//i：开始归并的起始位置 s:合并前序列大小 t:合并后序列大小
	while(t<n){
		s=t;t=2*s;i=0;
		while(i+t<n){
			merge(A,i,i+s-1,i+t-1);
			i=i+t;
		}
		if(i+s<n)
		merge(A,i,i+s-1,n-1);
	}
}

int main(){
	int n,i;
	printf("请输入数组元素数量n:\n");
	scanf("%d",&n);
	int A[n];
	printf("请依次输入数组A的值:\n");
	for(i=0;i<n;i++){
	scanf("%d",&A[i]);	
	}
	merge_sort(A,n);
	printf("排序后A为：\n");
	for(i=0;i<n;i++){
	printf(" %d",A[i]);
	}	
	return 0;	
}
