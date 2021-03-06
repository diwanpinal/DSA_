//first repeating element//
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0; i<n;i++){
    cin>>a[i];
}
  
const int N = 1e6 +2 ;   //1e6= 10^6//
int idx[N];
for(int i=0; i<N; i++){

    idx[i] = -1;

}

int minidx= INT_MAX;
for(int i=0; i<n; i++){
    if(idx[a[i]]!= -1){

        minidx = min(minidx, idx[a[i]]);
    }
    else
    {
        idx[a[i]]=i;
    }

}
  if(minidx == INT_MAX){
      cout<<"-1"<<endl;
  }
  else{
      cout<<minidx+1<<endl;
  }
    return 0;
}
*/
//subarray with a given sum//
/*#include<iostream>
using namespace std;
int main(){
int n,s;
cin>>n>>s;
int arr[n];
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
int  i=0,j=0,st=-1,en=-1,sum=0;
while(j<n && sum+arr[j]<=s){
sum+=arr[j];
j++;
}
if(sum==s){
    cout<<i+1<<" "<<j<<endl;
    return 0;

}

while(j<n){
    sum+=arr[j];
    while(sum>s){
        sum -= arr[i];
        i++;

    }
    if(sum ==s){
        st =i+1;
        en =j+1;
        break;
    }
    j++;

}
cout<<st<<" "<<en<<" "<<endl;


    return 0;
}
*/


//smallest positive missing no.//
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

const int N= 1e6 +2;
bool check[N];
for(int i=0;i<N;i++){

    check[i]=0;

}
for(int i=0;i<n;i++){
    if(a[i]>=0){
        check[a[i]]=1;
    }
}
int ans=-1;
for(int i=0;i<N;i++){
    if(check[i]==0){
        ans=i;
        break;
    }
}
cout<<ans<<endl;
    return 0 ;
}
*/
//possible subarray////brute force//
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0; i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
            cout<<arr[k]<<" ";
        }cout<<endl;
    }
}
 return 0 ;
}
*/

//maximum subarray sum

/*#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maxSum=INT_MIN ;
for(int i=0; i<n;i++){
    for(int j=i;j<n;j++){
        int sum=0;
        for(int k=i;k<=j;k++){
         sum+=arr[k];
        }
        maxSum=max(maxSum,sum);
        
    }
}
 cout<<maxSum<<endl;
   return 0;
}
*/

//cumulative sum approach//
/* #include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int currsum[n+1];
currsum[0]=0;
for(int i=1;i<=n;i++){

    currsum[i]=currsum[i-1]+ arr[i-1];
}
int maxSum= INT_MIN;
for(int i=1; i<=n;i++){
    int sum=0;
    for(int j=0;j<i;j++){
        sum= currsum[i]-currsum[j];
        maxSum=max(sum,maxSum);
    }

}
cout<<maxSum<<endl;
    return 0;
}*/
//maximum subarray sum//kadane's algorithm//
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int currentsum=0;
int maxSum=INT16_MIN;
for(int i=0;i<n;i++){

    currentsum+=arr[i];
    if(currentsum<0){
        currentsum=0;

    }
    maxSum=max(maxSum,currentsum);
}
cout<<maxSum<<endl;
 return 0;
}
*/

//maximum circular subarraysum//
/*
#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n){
   int currentsum=0;
   int maxSum=INT16_MIN;
   for(int i=0;i<n;i++){

    currentsum+=arr[i];
    if(currentsum<0){
        currentsum=0;

    }
    maxSum=max(maxSum,currentsum);
    
}
return maxSum;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];

}
int wrapsum;
int nonwrapsum;
nonwrapsum = kadane(arr,n);
int totalsum=0;
for(int i=0;i<n;i++){
    totalsum+=arr[i];
    arr[i]=-arr[i];
}
wrapsum= totalsum + kadane(arr,n);
cout<<max(wrapsum,nonwrapsum)<<endl;

    return 0;
}
*/


//pair sum problem//brute approach//
/*
#include<iostream>
using namespace std;

bool pairsum(int arr[],int n,int k){
    for(int i=0; i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j<<endl;
                return 1;
            }
        }
    }return 0;
}
int main(){
int arr[]={2,4,7,11,14,16,20,21};
int k=31;
cout<<pairsum(arr,8,k)<<endl;
    return 0;
}
*/
//pair sum problem//linear traverse//
/*#include<iostream>
using namespace std;

bool pairsum(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
                return 1;
        }else if(arr[low]+arr[high]<k){
            low++;
        }else{
            high--;
        }
    }
    return 0;
}
int main(){
int arr[]={2,4,7,11,14,16,20,21};
int k=31;
cout<<pairsum(arr,8,k)<<endl;
    return 0;
}
*/










