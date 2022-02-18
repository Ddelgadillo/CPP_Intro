#include<iostream>
#include "Beginner.h"

int main()
{
	Beginner beginner;

	/*beginner.Greetings();
	std::cout << beginner.AddSum(3, 3) << std::endl;
	std::cout << beginner.MetersToFeet(3.2f) << std::endl;
	std::cout << beginner.CelsiusToFahrenheit(32.0f) << std::endl;
	std::cout << beginner.Multiply(4, 3) << std::endl;

	char arr[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	beginner.PrintArray(arr, 6);
	beginner.AllUpper(arr, 6);
	beginner.PrintArray(arr, 6);

	char test[100];
	beginner.Read(test, 100);

	int t = beginner.Average(test);

	std::cout << t << std::endl;*/

	//std::cout << "The average is: " << beginner.Average() << std::endl;

	std::string temp = "I love Jessica Leff Very much!";

	std::cout << beginner.TrimString(temp) << std::endl;

	return 0;
}