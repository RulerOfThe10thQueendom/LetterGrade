#include <iostream>

using namespace std;

int main()
{
	int grade;

	cout << "What grade did you make? ";
	cin >> grade;

	if (grade > 100)
		cout << "That grade isn't possible.\n";
	else if(grade == 100)
		cout << "Congratulations, you got a perfect score: A+\n";
	else if(grade >= 93)
			cout << "Very good: A\n";
	else if (grade >= 90)
		cout << "Very good: A-\n";
	else if (grade >= 87)
		cout << "Good job: B+\n";
	else if(grade >= 83)
			cout << "Good job: B\n";
	else if (grade >= 80)
		cout << "Good job: B-\n";
	else if (grade >= 77)
		cout << "Not bad: C+\n";
	else if (grade >= 73)
		cout << "Not bad: C\n";
	else if (grade >= 70)
			cout << "Not bad: C-\n";
	else if(grade >= 67)
			cout << "Not so good: D+\n";
	else if (grade >= 60)
		cout << "Not so good: D\n";
	else if (grade >= 0)
			cout << "We need to talk: F\n";
	else
		cout << "That grade isn't possible.\n";

	return 0;
}
