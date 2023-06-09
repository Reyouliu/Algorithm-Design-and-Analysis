#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <string.h>
const int N=100;

float polynomial(float A[],float x,int n)
{	
	int i;
	float value=A[n];
	for(i=n-1;i>=0;i--){
		value=value*x+A[i];
	}
	return value;
}

int main(){
	int n,i;
	printf("请输入多项式的阶n:\n");
	scanf("%d",&n);
	float A[n+1],x;
	printf("请输入x的值:\n");
	scanf("%f",&x);
	printf("请由低至高依次输入多项式的系数:\n");
	for(i=0;i<=n;i++){
	scanf("%f",&A[i]);	
	}
	float v=polynomial(A,x,n);
	printf("多项式的值为: %f",v);
	return 0;
	
}