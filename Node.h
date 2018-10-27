#ifndef _NODE_H_
#define _NODE_H_

#include <iostream>
#include <vector>
using std::cout;
using std::endl;


class Node
{
public:
	std::vector<float> entry_;
	Node * next_;

public:
	
	explicit Node(std::vector<float> entry);

	Node(std::vector<float> entry, Node * next);


	~Node();

private:
	Node();
	Node(const Node &);

};

#endif