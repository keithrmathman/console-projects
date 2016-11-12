#pragma once
#include<iostream> 
using namespace std;
#include<string> 
#include <vector>
#include "AlgorithmGenerator.h"

class Destinations
{
public:
	Destinations();
	~Destinations();
	bool Search(string User_place);
	bool Search_secondary(string second_value);
	bool Search_tertiary(); 
	void InputQuery(int n);
	void display_options();
	void final_questions(); 
	
	const int M = 1000;
	vector <string> Possible_things;
	vector <string> secondary_things;
	vector <string> tertiary_things;
	 vector <double> AvgAge;
	 vector<int> Population;
	
	
};

