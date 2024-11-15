#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void read_file(const string& file, vector<string>& lines)
{

}

void print_lines(const vector<string>& lines)
{

    for(auto &x: lines)
    {
        cout << x << endl;
    }
}

void write_file(const string& file,const vector<string>& lines)
{
    ofstream out("output.txt");
    for(auto &x: lines)
    {
        out << x << endl;
    }
}

int main()
{
    vector<string> lines;
    string input_file = "input.txt";
    string output_file = "output.txt";

    read_file(input_file, lines);
    lines = {10,"a"};
    print_lines(lines);
    write_file(output_file, lines);
    return 0;
}
