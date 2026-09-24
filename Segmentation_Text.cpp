// Segmentation_Text.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
string Read_Text(string msg)
{
    string text;
    cout << msg << endl;
    getline(cin, text);
    return text;
}

string Segmentation_Text(string text)
{
    for (int counter = 0; counter <= text.length(); counter++)
    {
        cout << text[counter] << endl;
    }
    return text;
}
int main()
{
    string Text = Read_Text("Enter The Text:");
    cout << Segmentation_Text(Text);
}