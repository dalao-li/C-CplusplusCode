/*
        Name: Huffman tree coding
        Copyright:
        Author: YuanHao Li
        Date: 04/12/18 15:22
        Description:
*/

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

#define LENGTH 6
//���Խ��й���������
int code[20];
//���Ա������������
string huffman[LENGTH];

int arr[LENGTH] = {12,24,35,67,46,55}; 

char alph[LENGTH] = {'A','B','C','D','E','F'}; 

typedef struct Tree {
    //�ڵ��Ȩֵ 
    int data;
    Tree* leftChild;
    Tree* rightChild;
} Tree, *TreeList;

//����������,���ظ��ڵ�
TreeList createTree(int arr[]) {
    //����ָ��������������ڵ���Ϣ
    TreeList leaves[LENGTH];
    for (int i = 0; i < LENGTH; i++) {
        TreeList leaf = new Tree;
        leaf->data = arr[i];
        leaf->leftChild = leaf->rightChild = NULL;
        leaves[i] = leaf;
    }
    //����һ���ڵ���Ϊ���������ĸ��ڵ�
    TreeList root = NULL;
    //������������ 
    for (int i = 1; i < LENGTH; i++) {
        // min1��ʾ��СȨֵ�����������±�,min2Ϊ��СȨֵ�ڵ���±�
        int min1 = -1, min2;
        //��ʼ��min1��min2 
        for (int j = 0; j < LENGTH; j++) {
            if (leaves[j] != NULL && min1 == -1) {
                min1 = j;
                continue;
            }
            if (leaves[j] != NULL) {
                min2 = j;
                break;
            }
        }
        //�ҳ���Сֵ�ʹ�Сֵ�ڵ���±�
        for (int j = min2; j < LENGTH; j++) {
            if (leaves[j] != NULL) {
                if (leaves[j]->data < leaves[min1]->data) {
                    min2 = min1;
                    min1 = j;
                } else if (leaves[j]->data < leaves[min2]->data) {
                    min2 = j;
                }
            }
        }
        //����СȨֵ���ʹ�СȨֵ������һ������,rootָ���������
        root = new Tree;
        root->data = leaves[min1]->data + leaves[min2]->data;
        root->leftChild = leaves[min1];
        root->rightChild = leaves[min2];
        //��ָ��������ָ�븳��leavesָ��������min1λ��
        leaves[min1] = root;
        // min2λ��Ϊ��
        leaves[min2] = NULL;
    }
    return root;
}

//����Ȩֵ��ȡ�±� 
int getIndex(int weight){
    for(int i = 0 ;i<LENGTH;i++){
        if(weight == arr[i]){
            return i;
        }
    }
} 

//�ݹ���й�����������,len�ǵ�ǰ���Ĳ���
void huffmanCoding(TreeList& root, int len) {
    if (root == NULL) {
        return;
    }
    //����Ҷ�ӽڵ�
    if (root->leftChild == NULL && root->rightChild == NULL) {
        //��ȡ�ýڵ�Ȩֵ��Ӧ���ַ��±� 
        int index = getIndex(root->data);
        //������ַ��Ĺ���������
        for (int i = 0; i < len; i++) {
            huffman[index].push_back(code[i] + '0');
        }
    }
    //����������й���������Ĳ���
    else {
        //����֧����Ϊ��
        code[len] = 0;
        huffmanCoding(root->leftChild, len + 1);
        //�Ҳ��֧����Ϊһ
        code[len] = 1;
        huffmanCoding(root->rightChild, len + 1);
    }
}

int main() {
    TreeList root = createTree(arr);
    huffmanCoding(root, 0);
    for (int i = 0; i < LENGTH; i++) {
        cout << alph[i] << "�Ĺ����������� : " << huffman[i] << endl;
    }
    return 0;
}
