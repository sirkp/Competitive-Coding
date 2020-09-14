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
#define ll long long int

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
	
}



void solve(){
    int n;
    cin>>n;

    int arr[n];
    cinArray(arr, n);

    int dist[n];
    
    int d = n;
    for(int i=(n-1);i>=0;i--){
        dist[i] = d;
        if(arr[i]==1)
            d=0;
        d++;
    }

    // printArray(dist, n, "dist");
    // printArray(arr, n, "arrr");

    int points = 0;
    bool frnd = true;
    
    int i=0;
    while(i<n){
        if(frnd){
            if(arr[i]==1)
                points++;
            
            i += dist[i];
        }else{
            i++;
            if(i<n && arr[i]==1){
                i++;
            }
        }
        frnd = !frnd;
    }
    // cout<<endl;
    cout<<points<<endl;
}


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
        
		// test(); // for unit testing
		
		// solve(); // single test case
        
		testcase(); // for multiple test cases
}