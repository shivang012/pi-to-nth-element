#include "bits/stdc++.h"
using namespace std;

void printValueOfPi(int N)
{

	double pi = 2 * acos(0.0);

	printf("%.*lf\n", N, pi);
};

// Driver Code
int main()
{
    int N;
    cout<<"Enter the value of Nth place u want pi values: ";
    cin>> N;
	printValueOfPi(N);
	return 0;
}