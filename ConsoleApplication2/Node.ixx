export module Node;

import <memory>;
using namespace std;



export class Node {
public:
	int value;
	shared_ptr<Node> next_node;
	Node(int passed_value);
};