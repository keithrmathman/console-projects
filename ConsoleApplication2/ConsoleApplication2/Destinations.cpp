#include "stdafx.h"
#include "Destinations.h"


Destinations::Destinations()
{
	 AlgorithmGenerator alg ;
	 Possible_things = { "Talking", "Walking", "Park", "Woke Up", "Bed", "Crying", "Bathroom", "Toilet", "Video Game", "TV", "Intimacy", "Eating", "Exercise", "Gym", "Cooking", "Partying", "School", "Nothing", "Leisure", "Work" };
	secondary_things = { "Jogging ", "Shooter", "Adventure", " Violence/Action", "Time before 10?", "Talking to Family", "Talking to Friends", "Talking Professionally", "Are There Veggies on that plate? ", "Alcohol?", "Retail" };
	 tertiary_things = { "Do you like to Smoke?", "happy", "mad", " Good health" };
	 AvgAge = { 50, 41.2, 57, 40, 40, 21, 29.3, 31, 50, 23.4, 40, 31.5, 40, 45.7, 24.6, 17.4, 63.4, 43.2, 38.6, 23.2, 29.3, 20.3, 34.3, 18.4,50.3, 30.4, 23.6, 36.6, 30, 24.3, 18.5, 34.5, 23, 42.2, 27.1 };
	Population = { 2000000, 1990100, 789000, 2000000, 2000000, 1000000, 2000000, 2000000, 400000, 1243000, 1100000, 2000000, 1030000, 300000, 1500000, 400000, 500000, 600000, 239000, 1345000, 200000, 50000, 62000, 800000, 1500000, 1200000, 1040000, 1000000, 843000, 70000, 500000, 700000, 150000, 2000000 };
}


Destinations::~Destinations()
{
}

void Destinations::display_options(){
	for (int i = 0; i < Possible_things.size() - 1; i++){
		cout << " | " << Possible_things[i] << endl; 
	}
}

bool Destinations::Search_secondary(string second_value){
	AlgorithmGenerator alg;
	bool flag2 = false;

	for (int n = 0; n < secondary_things.size()-1; n++){
		if (secondary_things[n] == second_value){
			flag2 = true;
			alg.summation(AvgAge[n + 20], Population[n + 20]);
		}

	}
	return flag2;
}
bool Destinations::Search_tertiary(){
	AlgorithmGenerator alg;
	bool flag3 = false;
	int UserChoice3 = 0;
	cout << "Please select 1-Yes or 2-No for the following Questions: " << "/n" << endl;
	for (int m = 0; m < tertiary_things.size()-1; m++){
		cout << tertiary_things[m] << "?" << endl;
		cin >> UserChoice3;

		if (UserChoice3 == 1){
			flag3 = true; 
			alg.summation(AvgAge[m + 31], Population[m + 31]);
			
		}
	}
	return flag3;
}

bool Destinations::Search(string User_place){

	bool flag = false; 
	cout << " Population of n = 20: " << Population[20] << "\n" << " Avg Age: " << AvgAge[20] << " Possible Things: " << Possible_things[19];

	for (int n = 0; n < (Possible_things).size()-1; n++){

		if (Possible_things[n] == User_place){
			flag = true;
			if (Possible_things[n].find("Talking") || Possible_things[n].find("Going to Bed") || Possible_things[n].find("Walking") || Possible_things[n].find("Video Game") || Possible_things[n].find("Watching TV") ||
				Possible_things[n].find("Exercise") || Possible_things[n].find("Gym") || Possible_things[n].find("Eating")
				|| Possible_things[n].find("Work") || Possible_things[n].find("Partying"))
				InputQuery(n);  //calls secondary values on screen
			

		}
	}
	return flag; 
	
	
}

void Destinations::InputQuery(int n){

	int UserChoice = 0;
	AlgorithmGenerator alg;
	
	
	cout << " Please select 1-Yes or 2-No for each of the following: " << " \n \n " << endl; 
	
	switch (n)
	{
	case 0:{
			   cout << secondary_things[5] << "|" << secondary_things[6] << "| " << secondary_things[7] << "\n" << endl;
			   for (int i = 5; i <= 7; i++){
				   cout << secondary_things[i] << "?" << endl;
				   cin >> UserChoice;
				   if (UserChoice == 1)
					   Search_secondary(secondary_things[i]);
				   else
					   continue;
			   }
			   break;
	}
		   
	case 1:{
		cout << secondary_things[5] << "| " << secondary_things[6] << " |" << secondary_things[7] << "\n" << endl;
		for (int i = 5; i <= 7; i++){
			cout << secondary_things[i] << "?" << endl;
			cin >> UserChoice;
			
			if (UserChoice == 1)
				Search_secondary(secondary_things[i]);
			else
				continue;
		}
		break;
	


	}
	case 4: {
				cout << secondary_things[5] << " \n" << endl;
				cin >> UserChoice;
				if (UserChoice == 1)
					Search_secondary(secondary_things[5]);
				break;
	}
	case 8:{
			   cout << secondary_things[1] << "| " << secondary_things[2] << " |" << secondary_things[3] << " \n " << endl;
			   for (int i = 1; i <= 3; i++){
				   cout << secondary_things[i] << "?" << endl;
				   cin >> UserChoice;
				   if (UserChoice == 1)
					   Search_secondary(secondary_things[i]);
				   else
					   continue;
			   }
			   break;
	}
	case 9: 
		cout << secondary_things[3] << " \n" << endl; 
		cin >> UserChoice;
		if (UserChoice == 1)
			Search_secondary(secondary_things[3]);
		break;
	case 11:
		cout << secondary_things[8] << " \n" << endl; 
		cin >> UserChoice;
		if (UserChoice == 1)
			Search_secondary(secondary_things[8]);

		break;
	case 12:
		cout << secondary_things[0] << "\n " << endl; 
		cin >> UserChoice;
		if (UserChoice == 1)
			Search_secondary(secondary_things[0]);

		break;

	case 13:
		cout << secondary_things[0] << "\n " << endl;
		cin >> UserChoice;
		if (UserChoice == 1)
			Search_secondary(secondary_things[0]);

		break;
	case 15:
		cout << secondary_things[9] << " \n" << endl; 
		cin >> UserChoice;
		if (UserChoice == 1)
			Search_secondary(secondary_things[9]);

		break; 
	case 18: 
		cout << secondary_things[9] << "\n" << endl;
		cin >> UserChoice;
		if (UserChoice == 1)
			Search_secondary(secondary_things[10]);
		break;
	
	case 19:
		cout << secondary_things[9] << "\n" << endl;
		cin >> UserChoice;
		if (UserChoice == 1)
			Search_secondary(secondary_things[10]);
		break;

	default: 
		alg.summation(AvgAge[n], Population[n]);
		
		}

		
		
}

void Destinations::final_questions(){

	int UserChoice = 0; 

	cout << "Just some final Questions to determine your age " << "\n\n\n" << endl;
	Search_tertiary();

}

