export module Module_src;

import <iostream>;
import <memory>;
import List;
import Node;
using namespace std;

List::List(int value)
{
	auto node = make_unique<Node>(value);
	head = move(node);
	tail = head;
	length = 1;
}

void List::append(int value)
{

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
