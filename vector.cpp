//
//  main.cpp
//  Temp_C++
//
//  Created by Mikołaj Semeniuk on 04/04/2020.
//  Copyright © 2020 Mikołaj Semeniuk. All rights reserved.
//


#include <iostream>
#include <vector> // needed for using std::vector
#include <set> // needed for using std::set
#include <numeric> // needed for using std::iota
#include <algorithm> // needed for std::iter_swap
#include <random> // std::rand, std::random_device, std::mt19937, std::shuffle

using namespace std;

void display (std::vector<int> const &v)
{
    for (auto &i : v)
        cout << i << endl;
}

template <typename T>
void shuffle_vector(std::vector<T>* v)
{
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle((*v).begin(), (*v).end(), g);
}

template <typename T>
T random_choice (const std::vector<T> &list)
{
    int random = std::rand() % list.size();
    return list.at(random);
}

template <class T>
void init (vector<T> &v)
{
    v.push_back(1); // add at to the end of the list
    v.insert(v.begin(), 7); // add at to the beginning of the list
    v.insert(v.begin() + 2, 74); // add to 2 position
    
    v.at(2) = 177; // edit element at position 2
    auto my_val = v.at(2); // get the value at position 2
    cout << "catched value: " << my_val << endl;
    
    v.pop_back(); // remove the last element
    v.erase(v.begin()); // remove the first element
    v.erase(v.begin() + 2); // remove element at 2 position
    
    std::sort(v.begin(), v.end()); // sort the vector
    std::reverse(v.begin(), v.end()); // reverse the vector
    std::rotate(v.rbegin(), v.rbegin() + 2, v.rend()); // rotate array by 4 positions
    
    sort( v.begin(), v.end() ); // in order to remove duplicates we have to sort vector first
    v.erase( unique( v.begin(), v.end() ), v.end() );
    
    set<int> s( v.begin(), v.end() ); // remove duplicates to create a ordered set
    v.assign( s.begin(), s.end() ); // and assign it to vector
    
    vector<int> n(102); // fill vector with values from 0 to 101
    std::iota(n.begin(), n.end(), 0);
    
    std::iter_swap(v.begin() + 1, v.begin() + 2); // swap values from elementes at index 1 and 2
    std::swap(v[0],v[1]); // swap values from elementes at index 0 and 1
    
    shuffle_vector(&v); // shuffle a vector
    
    auto min_value = *std::min_element(v.begin(), v.end()); // capture min value
    std::cout << "minimal value: " << min_value << std::endl; // cout min value
    
    auto max_value = *std::max_element(v.begin(), v.end()); // capture max value
    std::cout << "max value: " << max_value << std::endl; // cout max value
    
    auto random = random_choice(v); // capture random_choice
    std::cout << "random value: " << random << std::endl; // cout random_choice
    
    display(v); // display a list
    
    v.clear(); // empty a vector
    
    return;
}

int main ()
{
    srand( static_cast<unsigned int>(time(nullptr))); // needed for init std::rand()
    vector<int> v = { 2, 2, 3, 3, 4, 4, 4, 15, 25, 45, 55, 17, 28 };
    init(v);
    
    return 0;
}
