#ifndef HEADER_H
#define HEADER_H

using namespace std;
int x;
int y;

//creating user function to enter numbers
int enterNumbers()
{
	cout << "Enter Number: ";
	cin >> x;
	cout << endl;
	cout << "Enter Another Number: ";
	cin >> y;

	return 0;
}

//auto add the numbers together
int addNumbers()
{
	cout << "The sum of your numbers is " << x + y;
	cout << endl;
	return 0;
}

//auto multiply the numbers together
int multiplyNums()
{
	cout << "Your numbers multiplied is " << x * y;
	cout << endl;
	return 0;
}

#endif
