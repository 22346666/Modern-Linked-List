#include <iostream>
import List;
using namespace std;

int main()
{
	//List new_list(200);
	List some_list;
	for (int i{}; i < 5; i++) {
		some_list.append(i+5);
	}
	//some_list.print();
	//some_list.delete_last();
	for (int i{ some_list.length() }; i > 0; i--) {
		some_list.delete_last();
	}
	some_list.print();
	//new_list.print();
	//cout << new_list.length() <<" " << new_list.get_head() << " " << new_list.get_tail() << endl;
	return 0;
}

