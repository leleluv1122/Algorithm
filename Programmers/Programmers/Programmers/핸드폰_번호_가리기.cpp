#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
	string answer = "";
	int size = phone_number.size() - 5;
	
	for (int i = 0; i < phone_number.size(); i++) {
		if (i > size)
			answer += phone_number[i];
		else
			answer += '*';
	}

	return answer;
}