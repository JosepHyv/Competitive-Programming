#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x,y) memset(x,y,sizeof(x))
#define raya cerr<<"====================\n";
using namespace std;
 
void DBG(){	cerr<<")\n";}
template <typename T>
ostream & operator <<(ostream &os, const vector < T >&v){os << "[";
for(int c = 0 ; c<sz(v); c++){if(c > 0) os<<","; os<<v[c];}
return os <<"] ";}
template<typename T>
ostream & operator <<(ostream &os, const pair < T, T>&sol ){
os<<"("<<sol.fi<<", "<<sol.se;return os <<") ";}
template<class H, class... T > 
void DBG( H h, T... t){cerr << h;if( sizeof...(t))cerr<<", ";DBG(t...);}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] = ( ", DBG(__VA_ARGS__)
void press(int n = 15){	cout<<setprecision(n)<<fixed;}
void setIO( string name = "")
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	if(sz(name))
	{
		freopen((name+".in").c_str(), "r", stdin);
		freopen((name+".out").c_str(), "w", stdout);
	}
}
 
typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;
 
 
///aqui puede ir algo 
 
 
int main()
{
 	setIO("speeding");
 	int n,m;
 	cin>>n>>m;
	int curr = 0;
	vector< int> roadl(100), broad(100); 
 	while(n--)
 	{
 		int seg, limit;
 		cin>>seg>>limit;
		for(int c = curr; c < seg+curr; c++)
			roadl[c] = limit;
		curr += seg;	
 	}
 	curr = 0;
 	while(m--)
 	{
 		int seg, limit;
 		cin>>seg>>limit;
		for(int c = curr; c < seg+curr; c++)
			broad[c] = limit;
		curr += seg;
 	}

 	int ans = 0;
 	for(int c = 0; c<100; c++)
 		if(broad[c] > roadl[c])
 			ans = max(ans, broad[c] - roadl[c]);
 	cout<<ans;
 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar
	
	by Benq
	COSAS QUE DEBERIAS BUSCAR
	* desbordamientos de int, rango de los arreglos
	* casos especiales ( n = 1? )
	* haz algo en lugar de nada, mantente organizado
	* ESCRIBE COSAS E IDEAS ABAJO
	* NO TE CASES CON UNA IDEA O ENFOQUE
 
*/
