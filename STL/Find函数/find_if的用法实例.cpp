#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;
class Item {
	private:
		string  m_ItemId;
		int m_Price;
		int m_Count;
	public:
		Item(string id, int price, int count) :
			m_ItemId(id), m_Count(count), m_Price(price) {}
		int getCount() const {
			return m_Count;
		}
		string getItemId() const {
			return m_ItemId;
		}
		int getPrice() const {
			return m_Price;
		}
		
		bool operator==(const Item & obj2) const {
			if (this->getItemId().compare(obj2.getItemId()) == 0)
				return true;
			else
				return false;
		}
};

bool priceComparision(Item & obj, int y) {
	if (obj.getPrice() == y)
		return true;
	else
		return false;
}

vector<Item> getItemList() {
	vector<Item> vecOfItems;
	vecOfItems.push_back(Item("D121", 100, 2));
	vecOfItems.push_back(Item("D122", 12, 5));
	vecOfItems.push_back(Item("D123", 28, 6));
	vecOfItems.push_back(Item("D124", 8, 10));
	vecOfItems.push_back(Item("D125", 99, 3));
	return vecOfItems;
}

int main() {
	vector<Item> vecOfItems = getItemList();
	//迭代器 
	vector<Item>::iterator it;
	int num;
	cout<<"输入一个m_Count：" ;
	cin>>num; 
	it = find_if(vecOfItems.begin(), vecOfItems.end(), bind(priceComparision, placeholders::_1, num));
	if (it != vecOfItems.end())
		cout << "Item Price :" << it->getPrice() << " Count : " << it->getCount() << endl;
	else
		cout << "Item not Found" << endl;
	return 0;
}
