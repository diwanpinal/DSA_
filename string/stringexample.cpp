//string intialisation//
/*
#include<iostream>
#include<string>
using namespace std ;
int main(){
string str;
cin>>str;
cout<<str;
string str1(5,'d');
cout<<str1<<endl;
string str2="diwan"; 
cout<< str2;
string str3;
getline(cin,str3);
cout<<str3<<endl;
    return 0;

}
*/
//concatenation_of_strings//
#include<iostream>
#include<string>
using namespace std;
int main(){
string s1="fam";
string s2="ily";
s1.append(s2);//by append method//
cout<<s1<<endl;
    return 0;
}