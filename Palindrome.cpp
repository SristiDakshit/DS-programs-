#include<iostream>
using namespace std;

int is_Palindrome(int );

int n;

int main()
{
int palindrome;
cout << "\n\nEnter a number : ";
cin >> n;
cout << endl;
palindrome = is_Palindrome(n);
if(palindrome == 1)
cout << n << " is a palindrome\n";
else
cout << n << " is not a palindrome\n";
return 0;
}

int is_Palindrome(int aj)
{
static int sum = 0;
if(aj != 0)
{
sum = sum *10 + aj;
is_Palindrome(aj/10); // recursive call
}
else if(sum == n)
return 1;
else
return 0;
}
