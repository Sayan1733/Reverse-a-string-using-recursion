#include<iostream>
using namespace std;
void reverse(string s){
	if(s.length()==0){
		return;
	}
	string st=s.substr(1);
	reverse(st);
	cout<<s[0];
}
int main(){
	string s;
	cout<<"Enter the string:";
	cin>>s;
	cout<<"The Reversed String: ";
	reverse(s);
	return 0;
}
