// C++ program to convert a binary number into decimal number

#include
#include using namespace std;

int binary_to_decimal(long int n)
{
int decimal = 0, i = 0, remainder;
while (n!=0)
{
remainder = n;
n /= 10;
decimal += remainder*pow(2,i);
++i;
}
return decimal;
}

int main()
{
long int n;
cout << "Enter a binary number: ";
cin >> n;
cout << "\nDecimal number : " << binary_to_decimal(n) << endl;
return 0;
}

