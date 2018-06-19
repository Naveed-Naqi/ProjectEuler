//  Created by Naveed Naqi on 6/8/18.
//  Copyright © 2018 Naveed Naqi. All rights reserved.

//	This program will calculate the sum of all multiples of 3 and 5 below 1000

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int sumThree = 0;
	int sumFive = 0;
	int sumOverlap = 0;
	int totalSum = 0;
	
	for(int i = 0; i < 1000; i++)
	{
		if(i % 3 == 0)
		{
			sumThree += i;
		}
	}
	
	for(int i = 0; i < 1000; i++)
	{
		if(i % 5 == 0)
		{
			sumFive += i;
		}
	}
	
	totalSum = sumThree + sumFive;
	
	for(int i = 0; i < 1000; i++)
	{
		if(i % 5 == 0 && i % 3 == 0)
		{
			sumOverlap += i;
		}
	}
	
	totalSum = totalSum - sumOverlap;
	
	cout << totalSum;

}