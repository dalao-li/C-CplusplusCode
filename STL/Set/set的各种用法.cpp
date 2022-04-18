/*
 * @Description: 
 * @Version: 1.0
 * @Author: dalao
 * @Email: dalao_li@163.com
 * @Date: 2022-03-29 21:57:16
 * @LastEditors: dalao
 * @LastEditTime: 2022-03-29 22:40:50
 */
/*
set跟vector差不多，它跟vector的唯一区别就是，
set里面的元素是有序的且唯一的，只要你往set里
添加元素，它就会自动排序，而且，如果你添加的
元素set里面本来就存在，那么这次添加操作就不执行。
*/
#include<iostream>
#include<set>
#include<string>
using namespace std;
template <typename T>
void showset(set<T> v) {
    for (typename std::set<T>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it<<" ";
    }
    cout << endl;
}

int main() {
    set<int> s1 {9,8,1,2,3,4,5,5,5,6,7,7 }; //自动排序，从小到大,剔除相同项
    cout<<"自动排序，从小到大,剔除相同项后的s1:";
    showset(s1);
    set<string> s2 { "hello","sysy","school","hello" }; //字典序排序
    cout<<"字典序排序后(任然剔除相同值)的s2:";
    showset(s2);
    s1.insert(9); //有这个值了，do nothing
    cout<<"往s1中再插入一个存在的值后的结果:";
    showset(s1);
    cout<<"往s2中插入一个不存在的值后的结果:";
    s2.insert("aaa"); //没有这个字符串，添加并且排序
    showset(s2);

    system("pause");
    return 0;
}

