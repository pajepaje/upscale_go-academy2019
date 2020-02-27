#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, m, n, c, i, j, k, sumi;
	char ar[110][110];
	bool f;
	string s;
	scanf("%d", &t);
	for(c=1;c<=t;c++){
		sumi=0;
		scanf("%d %d", &m, &n);
		for(i=0;i<m;i++){
			getchar();
			for(j=0;j<n;j++){
				scanf("%c", &ar[i][j]);
			}
		}
		cin>>s;
		
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				// kanan
				f=true;
				for(k=0;k<s.length();k++){
					if(j+k>=n || s[k]!=ar[i][j+k]){
						f=false; break;
					}
				}
				if(f) sumi+=1;
				
				// kiri
				f=true;
				for(k=0;k<s.length();k++){
					if(j-k<0 || s[k]!=ar[i][j-k]){
						f=false; break;
					}
				}
				if(f) sumi+=1;
				
				// bawah
				f=true;
				for(k=0;k<s.length();k++){
					if(i+k>=m || s[k]!=ar[i+k][j]){
						f=false; break;
					}
				}
				if(f) sumi+=1;
				
				// atas
				f=true;
				for(k=0;k<s.length();k++){
					if(i-k<0 || s[k]!=ar[i-k][j]){
						f=false; break;
					}
				}
				if(f) sumi+=1;
				
				// kanan atas
				f=true;
				for(k=0;k<s.length();k++){
					if(i-k<0 || j+k>=n || s[k]!=ar[i-k][j+k]){
						f=false; break;
					}
				}
				if(f) sumi+=1;
				
				// kiri atas
				f=true;
				for(k=0;k<s.length();k++){
					if(i-k<0 || j-k<0 || s[k]!=ar[i-k][j-k]){
						f=false; break;
					}
				}
				if(f) sumi+=1;
				
				// kanan bawah
				f=true;
				for(k=0;k<s.length();k++){
					if(i+k>=m || j+k>=n || s[k]!=ar[i+k][j+k]){
						f=false; break;
					}
				}
				if(f) sumi+=1;
				
				// kiri bawah
				f=true;
				for(k=0;k<s.length();k++){
					if(i+k>=m || j-k<0 || s[k]!=ar[i+k][j-k]){
						f=false; break;
					}
				}
				if(f) sumi+=1;
			}
		}
		printf("Case %d: %d\n", c, sumi);
	}
	return 0;
}
