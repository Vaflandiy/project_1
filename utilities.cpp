#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int x)
{
	if (x == 1) return false;
	int r = sqrt(x);
	for (int d = 2; d <= r; d++)
		if (x % d == 0) return false;
	return true;
}

bool contains_6(int x)
{
	while (x > 0) {
		int d = x % 10;
		if (d == 0) return true;
		x = x / 10;
	}
	return false;
}

int ** create_and_fill_array(int n) 
{
	int** A = new int* [n];

	for (int i = 0; i < n; i++)
		A[i] = new int[n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> A[i][j];

	return A;
}

void delete_array(int** A, int n)
{
	for (int i = 0; i < n; i++)
		delete [] A[i];
	delete [] A;
}

void print_array(int** A, int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << A[i][j] << "\t";
		cout << endl;
	}
}

bool has_prime_elements(int ** A, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (is_prime(abs(A[i][j]))) return true;
	return false;
}

bool has_identical_columns(int** A, int n)
{
	for (int i = 0; i < n; i ++)
		for (int j = i + 1; j < n; j++)
		{
			bool identical = true;
			for (int k = 0; k < n; k++)
				if (A[k][i] != A[k][j])
				{
					identical = false;
					break;
				}
			if (identical) return true;
		}
	return false;
}

int sum_in_row(int** A, int n, int k)
{
	int summa = 0;
	for (int j = 0; j < n; j++) summa += A[k][j];
	return summa;
}

void sort_array(int** A, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (sum_in_row(A, n, i) > sum_in_row(A, n, j))
				swap(A[i], A[j]);
}

int min_elem_in_column(int ** A, int n, int k)
{
	int minimum = 1000000;
	for (int i = 0; i < n; i++)
		if (A[i][k] < minimum) minimum = A[i][k];
	return minimum;
}

void replace_minimum_in_columns(int** A, int n)
{
	for (int j = 0; j < n; j++) {
		int minimum = min_elem_in_column(A, n, j);
		for (int i = 0; i < n; i++)
			if (A[i][j] == minimum) A[i][j] = x;

	}
}


// ������� ����������� �������� �������.