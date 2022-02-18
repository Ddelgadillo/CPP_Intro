#pragma once

#include<string>

class Beginner
{
public:
	Beginner() = default;
	void Greetings() const;
	int AddSum(int x, int y) const;
	float MetersToFeet(float meters) const;
	float CelsiusToFahrenheit(float celsius) const;
	float Multiply(float x, float y) const;
	char* AllUpper(char* arr, int SIZE) const;
	void PrintArray(char* arr, int SIZE) const;
	int Average() const;
	std::string TrimString(std::string& str) const;
private:
};
