/*
CH-230-A
Problem13-1.cpp
Nelson Tseng 
ntseng@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main(int argc, char **argv)
{
    string file_name;
    cin >> file_name;
    std::ifstream in_file(file_name);
    if (!in_file.good())
    {
        std::cerr << "error in opening in_file" << std::endl;
    }
    string new_file_name = "";
    for (long unsigned int i = 0; i < file_name.length(); i++)
    {
        if (file_name[i] == '.')
            new_file_name += "_copy";
        new_file_name += file_name[i];
    }
    std::ofstream out_file(new_file_name);
    if (!out_file.good())
    {
        std::cerr << "error in out_file" << std::endl;
    }
    string line;
    while (getline(in_file, line))
    {
        out_file << line << endl;
    }
}