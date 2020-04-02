//Expensive Calculator
//3/27/2018
//Author: John Brosius


#include<iostream>

int main()
{
	int userInput1;
	int userInput2;
	int answer;

	std::cout << "Please enter a number >>> " << std::endl;
	std::cin >> userInput1;

	std::cout << "Please enter another number less than the first>>> " << std::endl;
	std::cin >> userInput2;
	std::cout << userInput1<< " + " <<userInput2<< " = " << userInput1 + userInput2 << std::endl;

	system("Pause");
	return 0;



}