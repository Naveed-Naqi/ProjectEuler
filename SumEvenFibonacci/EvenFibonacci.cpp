//  Created by Naveed Naqi on 6/8/18.
//  Copyright © 2018 Naveed Naqi. All rights reserved.

//	This program will print the sum of all the even Fibonacci numbers less than 4 million

#include <iostream>
using namespace std;

int main()
{
	int fibSum = 0;
	int fib1 = 1;
	int fib2 = 1;
	int fib3 = 0;
	
	while(fib1 + fib2 < 4000000)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		
		if(fib3 % 2 == 0)
		{
			fibSum += fib3;
		}
	}
	
	cout << fibSum;

}