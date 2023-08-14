#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	getline(cin, s);

	auto a = int{ 0 };
	auto b = int{ 0 };
	for (auto i = 0; i < s.length(); ++i) {
		if (':' == s[i]) {
			const auto s2 = s.substr(i, 3);

			if (s2 == ":-)") {
				++a;
			}
			else if (s2 == ":-(") {
				++b;
			}
		}
	}

	if (0 == a && 0 == b) {
		cout << "none";
	}
	else if (a == b) {
		cout << "unsure";
	}
	else if (b < a) {
		cout << "happy";
	}
	else {
		cout << "sad";
	}

	return 0;
}