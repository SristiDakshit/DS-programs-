/* C++ program find the possible number of decodings of a given digit sequence */

#include <iostream>

#include <cstring>

using namespace std;

int count_decoding_digits(char *digits, int n)

{

int count[n+1]; // An array to store results of subproblems

count[0] = 1;

count[1] = 1;

for (int i = 2; i <= n; i++)

{

count[i] = 0;

// If the last digit != 0, then last digit must add to the number of words

if (digits[i-1] > ‘0’)

count[i] = count[i-1];

// If second last digit is smaller than 2 and last digit is smaller than 7, then last two digits form a valid character

if (digits[i-2] == ‘1’ || (digits[i-2] == ‘2’ && digits[i-1] < ‘7’) )

count[i] += count[i-2];

}

return count[n];

}

int main()

{

char digits[15];

cout << “nEnter the digit sequence : “;

cin >> digits;

int n = strlen(digits);

cout << “nPossible count of decoding of the sequence : ” << count_decoding_digits(digits, n) << endl;

return 0;

}
