#include<bits/stdc++.h>
#define int long long
using namespace std;
int n1,s1,x1,c0,c1,c2;
void create() {
 cin >> n1;s1=c0=c1=0;
 for(int i=1;i<=n1;++i) {
 cin >> x1;
 c0+=(x1==0);
 c1+=(x1==1);
 c2=min(c0,c1);
 c0-=c2;c1-=c2;s1+=c2;
 }
 cout << s1+c1/3 << endl;
}
signed main() {
 int T;cin >> T;
 while(T--) create();
}
