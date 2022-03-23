/*
#include<iostream>
using namespace std;
int main(){

int arr[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
cout<<"matrix is:"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}

return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
       for(int j=0;j<m;j++)
       {
        cin>>arr[i][j];
        }
}
cout<<"matrix is:"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
    return 0;
}
*/
//searching_in_twoDarrays//
#include<iostream>
using namespace std;
int main(){
int n,m;
cout<<"enter n and m"<<endl;
cin>>n>>m;
int arr[n][m];
cout<<"enter the elements of the matrix:"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}  
cout<<"matrix is:"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
cout<<"enter the search element"<<endl;
int x;

cin>>x;
bool flag = false;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==x){
            cout<<i<<" "<<j<<" "<<endl;
            flag=true;
        }
    }
}
if(flag){
    cout<<"element is found\n";
}
else{
    cout<<"element is not found\n";
}
 return 0;
} 