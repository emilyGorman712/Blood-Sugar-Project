#include "Node.h"
#include <vector>
Node::Node(std::vector<float> entry)
	: entry_(entry), next_(NULL)
{

}
Node::Node(std::vector<float> entry, Node * next)
	: entry_(entry), next_(next)
{
	
}

Node::~Node()
{
	
}
