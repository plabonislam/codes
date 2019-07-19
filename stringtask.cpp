

// CPP code to illustrate
// erase() function

#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
using namespace std;

// Function to demo erase()
void eraseDemo(string str)
{
    // Deletes all characters
    str.erase(1,2);

    cout << "After erase() : ";
    cout << str;
}

string lower(string str)
{
    string st=" ";
    // Deletes all characters
   for(int i=0;i<str.length();i++)
   {
       str[i]=tolower(str[i]);

   }
return str;
}

string rip(string str)
{
    string st=" ";
    cout<<"pla"<<str;
    // Deletes all characters


       str.replace(1,5,"p");
       //str.replace(position_number,how many we are replacing from position,"new string that wann"


   cout<<str<<endl;
return str;
}
// Driver code
int main()
{
    string str("Hello World!"),st;

    cout << "Before erase() : ";
    cout << str << endl;
    st=lower(str);
    rip(st);
    eraseDemo(st);

    return 0;
}
