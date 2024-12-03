#include <iostream>
#include <fstream> // combination for ifstream create and write file and ofstream read file

using namespace std;

int main()
{
    // create and open sample_not.txt file
    ofstream MyFile("sample_note.txt");

    // write into file
    MyFile << "Files can be tricky, but it is fun enough!";

    MyFile.close(); // close file

    // file read operation
    // read sample_note.text file content into readContent string
    string readContent;

    ifstream MyReadFile("sample_note.txt");

    while (getline(MyReadFile, readContent))
    {
        cout << readContent;
    }

    MyReadFile.close();
}
