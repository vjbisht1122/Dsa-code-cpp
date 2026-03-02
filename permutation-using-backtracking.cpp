#include <iostream>
#include <vector>
using namespace std;

void helper(vector<int> &n, int idx, vector<vector<int>> &ans)
{
    if (idx == n.size())
    {
        ans.push_back(n);
        return;
    }
    for (int i = idx; i < n.size(); i++)
    {
        swap(n[idx], n[i]);
        helper(n, idx + 1, ans);
        swap(n[idx], n[i]);
    }
}

vector<vector<int>> permutation(vector<int> &n)
{

    vector<vector<int>> ans;
    helper(n, 0, ans);
    return ans;
}

int main()
{
    vector<int> n = {1, 2, 3};
    cout << "the permutation is: " << endl;
    vector<vector<int>> res = permutation(n);
    for (auto vec : res)
    {
        for (int num : vec)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}