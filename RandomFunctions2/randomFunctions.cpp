#include "randomFunctions.h"
#include <algorithm>

using std::swap;

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