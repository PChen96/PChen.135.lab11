/*
Author: Phillip Chen
Course: 136
Instructor: Alex Nikolaev
Assignment: Lab9a

This program makes an vector with 1,2,3,4,5,6,7,8,9,10 in it.
The function gets the sum of the values inside the vector by 
identifying the last element while removing that element from the vector. 
repeat that process until the vector is empty.
Once its empty, this is the base case (keeping the function from repeating infinitely) 
so we return a value (in this casue it is zero because we are doing addition and we dont want it
to affect the end result).
Then add all the number pulled out of the vector to get our answer
*/
#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> v); 
	
int main(){

	vector<int> v;
	for (int i = 1; i <=10; i++){
		v.push_back(i);
		}
	
	for (int i = 0; i <= v.size(); i++){
		cout<<v[i]<<" ";
		}cout<<endl;
		
	int result = sum(v); 
	cout<<result<<endl;
	return 0;
}

int sum(vector<int> v){
	if (v.size() > 0){
		int last = v[v.size()-1];
		v.pop_back();
		return sum(v) + last;
	}
	else
		return 0;	
}
	

