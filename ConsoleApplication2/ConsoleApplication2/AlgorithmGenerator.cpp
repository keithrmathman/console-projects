#include "stdafx.h"
#include "AlgorithmGenerator.h"


AlgorithmGenerator::AlgorithmGenerator()
{
	
//	sum = 0;
	*Values = NULL;
	sumMark[0] = 0;
//	Destinations dest;
}


AlgorithmGenerator::~AlgorithmGenerator()
{
}

void AlgorithmGenerator::sort(string thing, bool flag){
	//begin sorting 
	Destinations dest;
	double age = 0;
	int low = 0; 
	int high = low + 1;
	dest.AvgAge[low] = 18;// lower range for age distribution
	dest.AvgAge[high] = 24;//upper limit for age distribution
	
	//if some activity is selected
	if (flag == true)
	{
		long ageAvg = (dest.AvgAge[low] + dest.AvgAge[high]) / 2;
		summation(ageAvg, Houston_pop);
				
			}
		


	
}

void AlgorithmGenerator::summation(double x, double y)
{
	static double Sums[100];
	static int total_population = 0;
	static double sum = 0;
	static int sumMark = 0;

	Sums[sumMark] = x * y;
	
	total_population = total_population + y;
	sum = sum + Sums[sumMark];
	sumMark++;
	int average = sum / total_population;

	calculateAge(average);
	
}

void AlgorithmGenerator::operations()
{
	struct Variance *head=NULL; //pointer to linked list 
	double difference = 0;

	for (int temp = 0; head->point != NULL; temp++){

		//difference = X - head->mean; 
		//summation(Values[temp]);

	}
	delete head; 
}

int AlgorithmGenerator::calculateAge(int &sumValue){

	static int sumPlace = sumValue;
	X = sumPlace;
	Display_Age();
	return round(sumPlace);

}

int AlgorithmGenerator::Display_Age(){

	static int Age = X; 
	return Age; 
}