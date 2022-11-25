#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> v = { 1, 5, 2, 6, 8 };

    v.assign(1);
    for(auto i = v.begin(); i<v.end(); i++){
        cout << v[i] << " ";
    }   
    return 0;
}