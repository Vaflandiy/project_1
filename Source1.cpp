#include <iostream>
#include <cmath>
#include "utilities.hpp"
using namespace std;


int main()
{
	int n;
	cin >> n;

	int** A = create_and_fill_array(n);
	print_array(A, n);
	
	int x = max_prime_in_matrix(A, n);
	replace_minimum_in_

	return 0;
}