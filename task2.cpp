/*
Author: Phillip Chen
Course: 136
Instructor: Alex Nikolaev
Assignment: Lab9a

This program makes an vector with random numbers in it.
The function gets maximum value in the vector by comparing the last two elements of the vector.
First I saved the last element of the vector on to a variable.
Then I compared that last element value with the 2nd last element of the vector.
Then I removed the last element in the vector and 
if the element removed was a bigger value, replace last spot in the vector.
if the element remove was a lower value, no change is needed.
Base case would be when the vector size is only 1 ( the maximum value in the vector ), returns itself.
*/
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int maximum(vector<int> v); 
	
int main(){

	vector<int> v;
	for (int i = 1; i <=10; i++){
		v.push_back(rand() % 100 + 1);
		}
	for (int i = 0; i <= v.size()-1; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	int result = maximum(v);
	cout<<"Maximum:"<<result<<endl;
	return 0;
}

int maximum(vector<int> v){
	if (v.size() > 1){
		int last1 = v[v.size()-1];
		int last2 = v[v.size()-2];
		v.pop_back();

		if (last1 > last2){
			v[v.size()-1]=last1;
			return maximum(v);
		}
		else{
			return maximum(v);
		}
	}
	else
		return v[0];	
}
	
