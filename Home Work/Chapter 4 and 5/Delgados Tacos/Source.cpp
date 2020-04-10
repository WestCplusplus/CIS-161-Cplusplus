//Delgados Tacos
//03/28/2018
//Author John Brosius

#include <iostream>
#include<string>


int main()
{
	double tacos = 0.99;
	double burritos = 1.99;
	double enchiladas = 2.99;
	double tostadas = 1.50;
	double drink = 0.99;
	double churro = 1.25;
	double supremeBurrito = 4.50;
	double potatoOllas = 1.99;
	double tacosOrdered, burritosOrdered, enchiladasOrder, tostadasOrdered, drinkOrdered, churroOrdered, supremeBurritoOrdered, potatoOllasOrdered;
	double total;
	std::string choice;


	std::cout << "********Welcome to Delgados Tacos***********\n\n\n\n\n\n" << std::endl; 
	std::cout << "  TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT " << std::endl;
	std::cout << "  T    -----------------------         T " << std::endl;
	std::cout << "  T    |         OO           |         T " << std::endl;
	std::cout << "  T    |        O--O          |         T " << std::endl;
	std::cout << "  T    |         OO           |         T " << std::endl;
	std::cout << "  T    ----------|------------         TTTTTTT " << std::endl;
	std::cout << "  T                                    T     T" << std::endl;
	std::cout << "  T                                    T     T" << std::endl;
	std::cout << "  T    OO                              T  OO T" << std::endl;
	std::cout << "  TTTTO  OTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTO  OT " << std::endl;
	std::cout << "       OO                                 OO " << std::endl;


	std::cout << "How many tacos would you like? >>>"<< std::endl;
	std::cin >> tacosOrdered;
	
	std::cout << "How many burritos would you like? >>>" << std::endl;
	std::cin >> burritosOrdered;


	total = (tacos * tacosOrdered) + (burritos*burritosOrdered);
	std::cout << "Your total is >>> " << total;

	system("pause");
	return 0;
}