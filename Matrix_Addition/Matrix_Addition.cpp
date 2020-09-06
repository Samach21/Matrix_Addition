#include<stdio.h>

#define ll long long

ll sum(ll a, ll b)
{
	return a + b;
}

int main()
{
	ll mn[2], xy1[100][100], xy2[100][100], xy3[100][100];
	ll* n = mn;
	ll all;
	for (ll i = 0; i < 2; i++)
	{
		if (scanf_s("%lld", &mn[i]) != 1)
		{
			printf("ERROR\n");
			return 1;
		}
		else if (mn[i] < 1 || mn[i] > 100)
		{
			printf("ERROR: 1 <= m , n <= 100 \n");
			return 1;
		}
	}
	for (ll j = 0; j < *n; j++)
	{
		for (ll k = 0; k < *(n + 1); k++)
		{
			if (scanf_s("%lld", &xy1[j][k]) != 1)
			{
				printf("ERROR\n");
				return 1;
			}
			else if (xy1[j][k] < -2000000000 || xy1[j][k] > 20000000000)
			{
				printf("ERROR\n");
				return 1;
			}
		}
	}
	for (ll j = 0; j < *n; j++)
	{
		for (ll k = 0; k < *(n + 1); k++)
		{
			if (scanf_s("%lld", &xy2[j][k]) != 1)
			{
				printf("ERROR\n");
				return 1;
			}
			else if (xy2[j][k] < -2000000000 || xy2[j][k] > 20000000000)
			{
				printf("ERROR\n");
				return 1;
			}
		}
	}
	for (ll j = 0; j < *n; j++)
	{
		for (ll k = 0; k < *(n + 1); k++)
		{
			xy3[j][k] = sum(xy1[j][k], xy2[j][k]);
		}
	}
	printf("\n");
	for (ll j = 0; j < *n; j++)
	{
		for (ll k = 0; k < *(n + 1); k++)
		{
			printf("%lld ", xy3[j][k]);
		}
		printf("\n");
	}
	return 0;
}