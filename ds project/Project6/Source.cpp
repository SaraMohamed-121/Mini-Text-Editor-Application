#include <iostream>
#include<string>
#include <vector>
#include "Minitexteditor.h"
using namespace std;
int main()
{
    Minitexteditor minitexteditor = Minitexteditor();
    char x, v = 'y';
    string s;
    int position, number;
    do
    {
        cout << "~((Mini text editor))~" << endl;
        cout << "A.add new line\nB.insert new line\nC.desplay all\nD.get line\nE.delete line\nF.update line\nG.Find all\nH.Find and Replace\n";
        cout << "Make your choice : ";
        cin >> x;
        switch (x)
        {
        case 'A':
        {
            cout << "Enter the line : ";
            getline(cin >> ws, s);
            minitexteditor.add(s);
            break;
        }
        case 'B':
        {
            cout << "Enter the line : ";
            getline(cin >> ws, s);
            cout << "please enter a zero-based position\n";
            cin >> position;
            minitexteditor.insert(s, position);
            break;
        }
        case 'C':
        {
            minitexteditor.display();
            break;
        }
        case 'D':
        {
            cout << "enter the line number :";
            cin >> number;
            minitexteditor.get_line(number);
            break;
        }
        case 'E':
        {
            cout << "enter the line number you want to delete :";
            cin >> number;
            minitexteditor.delete_line(number);
            break;
        }
        case 'F':
        {
            cout << "enter the line number :";
            cin >> number;
            cout << "enter the new line:";
            getline(cin >> ws, s);
            minitexteditor.update_line(number, s);
            break;
        }
        case 'G':
        {
            minitexteditor.Find_all();
        }
        case 'H':
        {
            minitexteditor.Find_And_Replace();
            break;

        }

        }
        cout << "If you want to continue press (y) else press any key : ";
        cin >> v;
    } while (v == 'y');
    return 0;
}





