#include <iostream>
#include <string>
using namespace std;

int main (void)
{
	
	// #300ExercisesChallenge - 02/300
	// The instruction will clean the screen and write your name, address and postalCode
	
	char name[256], address[256], postalCode[256];
	
	std::cout << "Insert Your Name: ";
	std::cin.getline(name,256);
	system("cls");
	
	std::cout << "Insert Your Adress: ";
	std::cin.getline(address,256);
	system("cls");
	
	std::cout << "Insert your Postal Code: ";
	std::cin.getline(postalCode,256);
	system("cls");
	
	cout << "Name: " << name << "\n";
	cout << "Address: " << address << "\n";
	cout << "Postal Code: " << postalCode << "\n";
	
	return 0;
	
}
