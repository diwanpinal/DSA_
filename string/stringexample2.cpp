
//conversion_uppercase_lowercase//
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str="abcdefghijk";
for(int i=0;i<str.size();i++){
    if(str[i]>='a' && str[i]<='z'){ //for uppercase//as ascii difference of 'a' and 'A' is 32//
        str[i] -=32;
       
    }
}
cout<<str<<endl;
 
 for(int i=0;i<str.size();i++){
    if(str[i]>='A' && str[i]<='Z'){ //for lowercase//as ascii difference of 'a' and 'A' is 32//
        str[i] +=32;
       
    }
}
cout<<str<<endl;
   




    return 0;
}
