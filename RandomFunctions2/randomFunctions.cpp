#include "randomFunctions.h"
#include <algorithm>

using std::swap;

// for the following 2 reverseString functions, you could add an if statement that only swaps the 2 characters if they are not the same (you would have to convert them both to lowercase before performing the comparison)
string reverseStringForward(string stringToReverse) {
	int oneLessStringSize = stringToReverse.size() - 1;
	for (int i = 0; i < stringToReverse.size() / 2; i++)
		swap(stringToReverse[i], stringToReverse[oneLessStringSize - i]);
	return stringToReverse;
}

string reverseStringBackward(string stringToReverse) {
	int oneLessStringSize = stringToReverse.size() - 1;
	for (int i = oneLessStringSize; i > oneLessStringSize / 2; i--) 
		swap(stringToReverse[i], stringToReverse[oneLessStringSize - i]);
	return stringToReverse;
}