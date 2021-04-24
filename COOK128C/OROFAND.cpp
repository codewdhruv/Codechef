#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;
#define Mod 1000000007
#define Infinity (ll)1e18
#define Append(a) push_back(a)
#define Pair(a,b) make_pair(a,b)
#define Clear(a) for(ll &x : a){x=0;}
#define Point(x) std::fixed<<setprecision(15)<<x
#define SetBits(x) __builtin_popcount(x);
#define DebugCase(i,x) cout<<"Case #"<<i<<": "<<x<<'\n'
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define Status(b) (cout<<(b?"YES\n":"NO\n"));
#define Print(x) cout<<x
#define Input(x) cin>>x


void BuildTree(int seg_left,int seg_right,int tree_indx,int a[],vector<int>&tree){
  if(seg_left==seg_right){
    tree[tree_indx] = a[seg_left];
    return;
  }
  int mid = ((seg_left+seg_right)>>1);
  BuildTree(seg_left,mid,2*tree_indx,a,tree);
  BuildTree(mid+1,seg_right,2*tree_indx+1,a,tree);
  tree[tree_indx] =(tree[2*tree_indx] | tree[2*tree_indx+1]);
}

void Update(int seg_left,int seg_right,int tree_indx,vector<int>&tree,int updt_indx,int updt_val){
  if((seg_left==seg_right) and (seg_left==updt_indx)){
    tree[tree_indx] = updt_val;
    return;
  }
  int mid = ((seg_left+seg_right)>>1);
  if(updt_indx>mid){
    Update(mid+1,seg_right,2*tree_indx+1,tree,updt_indx,updt_val);
  }else{
    Update(seg_left,mid,2*tree_indx,tree,updt_indx,updt_val);
  }
  tree[tree_indx] = (tree[2*tree_indx] | tree[2*tree_indx+1]);
}

void SegmentTreeBasedSolution(){ // Ran in 0.03 
  int n,q;
  cin>>n>>q;
  int a[n+1];
  for(int i =1;i<=n;i++) cin>>a[i];
  vector<int>tree(4*n+5,0);
  BuildTree(1,n,1,a,tree);
  cout<<tree[1]<<'\n';
  while(q--){
    int indx,val;
    cin>>indx>>val;
    Update(1,n,1,tree,indx,val);
    cout<<tree[1]<<'\n';
  }
}


void OrOfAndsBitManipulationSolution(){ // Ran in 0.06 sec
  int n,q;
  cin>>n>>q;
  int a[n];
  int bitscount[32]={};
  for(int i =0;i<n;i++){
    cin>>a[i];
    for(int j =0;j<32;j++) if((a[i]>>j)&1) bitscount[j]+=1;
  }
  int prev =0;
  int ans =0;
  for(int j =0;j<32;j++) ans+=((1<<j)*(bitscount[j]>0));
  cout<<ans<<'\n';
  while(q--){
    int indx,val;
    cin>>indx>>val;
    indx-=1;
    for(int j =0;j<32;j++) if(((a[indx])&(1<<j))) bitscount[j]-=1;
    a[indx] = val;
    for(int j =0;j<32;j++) if(((a[indx])&(1<<j))) bitscount[j]+=1;
    ans =0;
    for(int j =0;j<32;j++) ans+=((1<<j)*(bitscount[j]>0));
    cout<<ans<<'\n';
  }
}

int main(){
  FastIO;
  cout<<log2(100000);
  return 0;
} 
