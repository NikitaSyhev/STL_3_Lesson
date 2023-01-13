#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include<map>
#include<utility> // ������� ��� std::pair
#include<unordered_map>
#include"race.h"


template <typename T>
class Calc
{
public:
	Calc(T num1, T num2 ) : _num1(50), _num2(2) {}
	T getNum1() {
		return _num1;
	}
	T getNum2() {
		return _num2;
	}

	void setNum1(T& num1) {
		_num1 = num1;
	}
	void setNum2(T& num2) {
		_num2 = num2;
	}

	T sum(T num1, T num2) {
		return num1 + num2;
	}

	T min(T num1, T num2) {
		return num1 - num2;
	}
	T mult(T num1,T num2) {
		return num1 * num2;
	}

	T div(T num1, T num2) {
		return num1 / num2;
	}


private:
	T _num1;
	T _num2;
};










template <typename T>
struct Node {
	T val;//�������� ���� ( ����� ���������� �� ������)
	Node* prev;//���������� �����
	Node* next;//���������  �����
};


template <typename T>
struct Node_of_Forward_List {
	T val;//�������� ���� ( ����� ���������� �� ������)
	
	Node_of_Forward_List* next;//���������  �����
};







int main() {

	

	//std::vector<int> vec = { 1,2,3 };

	////range - based for loop
	//for (const auto& el : vec) {

	//}



	//for (std::vector<int>::const_iterator it = vec.begin(); it!=vec.end(); it++) {

	//}

	////�������, ���� ����� �� ������ �� ����� �������
	////[][][]
	//for (int i = 0; i < vec.size(); i++) {
	//	int x = vec[i];
	//}

	


	// List - ���������� ������, ������� �� ����� (nod). ������ ���� ����� ��� ���������� ���� � ��������� ( �������� ��������� �� �����)

	/*std::list<int>mylist;

	mylist.push_back(1);
	mylist.push_back(2);
	mylist.push_back(3);

	for (const auto& el : mylist) {
		std::cout << el << " ";
	}
	std::cout << '\n';

	mylist.push_front(0);
	mylist.push_front(-1); 
	mylist.push_front(-2);

	for (const auto& el : mylist) {
		std::cout << el << " ";
	}
	std::cout << '\n';*/

	//������ Nod�
	//Node<int> *n = new Node<int>();
	//std::vector<int>vec2;
	//vec2.push_back(n->val);

	//n->next->next;
	//while (n->next != nullptr) {
	//	vec2.push_back(n->neext->val);
	//}


	//<forward_list> 0 - ����������� ������
	//std::forward_list<int> fwl;
	//fwl.push_front(1);
	//fwl.push_front(2);
	//fwl.push_front(3);
	//for (const auto& el : fwl) { // ����� ���� ���� �� ����������� � ������ �� �����
	//	std::cout << el << " ";
	//}
	//std::cout << '\n';


	//std::map<int, std::string>myMap;
	//// 1������
	//myMap[2] = "abc";// �� ����� 2 ����� abc, ��� ������ �� ��������� ���� � � ����� ����������
	//
	//// 2������ � 3 ������
	//myMap.insert({ 5, "bob" }); // myMap.insert(std::make_pair(5, "bob")); ��� ������ ������������ - ���� ������ ��������� ���� �� �������� �� �����

	//// 3������
	//std::pair<int, std::string>mypair;
	//mypair.first = 6;
	//mypair.second = "Tanya";
	//
	//myMap.insert(mypair);
	//for (const auto&[key, value] : myMap) {
	//	std::cout << key <<" "<< value << std::endl;
	//}

	//std::unordered_map<int, std::string> umap;

	//umap.insert({ 1, "Hello" });

	//umap.insert({ 2, "how are you?" });

	//umap.insert({ 3, "ok" });

	////insert->hash(key) ->hashed_key;
	//for (const auto& [key, value] : umap) {
	//	std::cout << key << " " << value << std::endl;
	//}


	////std::map<int, std::string> mymap;

	////mymap.insert({5, "tom" });
	////const auto&[it, isInserted] = mymap.insert({ 6, "def" });
	////std::cout << "isInserted: " << isInserted << std::endl;//��������� ��� ��� ����, ���� ���������� ��� ���
	////




	////Car c1(50, "BMW");
	//Car c2(60, "Mercedes");

	Calc<double> c1(2, 60);
	std::cout << c1.div(50,2)<< std::endl;
	std::cout << c1.min(50,2) << std::endl;
	std::cout << c1.sum(30, 3) << std::endl;
	std::cout << c1.sum(30, 2) << std::endl;

	return 0;
}