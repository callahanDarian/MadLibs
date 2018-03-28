/*
MadLibs
Date : 3.27.18
Author : Darian Callahan
*/

#include <iostream>
#include <string>

int main()
{
	std::string color;
	std::string wordEst;
	std::string bodyPartPlural;
	std::string animal;
	std::string noun;
	std::string pluralNoun;
	
	int firstNumber;
	int secondNumber;
	int firstMinusSecond;

	std::cout << "Mad Libs \n\n";
	std::cout << "Enter a color \n > ";
	std::cin >> color;
	std::cout << std::endl;
	std::cout << " Enter a word ending in 'est' \n > ";
	std::cin >> wordEst;
	std::cout << std::endl;
	std::cout << "Enter a plural body part \n > ";
	std::cin >> bodyPartPlural;
	std::cout << std::endl;
	std::cout << "Enter an animal \n > ";
	std::cin >> animal;
	std::cout << std::endl;
	std::cout << "Enter a noun \n > ";
	std::cin >> noun;
	std::cout << std::endl;
	std::cout << "Enter a plural noun \n > ";
	std::cin >> pluralNoun;
	std::cout << std::endl;
	std::cout << "Enter a number \n > ";
	std::cin >> firstMinusSecond;
	std::cout << std::endl;
	std::cout << "Enter another number \n > ";
	std::cin >> secondNumber;
	std::cout << std::endl;
	std::cout << "\n - Creating Mad Lib - \n" << std::endl;
	
	std::cout << "The " << color << " dragon is the " << wordEst << " dragon of all. It has " << firstMinusSecond << std::endl;
	std::cout << bodyPartPlural << " and a " << animal << " shaped like a " << noun << ", and it loves to eat " << std::endl;
	std::cout << pluralNoun << ", although it will feast on nearly anything." << std::endl;
	std::cout << std::endl;

	system("pause");
	return 0;
}