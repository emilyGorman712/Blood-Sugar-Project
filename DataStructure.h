#ifndef DATASTRUCTURE_H_
#define DATASTRUCTURE_H_
#include <iostream>
#include <vector>
using std::ostream;
#include "Node.h"
class List
{
public:
	List();
	bool empty() const;
	void print(ostream & outfile) const;
	void Insert(std::vector<float> arr);
	float SumOfWeek();
	float MaxOfWeek();
	float MinOfWeek();
	float CountOfWeeks();
	void LargestDelta();
	float listSum;
	
private:
	Node * first_;
};

ostream & operator<<(ostream & outfile, const List & list);
#endif