#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
	int idx = 0, g = 0;
	while (idx < s.size()) {
		if (s[idx] == '(')
			g++;
		else {
			if (g == 0)
				return false;
			else
				g--;
		}
		idx++;
	}
	if (g)
		return false;
	return true;
}