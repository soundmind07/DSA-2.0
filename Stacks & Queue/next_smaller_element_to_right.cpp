#include <iostream>
#include <stack>
#include <vector>

using namespace std ;


vector<int> findNextSmallerElement(const std::vector<int>& arr) {

// declaring vector for storing next smaller element
	vector<int> result(arr.size(), -1); 

// declaring a stack
	stack<int> st; 

// iterating through array 
	for (int i = 0; i < arr.size(); ++i) {
	
	// checking for next smaller element
		while (!st.empty() && arr[i] < arr[st.top()]) {
		
		// pushing the next smaller element
			result[st.top()] = arr[i];
		
			st.pop();
		}

		// pushing elements of array in stack
		st.push(i);
	}

	return result;
}

