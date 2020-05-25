#include<iostream>
using namespace std;
int main() {
	int n,i,j,*a;
	a=new int[n];
	cin>>n;
	for(i=0; i<n; i++) {
		cin>>a[i];
	}

	//用来记录左侧和右侧最后一次交换的位置
	int lastLeftExchangeIndex;
	int lastRightExchangeIndex;
	//无序数列的左右边界，每次比较只需比到这里为止
	int leftSortBorder=0;
	int rightSortBorder= n-1;

	for(i=0; i<n/2; i++) {
		//每一轮开始时默认为有序排序，标记为ture
		bool isSorted= true ;
		//奇数轮，从左向右进行比较和交换
		for(j=leftSortBorder; j<rightSortBorder; j++) {
			if(a[j]>a[j+1]) {
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				//有元素交换，说明不是有序，标记变为false
				isSorted=false;
				//记录左侧最后一次交换的位置
				lastLeftExchangeIndex=j;
			}
		}
		//将右侧无序数列的边界更新为左侧最后一次交换的位置
		rightSortBorder= lastLeftExchangeIndex; 
		//若排序后仍为有序，说明排序完成，则结束
		if(isSorted) {
			break;
		}
		//每一轮开始时默认为有序排序，标记为ture
		isSorted =true;
		//偶数轮，从右往左进行比较和交换
		for(j=rightSortBorder; j>leftSortBorder; j--) {
			if(a[j]<a[j-1]) {
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
				//有元素交换，说明不是有序，标记变为false
				isSorted=false;
				//记录右侧最后一次交换的位置
				lastRightExchangeIndex=j;
			}
		}
		//将左侧无序数列的边界更新为右侧最后一次交换的位置
		leftSortBorder= lastRightExchangeIndex;
		//若排序后仍为有序，说明排序完成，则结束
		if(isSorted) {
			break;
		}
	}

	for(i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}



