#include <iostream>
#include <regex>

using namespace std;

vector<string> split (string stringToSplit, string patternToSearchFor)
{
    vector<string> matches;

    size_t pos = 0;
    std::string match;
    
    while ((pos = stringToSplit.find(patternToSearchFor)) != std::string::npos) {
        match = stringToSplit.substr(0, pos);
        matches.push_back(match);
        stringToSplit.erase(0, pos + patternToSearchFor.length());
    }
    
    return matches;
}

template <class T>
string join (vector<T> vectorToJoin, string stringToJoin)
{
    string result = "";
    for (auto &i : vectorToJoin)
        result.append(std::to_string(i) + stringToJoin);
    return result;
}

string replace (string stringToReplace, string substringToReplace, string substringToReplaceFor)
{
    string result = std::regex_replace(stringToReplace, std::regex(substringToReplace), substringToReplaceFor);
    return result;
}

int main(int argc, const char * argv[]) {
    
    // Call replace
    std::string csv = "Hello, World!, there, enough";
    csv = replace(csv, " ", "");
    cout << "csv: " << csv << endl;
    
    // Call split
    vector<string> s = split("This dsadsa;is dsads;a das; dsatest;", ";");
    print(s, 50);
    
    // Call join
    vector<int> q = { 1, 2, 3, 4, 6 };
    string n = join(q, " ");
    cout << "n: " << n << endl;
    
}
