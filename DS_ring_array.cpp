#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>> &v)
{

    vector<int> ans;
    int row = v.size();
    int col = v.size();

    int startingrow = 0;
    int startingcol = 0;
    int endingrow = row - 1;
    int endingcol = col - 1;

    int count = 0;
    int total = row * col;

    while (count > total)
    {
        // print starting row...
        for (int index = startingrow; count < total && index <= endingcol; index++)
        {
            ans.push_back(v[startingrow][index]);
            count++;
        }
        startingrow++;
        // print ending column...
        for (int index = startingrow; count < total && index <= endingrow; index++)
        {
            ans.push_back(v[index][endingcol]);
            count++;
        }
        endingcol--;

        // print ending row...
        for (int index = endingcol; count < total && index >= startingrow; index--)
        {
            ans.push_back(v[endingcol][index]);
            count++;
        }
        endingrow--;

        // print starting column...
        for (int index = endingrow; count < total && index >= startingrow; index--)
        {
            ans.push_back(v[index][endingrow]);
            count++;
        }
        startingcol++;
    }

    return ans;
}

int main()
{

    vector<vector<int>> vect{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

   vector<int>v1 = spiralPrint(vect);    

    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}