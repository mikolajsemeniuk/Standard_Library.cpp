#include <iostream>
#include <vector>

using namespace std;

template <typename T1, typename T2, typename T3 = char>
void push (vector<T1> &v, T2 val, T3 pos = 'd')
{
    if (pos == 'd')
        v.push_back(val);
    else
    {
        int size = (int)v.size();
        int index = (size + (pos % size) ) % size;
        v.insert(v.begin() + index, val);
    }
}

template <typename T1, typename T2 = char>
T1 pop (vector<T1> &v, T2 pos = 'd')
{
    if (pos == 'd')
    {
        T1 value = v.at(v.size() - 1);
        v.pop_back();
        return value;
    }
    else
    {
        int size = (int)v.size();
        int index = (size + (pos % size) ) % size;
        T1 value = v.at(index);
        v.erase(v.begin() + (index));
        return value;
    }
}

template <typename T>
vector<T> sort(vector<T> v, string mode = "asc")
{
    std::sort(v.begin(), v.end());
    if (mode == "desc")
        std::reverse(v.begin(), v.end());
    vector<T> sorted = v;
    return sorted;
}

template <typename T>
vector<T> reverse(vector<T> v)
{
    std::reverse(v.begin(), v.end());
    vector<T> sorted = v;
    return sorted;
}

int main(int argc, const char * argv[]) {
    
    // Call push and pop
    vector<int> p = { 1, 2, 3, 4 };
    vector<string> t = { "hey", "there", "hi" };
    cout << "value removed: " << pop(t, -1) << endl;
    push(p, 7, 2);
    
}
