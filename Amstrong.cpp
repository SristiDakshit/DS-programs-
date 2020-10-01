// C++ program to check whether the number is Armstrong or not

#include
#include using namespace std;

int main()
{
int number, temp, remainder, result = 0, n = 0 ;

cout << "Enter an integer : ";
cin >> number;

temp = number;

// Finding the number of digits

while (temp != 0)
{
temp /= 10;
++n;
}

temp = number;

// Checking if the number is armstrong

while (temp != 0)
{
remainder = temp;
result += pow(remainder, n);
temp /= 10;
}

if(result == number)
cout << number << " is an Armstrong number\n";
else
cout << number << " is not an Armstrong number\n";

return 0;
}

