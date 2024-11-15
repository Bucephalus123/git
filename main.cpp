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
        /*for (const auto& line: lines) // Проверка корректности чтения файла
        {
            cout << line << endl;
        }*/
    }
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
    //lines = {10,"a"};
    print_lines(lines);
    write_file(output_file, lines);
    return 0;
}
