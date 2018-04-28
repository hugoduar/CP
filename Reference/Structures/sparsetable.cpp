#include <bits/stdc++.h>
using namespace std;
#define MAX 100010
#define K_MAX 17


int table[MAX][K_MAX];
int A[MAX];
int N;
int K;

void build(){
	memset(table, -1, sizeof table);
	for (int i = 0; i < N; ++i) table[i][0] = A[i];

	for (int j = 1; j <= K ; j++){
		for (int i = 0; i <= N - (1 << j); ++i){

			table[i][j] = min(table[i][j - 1], table[i + ( (1 << (j-1)) ) ][j - 1]);

		}
	}

}

int query(){


	return 0;

}

int main(int argc, char const *argv[])
{
	cin >> N;
	K = ceil(log2(N));

	for (int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}
	build();

	for (int i = 0; i < N; ++i)
	{

		for (int j = 0; j < K; ++j)
		{
			cout << table[i][j] << " \n"[j==K - 1];
		}
	}

	return 0;
}

