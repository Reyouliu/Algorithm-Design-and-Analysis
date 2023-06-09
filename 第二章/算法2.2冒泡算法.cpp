#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <string.h>


void swap(double &a,double &b){
	double temp=a;
	a=b;
	b=temp;
}

void bubble(double A[],int n){
	int i,k;
	for(k=n-1;k>0;k--){
		for(i=0;i<k;i++){
			if(A[i]>A[i+1])
			swap(A[i],A[i+1]);
		}
	}
}

int main(){
	int n,i;
	printf("请输入数组元素数量n:\n");
	scanf("%d",&n);
	double A[n];
	printf("请依次输入数组A的值:\n");
	for(i=0;i<n;i++){
	scanf("%lf",&A[i]);	
	}
	bubble(A,n);
	printf("排序后A为：\n");
	for(i=0;i<n;i++){
	printf(" %lf",A[i]);
	}	
	return 0;	
}