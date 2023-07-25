#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int cnt = 0;
    for (string i : seoul) {
        if (i == "Kim") break;
        cnt++;
    }
    string s = to_string(cnt);
    string answer = "김서방은 ";
    answer += s;
    answer += "에 있다";
    return answer;
}