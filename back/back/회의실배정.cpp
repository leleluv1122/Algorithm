#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

struct Meet
{
	int start;
	int end;
};

bool compare(Meet a, Meet b) {
	if (a.end != b.end) {
		return a.end < b.end;
	}
	else {
		return a.start < b.start;
	}
}

int main() {
	int N;
	scanf_s("%d", &N); 
	
	vector<Meet> meeting;

	for (int i = 0; i < N; ++i) {
		Meet temp;
		scanf_s("%d %d", &temp.start, &temp.end);

		meeting.push_back(temp);
	}

	sort(meeting.begin(), meeting.end(), compare);
	
	int sta = meeting[0].start, en = meeting[0].end;
	int cnt = 1;

	for (int i = 1; i < N; ++i) {
		if (meeting[i].start >= en) {
			cnt++;
			en = meeting[i].end;
			sta = meeting[i].start;
		}
	}

	printf("%d", cnt);
}

//11
//1 4
//3 5
//0 6
//5 7
//3 8
//5 9
//6 10
//8 11
//8 12
//2 13
//12 14


//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct meeting {
//	int start, end;
//};
//
//bool compare(meeting a, meeting b) {
//	if (a.end != b.end) {
//		return a.end < b.end;
//	} else {
//		return a.start < b.start;
//	}
//}
//int main() {
//	int N;
//	scanf_s("%d", &N);
//
//	vector<meeting> meeting_vec;
//	for (int i = 0; i < N; i++) {
//		meeting temp;
//		scanf_s("%d %d", &temp.start, &temp.end);
//
//		meeting_vec.push_back(temp);
//	}
//
//	sort(meeting_vec.begin(), meeting_vec.end(), compare);
//
//	int _start = meeting_vec[0].start, _end = meeting_vec[0].end;
//	int numFound = 1;
//	for (int i = 1; i < N; i++) {
//		if (meeting_vec[i].start >= _end) {
//			numFound++;
//			_end = meeting_vec[i].end, _start = meeting_vec[i].start;
//		}
//	}
//
//	printf("%d\n", numFound);
//}