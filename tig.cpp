#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#define Lens 100
using namespace std;
int t[7];
float w[7][7], p[7], s[7],z[7];
void cal(int n)
{
	float ts = 0;
	for (int i = 1; i < 7; i++)
	{
		if (i != n&&n != t[i])
		{
			s[i] = 0.08333333333;
		}
		else
			s[i] = 0.1666666667;
	}
	for (int i = 1; i < 7; i++)
	{
		w[n][i] = s[i] * 3.0 / 2.0;
	}
}
int main()
{
	int a, b, c;
	t[1] = 6;
	t[2] = 5;
	t[3] = 4;
	t[4] = 3;
	t[5] = 2;
	t[6] = 1;

	for (int i = 1; i < 7; i++)
	{
		cal(i);
	}
	while (cin >> a >> b >> c)
	{
		int flag = 0;
		int maxt = 0;
		for (int i = 1; i < 7; i++)
		{
			if (w[i][a] + w[i][b] + w[i][c] < 1.0 / 2.0)
			{
				
				cout << i;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			cout << flag;
		cout << endl;
	}

	return 0;
}