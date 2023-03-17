export module List;

import Node;
import <memory>;
using namespace std;

export class List {
private:
	shared_ptr<Node> head;
	shared_ptr<Node> tail;
	int list_length;
public:
	List();
	List(int value);
	void append(int value);
	void prepend(int value);
	void insert(int inedx, int value);
	void print() const;
	void delete_last();
	void delete_first();
	int length() const;
	int get_head() const;
	int get_tail() const;
	Node* get_node(int index);
	void set_value(int index, int value);
};
