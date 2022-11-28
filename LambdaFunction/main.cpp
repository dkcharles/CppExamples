// https://www.programiz.com/cpp-programming/lambda-expression

#include <iostream>
using namespace std;

int main() {

	// lambda function that takes two integer
	//  parameters and displays their sum
	auto add = [](int a, int b) {
		return a + b;
	};

	// call the lambda function
	int result = add(100, 78);

	cout << "Sum = " << result; 

	return 0;
}