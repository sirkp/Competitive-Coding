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

int getAvNe(int i, int j, int m, int n){
    int c = 0;
    if((i-1)>=0)
        c++;
    if((i+1)<m)
        c++;
    if((j-1)>=0)
        c++;
    if((j+1)<n)
        c++;
    return c;        
}

void solve(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    loop(i, 0, m){
        loop(j, 0, n){
            cin>>arr[i][j];
        }
    }
	
    bool isPossible = true;

    loop(i, 0, m){
        loop(j, 0, n){
            int ne = getAvNe(i, j, m, n);
            // cout<<"i: "<<i<<" j:"<<j<<" ne:"<<ne<<endl;
            
            if(arr[i][j]>ne){
                isPossible = false;
                break;
            }
        }
        if(!isPossible)
            break;
    }
    if(isPossible){
        cout<<"YES\n";
        loop(i, 0, m){
            loop(j, 0, n){
                cout<<getAvNe(i, j, m, n)<<" ";
            }
            cout<<endl;
        }    
    }else
    {
        cout<<"NO\n";
    }



    

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