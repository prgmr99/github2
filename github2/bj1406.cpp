#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
#define pass (void) 0

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	cin >> str;
	int n, cs;
	cin >> n;
	cs = n;
	for (int i = 0; i < n; i++) {
		string order;
		cin >> order;
		if (order == "L") {
			cs -= 1;
			if (cs == 0)
				pass;
		}
		if (order == "D") {
			cs += 1;
			if(cs==)
		}
	}
	return 0;
}

// cs의 위치를 표현방식을 조금 다르게 해야할 것 같아.