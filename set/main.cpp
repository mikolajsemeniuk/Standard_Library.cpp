//
//  main.cpp
//
//  Created by Mikołaj Semeniuk on 04/04/2020.
//  Copyright © 2020 Mikołaj Semeniuk. All rights reserved.
//


#include <iostream>
#include <set>

using namespace std;

template <class T>
void display (set<T> const &s)
{
    for (auto &i : s)
        cout << i << endl;
}

template <class T>
void init (set<T> &s)
{
    // Add to set
    s.insert(6);
    
    auto r = s.emplace(13); // r.second return True if insert element was succesful
    auto q = s.emplace_hint (s.end(), 11); // returns iterator to newly inserted element
    
    // Get value
    auto p = s.find(6); // get value by value
    auto itlow = s.lower_bound (3); // returns all node before and not includes 3
    auto itup = s.upper_bound (5); // returns all node after and includes 5
    
    
    // Assign set
    set<int> n (s.begin(), s.end());
    
    // Remove from set
    s.erase(3);
    n.clear();
    
    // Properties
    cout << "count: " << s.count(6) << endl;
    cout << "empty: " << s.empty() << endl;
    cout << "size: " << s.size() << endl;
    cout << "max_size: " << s.max_size() << endl;
    
    // Swap values
    swap(s, n);
    s.swap(n);
}

int main ()
{
    set<int> s = { 1, 2, 3, 4, 5, };
    int my_ints[] = { 1, 2, 3 };
    std::set<int> m (my_ints, my_ints + 1); // get the first and next element
    init(s);
    display(s);
    return 0;
}

