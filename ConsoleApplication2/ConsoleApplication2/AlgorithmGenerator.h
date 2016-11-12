#pragma once
#include "Destinations.h"
#include <math.h>
class AlgorithmGenerator
{
public:
	AlgorithmGenerator();
	~AlgorithmGenerator();
	void sort(string place, bool flag);
	void summation(double x, double y);
	int calculateAge(int &sumValue);
	void operations(); 
	int Display_Age(); 
	
	int Values[100]; 
	const int Houston_pop = 2196000;
	int X;
	int sumMark[1]; //Marks E(X) * populations size value in Sums[]
	
	struct Variance{
		
		double mean; 
		int X; 
		int N; //Sample size 
		struct Variance *point;
	};
	
private: 
	
	double complexity();
	int count; 

};

