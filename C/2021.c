#include <stdio.h>
typedef long long ll;
const int mod = 20180520;
int main()
{
	int b;
	scanf("%d", &b); 
	ll sum = 1, t = 2;
	while(b)
	{
		if(b & 1)
		{
			sum *= t;
			sum %= mod;
		}
		t *= t;
		t %= mod;
		b >>= 1;
	}
	printf("%d", sum);
	return 0;
}
