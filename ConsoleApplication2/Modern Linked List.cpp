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
		some_list.set_value(i, i+2/(i+1));
	}
	some_list.print();
	some_list.insert(4, 5);
	some_list.reverse();
	some_list.delete_node(5);
	cout << endl << "List length " << some_list.length() << endl;
	some_list.print();
	for (int i{}; i < 5; i++) {
		some_list.delete_first();
		some_list.print();
	}
	return 0;
}

