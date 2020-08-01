#include <iostream>

using namespace std;

template <typename T1, typename T2 = char>
void print (vector<T1> v, string order = "default", T2 n = 10)
{
    if (n == 'm')
        n = (int)(v.size()); // only to mute compiler
    
    if (order != "asc" && order != "desc")
    {
        for (unsigned long i = 0; i < v.size() && i < n; i++)
            cout << v[i] << " ";
    }
    else
    {
        std::sort(v.begin(), v.end());
        if (order == "asc")
        {
            for (unsigned long i = 0; i < v.size() && i < n; i++)
                cout << v[i] << " ";
        }
        else
        {
            std::reverse(v.begin(), v.end());
            for (unsigned long i = 0; i < v.size() && i < n; i++)
                cout << v[i] << " ";
        }
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    
    // Call push and pop
    vector<int> p = { 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4 };
    vector<string> t = { "hey", "there", "hi", "bye" };
    print(p, 'd', 'm');
    print(t, 'n', 2);
    
}
