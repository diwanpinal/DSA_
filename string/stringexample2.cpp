
//conversion_uppercase_lowercase//
/*
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
*/
//conversion_uppercase_lowercase_using_transformmethod//
/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s= "abcdefghijkm";
for(int i=5; i<s.size();i++){//converting lowercase into uppercase in middle of string
    if(s[i]>='a' && s[i]<='z'){ //for uppercase//as ascii difference of 'a' and 'A' is 32//
        s[i] -=32;
       
    }

}
cout<<s<<endl;
//transform(s.begin(), s.end(), s.begin(),::toupper);
//cout<<s<<endl;
//transform(s.begin(), s.end(), s.begin(),::tolower);
//cout<<s<<endl;
return 0;
}
*/
//greatest_numaric_string//
/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s= "35647565698";
    sort(s.begin(),s.end(), greater<int>());
    cout<<s<<endl;
    return 0;
}
*/
//maximum_occurance_char_instring//
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="ugshbnbsbhjbnmbm";
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0; i<s.size();i++){
        freq[s[i]-'a']++;
    }
   char ans='a';
   int maxF= 0;
   for(int i=0;i<26;i++){
       if(freq[i]>=maxF){
           maxF= freq[i];
           ans= i+'a';

       }
   }

cout<<maxF<<" "<<ans<<endl;

    return 0;

}









