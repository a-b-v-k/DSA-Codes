#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void generate_2d_array(int arr[][10], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            arr[i][j] = rand()%10;
    }
}

void count_unique_elements(int arr[][10], int row, int col)
{
    unordered_map<int, int> hmap;
    vector<int> unique_elements;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            if(hmap.find(arr[i][j]) == hmap.end())
                hmap[arr[i][j]] = 1;
    }

    for(auto ele : hmap)
        unique_elements.push_back(ele.first);

    sort(unique_elements.begin(), unique_elements.end());

    cout<<"Unique elements:"<<endl;
    for(int ele : unique_elements) 
        cout<<ele<<" ";
    cout<<endl;
}

int main()
{
    int arr[10][10];
    generate_2d_array(arr, 10, 10);

    cout<<"2d Array:"<<endl;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    count_unique_elements(arr, 10, 10);

    return 0;
}

