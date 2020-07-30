// CIT125 Intro to C++ Luigi Robles
// Ch.11 Pg.393 Figure 11-32
// Motorcycle Club Program
// Displays the annual membership fee

#include <iostream>
using namespace std;

int main()
{
	//declare and initialize arrays
	char types[5] = { 'A', 'B', 'C', 'D', 'E' }; 
	int fees[5] = { 100, 110, 125, 150, 200 };

	//declare and initialize variables
	char memberType = ' ';
	int sub = 0;

	//get type to search for
	cout << "Membership type (A, B, C, D, or E): "; 
	cin >> memberType; //input for member Type
	memberType = toupper(memberType); //function call to capatalize memberType

	//locate the position of the membership
	//type in the types of array
	while (sub < 5 && types[sub] != memberType)  
		sub += 1;
	//end while

	//if the membership type was located in the
	//types array, display the membership type
	//and the corresponding fee
	if (sub < 5)
		cout << "Annual fee for membership type "
		<< types[sub] << ": $" << fees[sub] << endl; //display membership type selected and associated fees
	else
		cout << "Invalid membership type" << endl; //exception handling
	//end if
	return 0;
}	//end of main function