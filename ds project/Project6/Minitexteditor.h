#pragma once
#include <string>
#include <vector>
#include <string>
using namespace std;
class Minitexteditor
{
	vector <string> vec;
public:
	Minitexteditor();
	void add(string);
	void insert(string, int);
	void delete_line(int);
	void get_line(int);
	void update_line(int, string);
	void display();
	void findAndReplaceAll(string& data, string toSearch, string replaceStr);
	void Find_all();
	void Find_And_Replace();
	~Minitexteditor();
};