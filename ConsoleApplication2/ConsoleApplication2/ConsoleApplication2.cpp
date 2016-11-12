// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
#include "Destinations.h"
#include "AlgorithmGenerator.h"
using namespace std; 

int _tmain(int argc, _TCHAR* argv[])
{
	string Userresponse = "yes";
	string Activity;
	Destinations dest;
	AlgorithmGenerator alg;
	int UserChoice1 = 0;




	cout << "Hi, How are you? \n";
	cout << " Would you like for me to guess your age? " << endl;
	cin >> Userresponse;
	while (UserChoice1 != 1 ){
	if (Userresponse == "yes"){
		cout << " What Are you doing right now in Houston?" <<"\n \n \n" <<  endl;
		dest.display_options(); 
		cout << "\n \n \n" << endl;  
		cin >> Activity;
		bool marker = dest.Search(Activity);
		alg.sort(Activity, marker);



	}
	cout << " Have you entered all of your Activities? 1-Yes 2-No"<<endl;
	system("pause");
	cin >> UserChoice1;
	
	if (UserChoice1 == 1){
		dest.final_questions();
		cout<< " Are you " <<alg.Display_Age() << " Years old? ";
	}

	else if (UserChoice1 == 2)
		continue;

}
	system("pause");
	return 0;
}

