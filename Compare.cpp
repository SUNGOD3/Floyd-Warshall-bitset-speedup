#include <bits/stdc++.h>
#define MXN 1005
using namespace std;
int n,A[1005][1005];
bitset <MXN> and_mask,dp[MXN];
int main(){
	srand( time(NULL) );
	for(int ca=0;ca<10;++ca){
		//Randomly generate test case (n = 1000)
		n=1000;
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j){
				int x = rand()%2;
				dp[i][j]=A[i][j]=x;
			}
		clock_t a,b;
		//Floyd-Warshall without any speedup 
		a=clock();
		for (int k = 0; k < n; ++k)
		    for (int i = 0; i < n; ++i)
		        for (int j = 0; j < n; ++j)
		            //If i -> k exist and k -> j exist, than i can reach j by i -> j -> k.
		            if(A[i][k] && A[k][j]) A[i][j] = 1;
		b=clock();//b-a = time spent
		cout << "Test " << ca+1 << ": Floyd-Warshall without any speedup spent "<< b-a << " ms\n";
		clock_t c,d;
		//Floyd-Warshall with bitset optimization
		c=clock();
		for(int k=0;k<n;++k){
			and_mask[k]=1;
			bitset <MXN> tmp = dp[k];
			for(int i=0;i<n;++i)
				if((dp[i]&and_mask).any())
					dp[i]=dp[i]|tmp;
			and_mask[k]=0;
		}
		d=clock();//d-c = time spent
		cout << "Test " << ca+1 << ": Floyd-Warshall with bitset optimization spent "<< d-c << " ms\n";
		//Verify correctness
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j)
				if(dp[i][j]!=A[i][j]){
					cout << "wa";
					return 0;
				}
	}
	return 0;
} 
