#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x,y) memset(x,y,sizeof(x))
using namespace std;

void DBG(){	cerr<<")\n";}
template<class H, class... T > 
void DBG( H h, T... t){cerr << h;if( sizeof...(t))cerr<<", ";DBG(t...);}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] = ( ", DBG(__VA_ARGS__)
template <class T > 
void dbgv(vector < T > &x){cerr<<"[ ";for( auto a: x) cerr<<a<<","[a==x.back()]<<" "; cerr<<"]\n"; }


typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;


///aqui puede ir algo 
void voltea(string &a, int i, int f)
{
	string aux = "";
	for(int c = i; c<=f; c++)
		aux += a[c];

//	dbg("en la funcion", a, aux);
	for(int c = i,d = sz(aux)-1 ; c<=f; c++, d--)
		a[c] = aux[d];


	return;

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	string a;
	cin>>a;
	stack < int > muro;

	for(int c = 0 ; c<sz(a); c++)
	{
		if( a[c] == '/')
		{
			a[c] = '-';
			muro.push(c);
		}
		else if( a[c] == '\\')
		{
			a[c] = '-';
			if( sz(muro))
			{

				voltea(a, muro.top()+1, c-1);
				muro.pop();
				//dbg(a);
			}

		}
	}

	for(char x: a)
		if(x != '-')
			cout<<x;
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar
	
	by Benqi
	COSAS QUE DEBERIAS BUSCAR
	* desbordamientos de int, rango de los arreglos
	* casos especiales ( n = 1? )
	* haz algo en lugar de nada, mantente organizado
	* ESCRIBE COSAS E IDEAS ABAJO
	* NO TE CASES CON UNA IDEA O ENFOQUE

*/

