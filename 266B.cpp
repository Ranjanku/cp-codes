#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, t;
	cin>>n>>t;

	string seq;
	cin>>seq;

	while(t){
		for(int i = 0; i < seq.size()-1; i++){
			if(seq[i] == 'B' && seq[i+1]=='G'){
				swap(seq[i], seq[i+1]);
				i++;
			}
		}
		t--;
	}
	cout<<seq<<endl;

}
