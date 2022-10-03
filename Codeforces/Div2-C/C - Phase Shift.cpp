#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<unordered_map>
#define endl "\n"
#define Ceil(x,y) ((x+y-1)/y)
#define clr(arr, x) memset(arr, x, sizeof arr)
#define all(v) v.begin(),v.end()
#define allr(s) s.rbegin(),s.rend()
#define rt(s) return cout<<s,0
#define watch(x) cout<<(#x)<<" = "<<x<<endl
#define sz(s)	(int)(s.size())
#define full(v,n) for (int i = 0 ; i < n ; ++i) cin >> v[i]
#define full1(v,n) for (int i = 1 ; i <= n ; ++i) cin >> v[i]
#define OO 0x3f3f3f3f3f3f3f3fLL
using namespace std;
const int oo = 0x3f3f3f3f;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
void A_M_S()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  !ONLINEJUDGE
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
int dx[] { 1, -1, 0, 0, 1, 1, -1, -1 };
int dy[] { 0, 0, 1, -1, 1, -1, 1, -1 };

ll gcd(ll a, ll b) {
	return b == 0 ? abs(a) : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}
const int MAX_IN = 1e5 + 5;
vector<int>idx;
int find(int s)
{
	while (idx[s] != s)
	{
		s = idx[s];
	}
	return s;
}
int main()
{
	A_M_S();
	int T = 1;
	cin >> T;
	while (T--)
	{
		int n;
		string t;
		cin >> n >> t;
		set<int>st;
		idx = vector<int>(26);
		for (int i = 0; i < 26; ++i)
		{
			idx[i] = i;
			st.insert(i);
		}

		for (int i = 0; i < sz(t); ++i)
		{
			int s = t[i] - 'a';
			if (s == idx[s])
			{
				for (auto it : st)
				{
					if (sz(st) == 1 || find(s) != find(it))
					{
						idx[s] = it;
						st.erase(it);
						break;
					}

				}
			}
			cout << char('a' + idx[s]);
		}
		cout << endl;

	}
	return 0;
}
