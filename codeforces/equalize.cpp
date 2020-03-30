#include<bits/stdc++.h>
#define deb(x) cerr<<#x<<" "<<x<<endl;
#define ll long long
using namespace std;
int cost(string a , string b){
	int cost=0;
	int n=max(a.length(),b.length());
	// deb(n)
	for(int i=0;i<n;i++){
		if(a[i] != b[i]){
			//flipping conditions
				if(a[i+1]!=b[i+1] and a[i]!=a[i+1] and i+1<n){
					// cerr<<i<<"1\n";
					cost+=1;
					i+=1;
					continue;
				}
				else{
				// cerr<<i<<"2\n";
				cost+=1;
			

			}
			// else{
			// 	cerr<<i<<"2\n";
			// 	cost+=1;
			// }
		}
	}
return cost;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string a="100";
	string b="001";

	cout<<cost(a,b);



return 0;
}