#include <iostream>
#include <algorithm>  //sort(), unique()
#include <functional>  //less<int>()˳�� 
using namespace std;
int main() {
    int i;
    int a[10] = { 0, 7, 7, 6, 1, 1, 5, 5, 8, 9 };
    sort( a, a + 10, less<int>() );  //����
    int n = unique(a, a + 10) - a;   //ȥ��
    for ( i = 0; i < n; i++)         //ע��i < n
        cout << a[i] << " ";         //0 1 5 6 7 8 9
}
