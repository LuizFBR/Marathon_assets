#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int N,sol;

	string entry;

	cin >> N;
	sol = N;

	for (int n = 0; n < N; ++n) {
		cin >> entry;

		if (entry.size() != 1) {
			for (int idx = 0; idx < entry.size() - 1; ++idx) {
				if (entry[idx] == 'C' && entry[idx + 1] == 'D') {
					sol--;
					break;
				}
			}
		}
	}
	cout << sol << endl;
	return 0;
}
