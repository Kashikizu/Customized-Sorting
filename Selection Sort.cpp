/*
 * @author Kashikizu
 * File Creation Date: 19/04/2024 (dd/mm/yyyy)
 * Update Date: 19/04/2024
 */

#include <bits/stdc++.h>
using namespace std;

void printVect(vector<int> a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

bool binSearch(vector<int> a, int key)
{
    int hi = a.size() - 1, lo = 0;
    while (lo <= hi)
    {
        int mid = (hi + lo) / 2;
        if (a[mid] == key)
        {
            return true;
        }
        else if (a[mid] > key)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return false;
}

vector<int> selSort(vector<int> a)
{
    int len = a.size();
    for (int i = 0; i <= len - 2; i++)
    {
        int mini = a[i], pos = i;
        for (int j = i + 1; j <= len - 1; j++)
        {
            if (mini > a[j])
            {
                mini = a[j];
                pos = j;
            }
        }
        swap(a[pos], a[i]);
    }
    return a;
}

int main()
{
    int input;
    cout << "Enter the number of elements you want to add:" << endl;
    cin >> input;
    cout << input << " number of inputs were selected" << endl;
    cout << endl;
    vector<int> elems;
    int elem;
    for (int i = 0; i < input; i++)
    {
        cout << "Enter element no. " << i + 1 << ": ";
        cin >> elem;
        elems.push_back(elem);
    }
    cout << "List of elements:" << endl;
    printVect(elems);
    elems = selSort(elems);
    cout << "Sorted list:" << endl;
    printVect(elems);
    cout << endl;
    cout << "Enter the number of elements you want to search:" << endl;
    cin >> input;
    cout << input << " number of inputs were selected" << endl;
    cout << endl;
    for (int i = 0; i < input; i++)
    {
        cout << "Enter search no. " << i + 1 << ": ";
        cin >> elem;
        bool ans = binSearch(elems, elem);
        if (ans)
        {
            cout << elem << " is found in the list" << endl;
        }
        else
        {
            cout << elem << " is not found in the list" << endl;
        }
    }
    cout << endl;
    cout << "Search ended. Hoping to run for you again! (^ - ^)/";
}
