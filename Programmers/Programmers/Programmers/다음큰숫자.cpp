using namespace std;

int two(int n) {
	int ans = 0;
	while (n) {
		ans += n % 2;
		n /= 2;
	}
	return ans;
}

int solution(int n) {
	int ntwo = two(n);
	int rst;
	while (1) {
		rst = two(++n);
		if (ntwo == rst)
			return n;
	}
}