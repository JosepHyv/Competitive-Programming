#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 
ll vx[MAXN];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n>>vx[0];
	for(int c = 1; c<n; c++) 
	{
		cin>>vx[c];
		vx[c] += vx[c-1];
	}

	int ans = -1;
	for(int c = 0 ; c<n-1; c++)
		if( vx[c] == ( vx[n-1] - vx[c]))
			ans = c;
	if( ans != -1)
		cout<<ans+1;
	else cout<<"No existe";


	

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/