#include<iostream>
using namespace std;
int main(){
	int i,j,p,q,T;
	cin>>T;
	while(T){
		int n;
		cin>>n;
		int M[n][n],count=0;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cin>>M[i][j];
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				for(p=i;p<n;p++){
					for(q=j;q<n;q++){
						if(M[i][j]>M[p][q]){
                           	count++;
						}
					
					}
				}
			}
		}
		cout<<count<<endl;
		T--;
	}
}

