#include <iostream>
#include <string>
#include <vector>
#include <cmath>


void findSum(std::vector<long long>& A, std::vector<long long>& B, int l, int r, int k, int n) {
	int jl = l / k;  
	int jr = r / k;   

	if (jl == jr) {  
		long long sum = 0;
		for (int i = l; i < r; ++i) {
			sum += A[i];
		}
		std::cout << sum << '\n';
	}
	else {
		long long sum = 0;
		for (int i = l; i < (jl + 1) * k && i < n; ++i) {
			sum += A[i];
		}
		for (int i = jl + 1; i < jr; ++i) {
			sum += B[i];
		}
		for (int i = jr * k; i < r && i < n; ++i) {
			sum += A[i];
		}
		std::cout << sum << '\n';
	}
}


void add(std::vector<long long>& A, std::vector<long long>& B, int i, int x, int k) {
	A[i] += x;
	B[i / k] += x;
}


int main() {
	int n;
	std::cin >> n;
	int k = sqrt(n);

	std::vector<long long>A(n);
	std::vector<long long>B((n + k) / k, 0);
	for (int i = 0; i < n; ++i) {
		std::cin >> A[i];	
	}

	long long numOfBlocks = 0, s = 0;

	if (std::pow(k, 2) == n) {
		numOfBlocks = k;
	}
	else {
		if (n % k == 0)
			numOfBlocks = n / k;
		else
			numOfBlocks = n / k + 1;
	}

	for (int i = 0; i < numOfBlocks; ++i) {
		for (int j = 0; j < k && (i * k + j) < A.size(); ++j) {
			s += A[i * k + j];
		}
		B[i] = s;
		s = 0;
	}

	int q;
	std::cin >> q;

	std::string request;
	int l, r;

	for (int i = 0; i < q; ++i) {
		std::cin >> request >> l >> r;
		if (request == "FindSum") {
			findSum(A, B, l, r, k, n);
		}
		else if (request == "Add") {
			add(A, B, l, r, k);
		}
	}

	return 0;
}