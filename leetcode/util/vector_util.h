#include <vector>
#include <iostream>
using namespace std;

static bool compare2DeepVecInt(vector<vector<int>> &left, vector<vector<int>> &right)
{
    if (left.size() != right.size())
        return false;

    for (size_t i = 0; i < left.size(); ++i)
    {
        if (left[i] != right[i])
            return false;
    }
    return true;
}

static void print2DeepVecInt(vector<vector<int>> &vec)
{
    cout << "================ begin ================\n";
    for (auto &a : vec)
    {
        for (auto &b : a)
            cout << b << ",";
        cout << endl;
    }
    cout << "================= end =================\n";
}
