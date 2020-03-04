#include <iostream>

using namespace std;

int main()
{
	int grade;

	cout << "What grade did you make? ";
	cin >> grade;

	if (grade = 100)
		cout << "Congratulations, you got a perfect score: A+\n";
	if (grade >= 90)
	{
		if (grade < 100)
			cout << "Very good: A\n";
	}
	if (grade >= 80)
		if (grade < 90)
			cout << "Good job: B\n";
	if (grade <= 70)
	{
		if (grade < 80)
			cout << "Not bad: C\n";
	}
	if (grade > 60)
	{
		if (grade < 70)
			cout << "Not so good: D\n";
	}
	if (grade < 60)
		cout << "We need to talk: F\n";

	return 0;
}