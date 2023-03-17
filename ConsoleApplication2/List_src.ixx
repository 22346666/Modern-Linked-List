export module List_src;


import <iostream>;
import <memory>;
import Node;
using namespace std;
import List;

List::List()
{
	list_length = 0;
}

List::List(int value)
{
	auto node = make_unique<Node>(value);
	head = move(node);
	tail = head;
	list_length = 1;
}

void List::append(int value)
{
	if (list_length == 0) {
		auto node = make_unique<Node>(value);
		head = move(node);
		tail = head;
		list_length = 1;
	}
	else {
		auto node = make_unique<Node>(value);
		tail->next_node = move(node);
		tail = tail->next_node;
		list_length++;
	}
}

void List::prepend(int value)
{

}

void List::insert(int inedx, int value)
{

}

void List::print() const
{
	shared_ptr<Node> temp = head;
	while (temp) {
		cout << temp->value << ' ';
		temp = temp->next_node;
	}
	cout << endl;
}

int List::length() const
{
	return this->list_length;
}

int List::get_head() const
{
	return this->head->value;
}

int List::get_tail() const
{
	return this->tail->value;
}
