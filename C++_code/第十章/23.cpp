#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using std::cout; using std::endl;
using std::string; using std::vector;
using namespace std::placeholders;
bool check_size(const string &s, string::size_type sz);
int main() {
    string s("Hello");
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    auto check = std::bind(check_size, ref(s), _1);
    auto vc = std::find_if(v.begin(), v.end(), check);
    cout << *vc << endl;
    return 0;
}
bool check_size(const string &s, string::size_type sz) {
    return s.size() < sz;
}
