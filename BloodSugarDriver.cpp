// Emily Gorman
// Blood Sugar Project
// 10/26/2018
#include <iostream>
#include "DataStructure.h"
#include <string> 
#include <vector>
#include <algorithm>
#include <numeric>
using std::string;
using namespace std;

int main()
{
	List week1, week2;
	float input;
	string command;
	int d1 = 1, d2 = 1;
	for (int i = 0; i < 7; i++)
	{
		cout << "Week 1, Day #" << d1 << endl;
		vector<float> day;
		int temp = 0;
		while (temp != 1)
		{
			cout << "Please enter in a blood sugar level for week 1, or the keywords Day, Week, or Next: ";
			cin >> command;
			if ((command == "D") || (command == "Day"))
			{
				cout << "Todays Blood Sugar Measurements: ";
				for (std::vector<float>::const_iterator i = day.begin(); i != day.end(); ++i)
					std::cout << *i << ' ';
				cout << endl;
				float sum_of_elems = std::accumulate(day.begin(), day.end(), 0);
				cout << "Sum of Todays Blood Sugar Measurements: " << sum_of_elems << endl;
				cout << "Maximum Values of Todays Blood Sugar Measurements: " << *max_element(day.begin(), day.end()) << endl;
				cout << "Minimum Values of Todays Blood Sugar Measurements: " << *min_element(day.begin(), day.end()) << endl;
				cout << day.size() << " Blood Sugar Measurements have been entered today." << endl;
			}
			else if ((command == "W") || (command == "Week"))
			{
				cout << "This Weeks Blood Sugar Measurements: " << week1 << endl;
				cout << "Sum of This Weeks Blood Sugar Measurements: " << week1.SumOfWeek() << endl;
				cout << "Maximum Value of This Weeks Blood Sugar Measurements: " << week1.MaxOfWeek() << endl;
				cout << "Minimum Value of This Weeks Blood Sugar Measurements: " << week1.MinOfWeek() << endl;
				cout << week1.CountOfWeeks() << " Blood Sugar Measurements have been entered this week." << endl;
			}
			else if ((command == "N") || (command == "Next"))
			{
				temp++;
			}
			else
			{
				input = stof(command);
				day.push_back(input);
			}
		}
		week1.Insert(day);
		d1++;
	}
	week1.LargestDelta();
	for (int i = 0; i < 7; i++)
	{
		cout << "Week 2, Day #" << d2 << endl;
		vector<float> day;
		int temp = 0;
		while (temp != 1)
		{
			cout << "Please enter in a blood sugar level for week 1, or the keywords Day, Week, or Next: ";
			cin >> command;
			if ((command == "D") || (command == "Day"))
			{
				cout << "Todays Blood Sugar Measurements: ";
				for (std::vector<float>::const_iterator i = day.begin(); i != day.end(); ++i)
					std::cout << *i << ' ';
				cout << endl;
				float sum_of_elems = std::accumulate(day.begin(), day.end(), 0);
				cout << "Sum of Todays Blood Sugar Measurements: " << sum_of_elems << endl;
				cout << "Maximum Values of Todays Blood Sugar Measurements: " << *max_element(day.begin(), day.end()) << endl;
				cout << "Minimum Values of Todays Blood Sugar Measurements: " << *min_element(day.begin(), day.end()) << endl;
				cout << day.size() << " Blood Sugar Measurements have been entered today." << endl;
			}
			else if ((command == "W") || (command == "Week"))
			{
				cout << "This Weeks Blood Sugar Measurements: " << week2 << endl;
				cout << "Sum of This Weeks Blood Sugar Measurements: " << week2.SumOfWeek() << endl;
				cout << "Maximum Value of This Weeks Blood Sugar Measurements: " << week2.MaxOfWeek() << endl;
				cout << "Minimum Value of This Weeks Blood Sugar Measurements: " << week2.MinOfWeek() << endl;
				cout << week2.CountOfWeeks() << " Blood Sugar Measurements have been entered this week." << endl;
			}
			else if ((command == "N") || (command == "Next"))
			{
				temp++;
			}
			else
			{
				input = stof(command);
				day.push_back(input);
			}
		}
		week2.Insert(day);
		d2++;
	}
	week2.LargestDelta();
	system("PAUSE");
	return 0;
}