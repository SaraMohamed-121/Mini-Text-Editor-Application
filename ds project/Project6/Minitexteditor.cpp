#include "Minitexteditor.h"
#include <iostream>
#include<string>
#include <vector>
#include "assert.h"
using namespace std;
Minitexteditor::Minitexteditor()
{
}
Minitexteditor::~Minitexteditor()
{
}
void Minitexteditor::add(string s)
{
	vec.push_back(s);
}
void Minitexteditor::insert(string s, int position)
{
	vec.push_back("k");
	for (int i = vec.size() - 1; i > position; i--)
		vec[i] = vec[i - 1];
	vec[position] = s;
}
void Minitexteditor::display()
{
	if (vec.size() != 0)
		for (int i = 0; i < vec.size(); i++)
		{
			cout << (i+1) << ' ' << vec[i] << '\n';
		}
	else
		cout << "You did not enter any text yet!\n";
}
void Minitexteditor::findAndReplaceAll(string& vec, string toSearch, string replaceStr)
{

	
		// Get the first occurrence
		size_t pos = vec.find(toSearch);
		// Repeat till end is reached
		while (pos != string::npos)
		{
			// Replace this occurrence of Sub String
			vec.replace(pos, toSearch.size(), replaceStr);
			// Get the next occurrence from the current position
			pos = vec.find(toSearch, pos + replaceStr.size());
		}
	}

void Minitexteditor::Find_all()
{
	//display
	cout << "*********************** The Orignal Text *********************** " << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	//search
	cout << "Enter the string to search for : ";
	string search; cin >> search;
	bool found = false;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].find(search) != string::npos) {
			cout << "string  found" << endl;
			break;
		}
		else {
			cout << "string not found" << endl;
			break;
		}

	}
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].find(search) != string::npos) {
			int line = i + 1;
			cout << "Found in line :" << line << endl;
		}
	}
	
}

void Minitexteditor::Find_And_Replace()
{
	cout << "*********************** The Orignal Text *********************** " << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	cout << endl;
	cout << "Please Enter the frist string : ";
	string str1; cin >> str1;
	for (int i = 0; i < vec.size(); i++)
	{
		if ((vec[i].find(str1) == string::npos)) {
			cout << "The text you entered does not exist, please try again" << endl;
			break;
		}
		else {
			cout << "Please Enter the second string : ";
			string str2; cin >> str2;
			for (int i = 0; i < vec.size(); i++)
			{
				findAndReplaceAll(vec[i], str1, str2);
			}
			cout << endl;
			cout << "The text after replace :" << endl;

			for (int i = 0; i < vec.size(); i++)
			{
				cout << vec[i] << endl;
			}
		}
	}
	

}




void Minitexteditor::get_line(int line_number)
{
	cout << vec.at(line_number) << endl;
}
void Minitexteditor::delete_line(int line_number)
{
	if (vec.empty())
	{
		cout << "vector is empty\n";
	}
	else
	{
		vec.erase(vec.begin() + line_number - 1);
	}
}
void Minitexteditor::update_line(int pos, string new_line)
{
	assert(pos > 0 && pos < vec.size());
	if (vec.empty())
	{
		cout << "vector is empty\n";
	}
	else
	{
		vec[pos] = new_line;
	}
}