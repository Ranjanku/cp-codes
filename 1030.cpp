#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;

	unordered_set<int> st;
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		st.insert(x);
	}

	if(st.size() == 2 || st.count(1)) cout<<"HARD"<<endl;
	else cout<<"EASY"<<endl;



}
