//
//  main.cpp
//
//  Created by Mikołaj Semeniuk on 04/04/2020.
//  Copyright © 2020 Mikołaj Semeniuk. All rights reserved.
//


#include <iostream>
#include <map> // needed for std::map
#include <vector> // needed for store values in vector

using namespace std;

template <class P, class Q>
void display (std::map<P, Q> &m)
{
    for (auto &i : m)
        cout << i.first << " " << i.second << endl;
}

template <class P, class Q>
void init (std::map<P, Q> &m)
{
    // Add node
    m["five"] = 5; // add node if "five" doesn't exist or change value of "five" if exists
    m.insert(pair<string, int>("fourth", 4)); // insert nothing if "fourth" doesn't exist
    m.insert({ "sixth", 6 }); // insert nothing if "sixth" doesn't exist
    
    // Edit node
    auto node = m.extract("two"); // key
    if (!node.empty())
    {
        node.key() = "two_two"; // crash if node is empty
        m.insert(std::move(node));
    }
    if (m.count("two_two")) // val
    {
        m.at("two_two") = 25; // crash without if above
    }
    m["two_two"] = 22; // create node if doesn't exist
    m.find("two_two")->second = 22; // won't create node if doesn't exist
    
    
    // Get node
    auto key = m.find("three")->first; // key
    auto val = m.find("three")->second; // value
    auto upper_node = m.upper_bound("one") // next present node after node "one"
    auto upper_node = m.lower_bound("one") // previous present node before node "one"
    cout << "key: " << key << ", val: " << val << endl << endl;
    
    // Assing nodes
    auto index = distance(m.begin(), m.find("one")); // get the index of value "one"
    map<string, int> m1(std::next(m.begin(), index), std::next(m.begin(), index + 1)); // assing one node "one"
    map<string, int> m2(std::next(m.begin(), index), std::next(m.begin(), index + 3)); // assing three nodes includes "three" and 2 next nodes, !!! Won't work if index out of range
    map<string, int> m3(std::prev(m.end(), index + 3), std::prev(m.end(), index)); // assing three nodes includes "three" and 2 previous nodes, !!! Won't work if index out of range
    map<string, int> m5(m.begin(), m.find("three")); // assing elements not includes and before "three"
    map<string, int> m6(m.find("three"), m.end()); // assing elements includes and after "three"
    map<string, int> m7(m.find("fourth"), m.find("two_two")); // assing elements includes and after "fourth" and not includes and before "two_two"
    map<string, int> m4(m.begin(), m.end()); // assing all nodes
    
    // Remove nodes
    m.erase("five"); // remove elements which key is equal "five
    m.erase(m.begin(), m.end()); // remove all elements
    map::clear(); // remove all elements
    
    // Swap maps
    swap(m3, m5);
    m2.swap(m4);
    
    // Size of map
    cout << "size: " << m.size() << endl;
    cout << "max_size: " << m.max_size() << endl;
    
    // catch certain values in vector
    vector<int> values_lower_than_4;
    for (auto &i : m)
    {
        if (i.second < 4)
            values_lower_than_4.push_back(i.second);
    }
}

int main ()
{
    map<string, int> m { {"one", 1}, {"two", 2}, {"three", 3} };
    init(m);
    display(m);
    return 0;
}
