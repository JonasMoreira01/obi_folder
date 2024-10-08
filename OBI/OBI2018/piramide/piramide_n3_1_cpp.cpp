#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> m,dp;
int N;

int piramide( int i, int j ){

  // memoization
  if ( dp[i][j] != 0 ) return dp[i][j];
  
  int peso = 0;
  for ( int k = j; k > j-i; k-- )
    peso += m[i][k];

  // recursao
  if ( i > 1 ) peso += min( piramide( i-1, j ), piramide( i-1, j-1 ));

  return dp[i][j] = peso;
}

int main(){

  cin >> N;

  m = vector<vector<int>>(N+1,vector<int>(N+1));
  dp = vector<vector<int>>(N+1,vector<int>(N+1));
  
  for ( int i = 1; i <= N; i++ )
    for ( int j = 1; j <= N; j++ )
      cin >> m[i][j];

  cout << piramide( N, N ) << endl;
  
  return 0;
}
