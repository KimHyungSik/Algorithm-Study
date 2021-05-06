#include <iostream>
#define MAX_ARR 100000+1
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n = 0, m = 0;
	int nums = 0;
	int start = 0, end = 0;
	int add_arr[MAX_ARR] = { 0, };
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> nums;
		add_arr[i] = add_arr[i - 1] + nums;
	}

	for (int i = 0; i < m; i++) {
		cin >> start >> end;
		
		if (start == 0)
			cout << add_arr[end] << "\n";
		else
			cout << add_arr[end] - add_arr[start - 1] << "\n";
	}
	return 0;
}