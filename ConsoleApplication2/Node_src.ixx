export module Node_src;

import Node;
import <iostream>;
using namespace std;


Node::Node(int passed_value) : value(passed_value) {

}

Node::~Node()
{
	//cout << "Node with value " << value << " goes out of scope" << endl;
}
