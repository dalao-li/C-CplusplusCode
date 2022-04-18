#include<iostream>
using namespace std;
void quickSort(int arr[],int startIndex,int endIndex) {
    //�ݹ����������startIndex�����endIndexʱ
    if(startIndex>=endIndex) {
        return 0;
    }
    //�õ���׼Ԫ��λ��
    int pivotIndex = partition(arr,startIndex,endIndex);
    quickSort(arr,startIndex,pivotIndex-1);
    quickSort(arr,pivotIndex+1,endIndex);
}

void partition(int arr[],int startIndex,int endIndex) {
    //ȡ��һ��Ԫ������׼Ԫ��
    int pivot=arr[startIndex];
    int left=startIndex;
    int right=endIndex;
    //�ӵ�λ�ã���ʼ����pivot��λ��
    int index=startIndex;
    //��ѭ��������ָ���غϻ��߽���ʱ����
    while(right>=left) {
        //rightָ�����������бȽ�
        while(right>=left) {
            if(arr[right] < pivot)    {
                arr[left]=arr[right];
                index=right;
                left++;
                break;
            }
            right--;
        }
        //leftָ��������ҽ��бȽ�
        while(right>=left) {
            if(arr[left]>pivot) {
                arr[right]=arr[left];
                index=left;
                right--;
                break
                ;
            }
            left++;
        }
    }
    arr[index]=pivot;

    return index;
}
int main() {
    int arr[8]= {4,7,6,5,3,2,8,1};
    quickSort(arr,0,arr.size()-1);
    for(int i=0; i<8; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}


