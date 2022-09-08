#include <iostream>
#include <bitset> 
#define MXN 500 
using namespace std;
int n,x;
bitset <MXN> and_mask,dp[MXN];
int main(){
	cin >> n;
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j){
			cin >> x;
			dp[i][j]=x;
		}
	for(int k=0;k<n;++k){
		and_mask[k]=1;
		bitset <MXN> tmp = dp[k];
		for(int i=0;i<n;++i)
			if((dp[i]&and_mask).any())
				dp[i]=dp[i]|tmp;
		and_mask[k]=0;
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			and_mask[j]=1;
			(dp[i]&and_mask).any()?cout << "1 ":cout << "0 ";
			and_mask[j]=0;
		}
		cout << "\n";
	}
} 
