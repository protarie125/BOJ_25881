#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int r1, r2;
	cin >> r1 >> r2;
	int n;
	cin >> n;
	while (0 < (n--)) {
		int x;
		cin >> x;

		cout << x << ' ';

		if (x <= 1000) {
			cout << x * r1;
		}
		else {
			const auto& ex = x - 1000;
			cout << 1000 * r1 + ex * r2;
		}

		cout << '\n';
	}

	return 0;
}