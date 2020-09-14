#include<bits/stdc++.h>
using namespace std;
void solve();
#define endl "\n"
#define loop(i, start, end) for(int i=start;i<end;i++)
#define fr(n) for(int i=0;i<n;i++)
#define testcase() int t;\
				   cin>>t;\
				   while(t--){solve();} 
#define debug(x) cerr<< #x <<": "<<x<<endl;
#define pb push_back

void printArray(int arr[], int n, string s=""){
    if(s!="")
        cout<<s<<": ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    
    cout<<endl;    
}

void cinArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }    
}



void test(){
	testcase();
	cout<<t;
}

void solve(){
    int n;
    cin>>n;
    int arr[n];
    cinArray(arr, n);
	
    fr(n){
        if(i%2==0)
            cout<<(abs(arr[i])*-1)<<" ";
        else
            cout<<abs(arr[i])<<" ";    
    }
    cout<<endl;

}


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
        
		// test(); // for testing
		
		// solve(); // single test case
        
		testcase(); // for multiple test cases
}