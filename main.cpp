#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void read_file(const string& file, vector<string>& lines)
{
    ifstream input_file(file);
    if (input_file.is_open())
    {
        string line;
        while (!input_file.eof())
        {
            getline(input_file, line);
            lines.push_back(line);
        }
        input_file.close();
    }
}

void print_lines(const vector<string>& lines)
{

}

void write_file(const string& file,const vector<string>& lines)
{

}

int main()
{
    vector<string> lines;
    string input_file = "input.txt";
    string output_file = "output.txt";

    read_file(input_file, lines);
    print_lines(lines);
    write_file(output_file, lines);
    return 0;
}
