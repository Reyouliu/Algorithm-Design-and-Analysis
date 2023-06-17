#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <string.h>
//输入：A[n],元素个数n
//输出：按递增顺序的数组A
const int N=100;

void swap(int *a,int *b){//a,b作为形参，一定要用指针，这样才能交换外面实参的地址，改变两个值
	int temp=*a;
	*a=*b;
	*b=temp;
}

void insert_sort(int A[],int n){
	int i,j,a;
	for(i=1;i<n;i++){
		a=A[i];
		for(j=i-1;j>=0;j--){
			if(a<A[j])swap(&A[j],&A[j+1]);
		}
	}
	
}

int main(){
	int i,n;
	printf("请输入数组元素数量n:\n");
	scanf("%d",&n);
	int A[n];
	printf("请依次输入数组A的值:\n");
	for(i=0;i<n;i++){
	scanf("%d",&A[i]);	
	}
	insert_sort(A,n);
	printf("插入排序后A为：\n");
	for(i=0;i<n;i++){
	printf(" %d",A[i]);	
	}		
	return 0;
	
}