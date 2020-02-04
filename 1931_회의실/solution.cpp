#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Time {
    int begin;
    int end;
};

bool cmp(Time a, Time b) {
    if (a.end == b.end) {
        return a.begin < b.begin;
    } else {
        return a.end < b.end;
    }
}

int solve(vector<Time>& t) {
    int cnt = 0;
    int end_time = 0;
    for (int i = 0; i < t.size(); i++) {
        if (end_time <= t[i].begin) {
            end_time = t[i].end;
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int N;
    cin >> N;

    vector<Time> t(N);

    for (int i = 0; i < N; i++) {
        cin >> t[i].begin >> t[i].end;
    }

    sort(t.begin(), t.end(), cmp);

    int cnt = solve(t);
    cout << cnt << endl;
    return 0;
}
