/*
Author: Phillip Chen
Course: 136
Instructor: Alex Nikolaev
Assignment: Lab11

This program takes a string input and decides if it is well-formed or not.
To be well formed the string has to have pairing symbols of [],{}, and <>.
For example <{[])> is well formed. <{{]}> is not well formed because {] is not the pairing correctly
*/
#include <iostream>
#include <string>
using namespace std;

bool wellFormed(string s); 

int main(){
	string s;
	cout<<"Please input string: ";
	getline(cin,s);
	
	cout<<"size: "<<s.size()<<endl;
	bool result = wellFormed(s); 
	
	if (result == true){  
		cout<<"The string well-formed"<<endl;
	}
	else{
		cout<<"The string is NOT well-formed"<<endl;
	}
	return 0;
}

bool wellFormed(string s){
	if (s.size()>2){
		bool outer_symbols =( 	s[0]=='{' && s[s.size()-1]=='}' ||  
					s[0]=='[' && s[s.size()-1]==']'	||
					s[0]=='<' && s[s.size()-1]=='>');
		cout<<"first loop size "<<s.size()<<endl;
		return ( outer_symbols && wellFormed(s.substr (1,s.size()-2) ) );
	}
	//base case when only 2 slot are left
	if (s.size()==2){
		bool outer_symbols =( 	s[0]=='{' && s[s.size()-1]=='}' ||  		
					s[0]=='[' && s[s.size()-1]==']' ||  		
					s[0]=='<' && s[s.size()-1]=='>');
		cout<<"second loop size "<<s.size()<<endl;
		return ( outer_symbols );
	}
	//base case if the string 0th element isnt one of these symbol output true
	//if it is one of these symbol, then it is false because it does not have a symbol to pair with
	if (s.size()==1){
		cout<<"third loop size"<<s.size()<<endl;  
		return(s[0]!='{' && s[0]!='}'
		&& s[0]!='[' && s[0]!=']'
		&& s[0]!='<' && s[0]!='>');
	}
}
