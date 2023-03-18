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
	auto node = make_unique<Node>(value);
	if (list_length == 0) {
		head = move(node);
		tail = head;
		list_length = 1;
	}
	else {
		tail->next_node = move(node);
		tail = tail->next_node;
		list_length++;
	}
}

void List::prepend(int value)
{
	auto node = make_unique<Node>(value);
	if (list_length == 0) {
		head = move(node);
		tail = head;
		list_length = 1;
	}
	else {
		node->next_node=head;
		head= move(node);
		list_length++;
	}
}

void List::insert(int index, int value)
{
	if (index < 0 || index >= list_length) {
		return;
	}
	else if (index == 0)
	{
		prepend(value);
		
	}
	else if (index == list_length - 1) {
		append(value);
		
	}
	else {
		auto node = make_shared<Node>(value);
		auto temp = get_node(index - 1);
		node->next_node=temp->next_node;
		temp->next_node = node;
		list_length++;
	}
	
}

void List::print() const
{
	if (!head && !tail) {
		cout << "Empty list";
	}
	auto temp = head;
	while (temp) {
		cout << temp->value << ' ';
		temp = temp->next_node;
	}
	cout << endl;
}

void List::delete_last()
{
	if (list_length == 0) {
		return;
	} else if (list_length == 0) {
		head = nullptr;
		tail = nullptr;
	}
	else
	{
		auto temp = head;
		auto prev = head;
		while (temp->next_node) {
			prev = temp;
			temp = temp->next_node;
		}
		tail = prev;
		tail->next_node = nullptr;
		list_length--;
		//cout << temp.use_count() << endl;
		temp.reset();
	}
}

void List::delete_first() {
	if (list_length == 0) {
		return;
	}
	auto temp = head;
	if (list_length == 1) {
		head = nullptr;
		tail = nullptr;
	}
	else {
		head = head->next_node;
	}
	list_length--;
}

void List::delete_node(int index)
{
	if (index < 0 || index >= list_length) {
		return;
	}
	else if (index == 0) {
		return delete_first();
	}
	else if (index == list_length - 1) {
		return delete_last();
	}
	else {
		auto prev = get_node(index - 1);
		auto temp = prev->next_node;
		prev->next_node = temp->next_node;
		list_length--;
	}
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

Node* List::get_node(int index)
{
	if (index < 0 || index >= list_length) {
		return nullptr;
	}
	shared_ptr<Node> temp = head;
	for (int i{}; i < index; i++) {
		temp = temp->next_node;
	}
	return temp.get();
}

void List::set_value(int index, int value)
{
	auto temp = get_node(index);
	if (temp) {
		temp->value = value;
	}
}

void List::reverse()
{
	auto temp = head;
	head = tail;
	tail = temp;
	auto after = temp->next_node;
	shared_ptr<Node> before = nullptr;
	for (int i{}; i < list_length; i++) {
		after = temp->next_node;
		temp->next_node = before;
		before = temp;
		temp = after;
	}
}
