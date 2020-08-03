#include<iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> read (string pathFile)
{
    vector<string> results;
    
    // Convert 'string' to 'char[]' to use fopen function
    char file[pathFile.length() + 1];
    strcpy(file, pathFile.c_str());
    
    // Open file and read
    FILE* fp = fopen(file, "r");
    if (fp == NULL)
    {
        cout << "problem opening document";
        exit(EXIT_FAILURE);
    }
    
    // why use C features instead of C++ => https://stackoverflow.com/questions/7868936/read-file-line-by-line-using-ifstream-in-c
    char* line = NULL;
    size_t len = 0;
    while ((getline(&line, &len, fp)) != -1) {
        results.push_back(line);
    }
    
    // Close file and free memory
    fclose(fp);
    if (line)
        free(line);
    
    return results;
}

template <class T>
void print (vector<T> v)
{
    for (auto &i : v)
        cout << "nr: " << i << endl;
}

int main(int argc, const char * argv[]) {
    
    vector<string> output = read("/Users/mikolajsemeniuk/Projects/C++/Test/Test/lines.txt");
    print(output);
    
}
