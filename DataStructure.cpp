#include "DataStructure.h"
#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;
List::List()
	: first_(NULL)
{
}

void List::Insert(std::vector<float> arr)
{
	first_ = new Node(arr, first_);
}

bool List::empty() const
{
	return first_ == NULL;
}
float List::SumOfWeek() {
	Node * temp = first_;
	listSum = 0;
	while (temp)
	{
		vector<float> item = temp->entry_;
		temp = temp->next_;
		float sum_of_elems = std::accumulate(item.begin(), item.end(), 0);
		listSum += sum_of_elems;
	}
	return listSum;
}
float List::MaxOfWeek() {
	Node * temp = first_;
	float max = 0;
	while (temp)
	{
		vector<float> item = temp->entry_;
		temp = temp->next_;
		float tempMax = *max_element(item.begin(), item.end());
		if (tempMax >= max)
		{
			max = tempMax;
		}
	}
	return max;
}
float List::MinOfWeek() {
	Node * temp = first_;
	float min = INT_MAX;
	while (temp)
	{
		vector<float> item = temp->entry_;
		temp = temp->next_;
		float tempMin = *min_element(item.begin(), item.end());
		if (min >= tempMin)
		{
			min = tempMin;
		}
	}
	return min;
}
float List::CountOfWeeks() {
	Node * temp = first_;
	float count = 0;
	while (temp)
	{
		vector<float> item = temp->entry_;
		temp = temp->next_;
		count += item.size();
	}
	return count;
}
void List::LargestDelta() {
	Node * temp = first_;
	int i = 0;
	float delta = 0;
	float difference = 0;
	float x = 0;
	int k = 2;
	float arr[7];
	while (temp)
	{
		vector<float> item = temp->entry_;
		temp = temp->next_;
		arr[i] = item.size();
		i++;
	}
	for (int j = 0; j < 7; j++)
	{
		if (j != 0)
		{
			delta = arr[j] - arr[j - 1];
			delta = delta * -1;
		}
		if (delta > difference)
		{
			difference = delta;
			x = k;
		}
		k++;
	}
	cout << "The biggest difference is on day number " << x << " with a difference of " << difference << "." << endl;
	
}
void List::print(ostream & outfile) const
{
	outfile << "[ ";
	if (!empty())
	{
		for (std::vector<float>::const_iterator i = first_->entry_.begin(); i != first_->entry_.end(); ++i)
			outfile << *i << ' ';
		Node * ptr = first_->next_;
		while (ptr != NULL)
		{
			for (std::vector<float>::const_iterator i = ptr->entry_.begin(); i != ptr->entry_.end(); ++i)
				outfile << *i << ' ';
			ptr = ptr->next_;
		}
	}
	outfile << " ]";
}
ostream & operator<<(ostream & outfile, const List & list)
{
	list.print(outfile);
	return outfile;
}
