//PROBLEM LINK:
//PROBLEM PATH:
#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mcm( a, b) a*b/__gcd(a,b)
using namespace std;

typedef double db;
typedef long long int ll;
typedef vector < int > vi;
typedef vector < ll > vl;
typedef vector < bool > mrk;
typedef pair < ll, ll > pll;
typedef pair < int , int > pii;
typedef vector< vector< ll >> adj;
constexpr ll mod = 1e9+7;
constexpr ll MAXN = 1e6+3;
constexpr ll inf = 1ll << 32;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	db n;
	cin>>n;
	int ceros = 0, neg = 0, pos = 0 ;
	for(int c  = 0 ; c<n; c++)
	{
		int x;
		cin>>x;
		if( x == 0 )
			ceros++;
		else
		if( x < 0 )
			neg ++;
		else
		if( x > 0 )
			pos ++;
	}
	//cout<<ceros<<" "<<neg<<" "<<pos<<"\n";
	if( fmod(n,2 ) == 0 )
	{
		int mitad = n/2;
		if( pos >= mitad)
			cout<<1;
		else if( neg >= mitad)
			cout<<-1;
		else
			cout<<0;

	}
	else
	{
		int mitad = ceil(n/2);
		if( pos >= mitad)
			cout<<1;
		else if( neg >= mitad)
			cout<<-1;
		else
			cout<<0;
	}
}