#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int N, sum;
int p[3];

int solve(int a, int b, int c)
{
	int sum = 0;
	sort(p, p + 3);
	if (p[2] - p[1] > 1)
	{
		int tmp = (p[2] - p[1]) / 2;
		sum = sum + tmp;
		p[1] += 2 * tmp;
	}
	if (p[1] - p[0] > 1)
	{
		int tmp = (p[1] - p[0]) / 2;
		sum = sum + tmp;
		p[0] += 2 * tmp;
	}
	
	if (p[2] - p[1] == 1 && p[1] == p[0])
	{
		sum++;
		/*
		p[0] += 1;
		p[1] += 1;
		*/
		
	}
	else if (p[2] - p[1] == 1 && p[1] - p[0] == 1)
	{
		sum+=3;
		/*
		p[0] += 1;
		p[2] += 1;
		*/
		
	}
	else if (p[2] == p[1] && p[1] - p[0] == 1)
	{
		sum+=2;
		/*
		p[0] += 2;
		*/
		
	}

return sum;

}

int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d %d", &p[0], &p[1], &p[2]);
		int ans = solve(p[0], p[1], p[2]);
		printf("%d\n", ans);
	}

	return 0;
}