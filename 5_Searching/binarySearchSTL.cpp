// Binary Search using STL

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (binary_search(v.begin(), v.end(), 4)) {
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    return 0;
}