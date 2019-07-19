#include<iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{

    string word;
    cin>>word;
    int space=0;
    for(int i=0; i<word.length();)
    {
        if(word[i]=='W'&& word[i+1]=='U' && word[i+2]=='B')
        {
            if(space!=0)
                cout<<" ";
            word.erase(i,3);
        }
        else
        {
            cout<<word[i];
            space++;
            i++;
        }


09278123123
    }


}
