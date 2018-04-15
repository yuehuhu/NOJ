#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#define Lens 100
using namespace std;

int n1,n2;
int C[Lens][Lens];
string x, y;
int com(string x, string y)
{
	x = ' ' + x;
	y = ' ' + y;
	for (int i = 1; i <= n1; i++)
		for (int j = 1; j <= n2; j++)
		{
			if (x[i] == y[j])
			{
				C[i][j] = C[i - 1][j - 1] + 1;
			}
			else
			{
				C[i][j] = max(C[i - 1][j], C[i][j - 1]);
			}
		}
	return C[n1][n2];

}
int main()
{
	scanf("%d %d", &n1, &n2);
	cin >> x >> y;
	int s = com(x, y);
	int ans = n1 + n2 - 2 * s;
	cout << ans << endl;
	return 0;
}
