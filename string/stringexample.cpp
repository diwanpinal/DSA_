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
/*#include<iostream>
#include<string>
using namespace std;
int main(){
string s1="fam";
string s2="ily";
//s1.append(s2);//by append method//

cout<<s1+s2<<endl;//without append method//
    return 0;
}
*/
//playing_with_string//
#include<iostream>
#include<string>
using namespace std;
int main(){
//string s1="pinal";
//cout<<s1[2]<<endl; //printing_letter_from_string//
//string s2="gyjgjhghjbnnnbnbnb";
//s2.clear();
//cout<<s2<<endl;
/*string s3="abc";
string s4="def";
if(!s4.compare(s3)){//comparing_strings//
cout<<"strings are equal"<<endl;
}
else{
    cout<<"strings are not equal"<<endl;
}
*/
string str = "string";
str.clear();
if(str.empty()){//using_emptymethod//
    cout<<"string is empty"<<endl;
}
else{
    cout<<"string is not empty"<<endl;
}

    return 0 ;
}