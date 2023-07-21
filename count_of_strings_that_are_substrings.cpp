#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//generate strings of random sizes in a vector of strings
void generate_strings(std::vector<std::string> &v, int n)
{
    for(int i=0; i<n; i++)
    {
        int len = rand()%10 + 1;
        string str = "";

        for(int j=0; j<len; j++) 
        {
            char ch = rand()%2 + 'a';
            str += ch;
        }
        v.push_back(str);
    }
}

int main() 
{   
    vector<string> strings;
    generate_strings(strings, 10);

    cout<<"Generated strings: "<<endl;

    for(string str : strings)
        cout<<str<<endl;

    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    
    int count = 0;
    for(string str : strings)
        if(s.find(str) == 0 && ++count)
            cout<<str<<endl;

    cout<<count<<endl;
    return 0;
}