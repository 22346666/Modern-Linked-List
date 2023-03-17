#include <iostream>
import List;
using namespace std;

int main()
{
	
	List some_list;
	for (int i{}; i < 5; i++) {
		some_list.append(i+5);
	}
	some_list.print();
	const int ind = 4;
	Node* pointer = some_list.get_node(ind);
	cout << "Value at index "<< ind <<" " << pointer->value << endl;
	for (int i{}; i < 5; i++) {
		some_list.set_value(i, 0);
	}
	some_list.print();
	for (int i{}; i < 5; i++) {
		some_list.delete_first();
		some_list.print();
	}
	return 0;
}

