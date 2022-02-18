#include "Beginner.h"
#include<iostream>
#include<conio.h>
#include<fstream>

void Beginner::Greetings() const
{
	std::cout << "Hi there!! I am so happy you are here!!" << std::endl;
}

int Beginner::AddSum(int x, int y) const
{
	return x + y;
}

float Beginner::MetersToFeet(float meters) const
{
	const float feetInMeter = 3.28f;

	return meters * feetInMeter;
}

float Beginner::CelsiusToFahrenheit(float celsius) const
{
	return (celsius * 1.8f) + 32.f;
}

float Beginner::Multiply(float x, float y) const
{
	return x * y;
}

char* Beginner::AllUpper(char* arr, int SIZE) const
{
	char* upperCase = arr;
	
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if(arr[i] >= 'a' && arr[SIZE - 1] <= 'z')
		{
			upperCase[i] = arr[i] - 32;
		}
	}

	return upperCase;
}

void Beginner::PrintArray(char* arr, int SIZE) const
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i];
	}

	std::cout << std::endl;
}

int Beginner::Average() const
{
	bool cont = true;
	int size = 0;
	char ans;
	int *numberList = new int [size];
	
	for (int i = 0; cont != false; i++)
	{
		std::cout << "Enter a number:  " << std::endl;
		int x;
		std::cin >> x;

		numberList[i] = x;
		size++;

		std::cout << "Contiune (Y or N)? " << std::endl;
		std::cin >> ans;

		if (ans == 'n' || ans == 'N')
		{
			cont = false;
		}
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << numberList[i] << ", ";
	}

	int average = 0;

	for (int i = 0; i < size; i++)
	{
		average += numberList[i];
	}

	average /= size;

	std::cout << "\n";

	return average;
	
	delete[] numberList;
}

std::string Beginner::TrimString(std::string& str) const
{
	std::string trimmedString;
	

	for(int i = str.size(); i > 10; i--)
	{
		str.pop_back();
	}

	trimmedString = str;

	return trimmedString;
}
