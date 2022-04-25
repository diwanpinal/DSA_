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

string str = "string";
str.clear();
if(str.empty()){//using_emptymethod//
    cout<<"string is empty"<<endl;
}
else{
    cout<<"string is not empty"<<endl;
}

string str="stringexample";
str.erase(3, 4);//using_erasemethod//erase(from,how many letter)//
cout<<str<<endl;

string s5="stringexample";
cout<<s5.find("exam")<<endl;//using_findmethod//
s5.insert(6,"insert");//insertmethod//
cout<<s5<<endl;

string str1="stringexample";
cout<<str1.length()<<endl;//lengthmethod//
for(int i=0;i<str1.length();i++){
    cout<<str1[i]<<endl;
}
*/
string str2="stringexample";
string s= str2.substr(6,7);//substringmethod//
cout<<s<<endl;
    return 0 ;
}