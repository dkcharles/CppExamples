// C++ code to demonstrate the working of
// iterator, begin() and end()
// https://www.geeksforgeeks.org/iterators-c-stl/

#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
using namespace std;
int main()
{
	vector<int> ar = { 1, 2, 3, 4, 5 };

	// Declaring iterator to a vector
	vector<int>::iterator ptr = ar.begin();

	// Displaying vector elements using begin() and end()
	cout << "The vector elements are : ";
	for (ptr; ptr < ar.end(); ptr++)
		cout << *ptr << " " ;

	// Using advance() to increment iterator position
    // points to 4
	ptr = ar.begin();
	advance(ptr, 3);
      
    // Displaying iterator position
    cout << endl << "The position of iterator after advancing 3 elements is : ";
    cout << *ptr << " " << endl;

	return 0;
}
