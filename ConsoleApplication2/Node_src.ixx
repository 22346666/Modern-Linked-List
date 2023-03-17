export module Node_src;

import <iostream>;
import Node;
using namespace std;

Node::Node(int passed_value) : value(passed_value) {
	cout << "Node with value " << value << " is created" << endl;
}

Node::~Node()
{
	cout << "Node with value " << value << " goes out of scope" << endl;
}
