#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> daysOfMonth = {31,28,31,30,31,30,31,31,30,31,30,31};
    int T;
    cin >> T;
    string s;
    for(int tc=1; tc<=T; tc++) {
        cin >> s;
        int month = atoi(s.substr(4,2).c_str());
        int day = atoi(s.substr(6).c_str());
        cout << "#" << tc << " ";
        if( 1<=month && month<=12 && 1<=day && day<=daysOfMonth[month-1] ) {
            cout << s.substr(0,4) << "/" << s.substr(4,2) << "/" << s.substr(6) << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}
