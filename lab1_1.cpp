#include <iostream>
#include <vector>

void rotate(int k, int n, std::vector <int> &v) {
	for (int i = 0; i < k; ++i) {
		int tmp = v[n - 1];
		for (int j = n - 1; j > 0; --j)
			v[j] = v[j - 1];
		v[0] = tmp;
	}
}

int main() {
	int n, k;
	std::cin >> k >> n;
	std::vector <int> v(n);
	for (int i = 0; i < n; i++)
		std::cin >> v[i];
	rotate(k, n, v);
	for (int i = 0; i < n; i++)
		std::cout << v[i] << " ";
	std::cout << "\n";
	return 0;
}