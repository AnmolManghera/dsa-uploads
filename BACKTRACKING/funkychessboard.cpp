#include <iostream>
using namespace std;

const int N = 0;

bool solveGrid(char grid[10][10], int ans[10][10], int i, int j, int n, int m) {
	if ((i == n - 1) && (j == m - 1)) {
		ans[i][j] = 1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << ans[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}
	if (i > n-1 || j > m-1 || i<0 || j<0) {
		return false;
	}
	if (grid[i][j] == 'X') {
		return false;
	}
	ans[i][j] = 1;
	if (solveGrid(grid, ans, i, j + 1, n, m)) {
		return true;
	}
	if (solveGrid(grid, ans, i + 1, j, n, m)) {
		return true;
	}
	if (solveGrid(grid, ans, i - 1, j, n, m)) {
		return true;
	}
	if (solveGrid(grid, ans, i, j - 1, n, m)) {
		return true;
	}
	ans[i][j] = 0;
	return false;
}

int main() {
	int n, m;
	cin >> n >> m;
	char grid[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> grid[i][j];
		}
	}
	int ans[10][10] = {0};
	if (!solveGrid(grid, ans, 0, 0, n, m)) {
		cout << "NO PATH FOUND" << endl;
	}
	return 0;
}
