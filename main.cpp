/*******************************************************************************
 * AUTHOR        : Dillon Welsh, Yang Zhang
 * LAB 5         : VECTORS
 * CLASS         : CS3A
 * SECTION       : 71206
 * DUE DATE      : 09/20/2020
 ******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

/*******************************************************************************
 * VECTORS
 *______________________________________________________________________________
 * Write a program that uses vectors to generate the sample output.
 *______________________________________________________________________________
 * INPUT:
 *  N/A
 *
 * OUTPUT:
 *  vector<int> vec1: default constructor
 *  vector<int> vec2: one parameter constructor
 *  vector<int> vec3: two parameter constructor
 ******************************************************************************/

int main()
{
    vector<int> vec1 = vector<int>();     // CALC - default constructor
    vector<int> vec2 = vector<int>(5);    // CALC - one parameter constructor
    vector<int> vec3 = vector<int>(5,9);  // CALC - two parameter constructor

    // OUTPUT - diplay size and capacity for default constructor
    cout << "Testing default constructor\n";
    cout << "size: " << vec1.size() << " capacity: " << vec1.capacity() << endl;

    // PROCESSING - test if default constructor is empty
    cout << "Testing empty member function" << endl;
    if(vec1.empty()) cout << "v is empty" << endl;

    // OUTPUT - display size and capacity for one parameter constructor
    cout << "\nTesting One parameter constructor" << endl;
    cout << "size: " << vec2.size() << " capacity: " << vec2.capacity() << endl;

    // PROCESSING - test if one paramater constructor is empty
    cout << "Testing empty member function" << endl;
    if(!vec2.empty()) cout << "v is not empty" << endl;

    // PROCESSING - test at fuction for one parameter constructor
    cout << "Testing at function by displaying v2" << endl;
    for(int i = 0; i < vec2.size(); i++) cout << vec2.at(i) << " ";

    // OUTPUT - display size and capacity for two parameter constructor
    cout << "\n\nTesting Two parameter constructor" << endl;
    cout << "size: " << vec3.size() << " capacity: " << vec3.capacity() << endl;

    // PROCESSING - test if two paramater constructor is empty
    cout << "Testing empty member function" << endl;
    if(!vec3.empty()) cout << "v is not empty" << endl;

    // PROCESSING - test at fuction for two parameter constructor
    cout << "Testing at function by displaying v3" << endl;
    for(int i = 0; i < vec3.size(); i++) cout << vec3.at(i) << " ";

    // PROCESSING - test push_back on default constructor
    cout << "\n\nTesting push back function" << endl;
    for(int i = 0; i < 10; i++)
    {
        vec1.push_back(i);
        cout << "size: " << vec1.size() << " capacity: "
             << vec1.capacity() << endl;
    }

    // PROCESSING - test pop_back on default constructor
    cout << "\nTesting pop back function" << endl;
    vec1.pop_back();
    cout << "size: " << vec1.size() << " capacity: " << vec1.capacity() << endl;
    vec1.pop_back();
    cout << "size: " << vec1.size() << " capacity: "
         << vec1.capacity() << endl << endl;

    // PROCESSING - test front and back on default constructor
    cout << "Testing front and back functions" << endl;
    cout << "front: " << vec1.front() << " back: " << vec1.back() << endl;

    // PROCESSING - test insert on default constructor
    cout << "\nTesting insert() function by adding at position 5" << endl;
    vector<int>::iterator it;
    it = vec1.begin();
    vec1.insert(vec1.begin() + 5,100);
    for(int i = 0; i < vec1.size(); i++) cout << vec1.at(i) << " ";

    // PROCESSING - test erase on default constructor
    cout << "\n\nTesting erase() function by erasing position 6" << endl;
    vec1.erase(vec1.begin() + 6);
    for(int i = 0; i < vec1.size(); i++) cout << vec1.at(i) << " ";
    cout << endl;

    // PROCESSING - test resize (one parameter) on default constructor
    cout << "\nTesting resize() function (one parameter)" << endl;
    vec1.resize(20);
    cout << "size: " << vec1.size() << " capacity: "
         << vec1.capacity() << endl;
    for(int i = 0; i < vec1.size(); i++) cout << vec1.at(i) << " ";
    vec1.resize(10);
    cout << "\nsize: " << vec1.size() << " capacity: "
         << vec1.capacity() << endl;
    for(int i = 0; i < vec1.size(); i++) cout << vec1.at(i) << " ";
    cout << endl;

    // PROCESSING - test resize (two parameters) on default constructor
    cout << "\nTesting resize() function (two parameter)";
    vec1.resize(20,101);
    cout << "\nsize: " << vec1.size() << " capacity: "
         << vec1.capacity() << endl;
    for(int i = 0; i < vec1.size(); i++)
    cout << vec1.at(i) << " ";
    vec1.resize(10);
    cout << "\nsize: " << vec1.size() << " capacity: "
         << vec1.capacity() << endl;
    for(int i = 0; i < vec1.size(); i++) cout << vec1.at(i) << " ";

    // PROCESSING - test assign on default constructor
    cout << "\n\nTesting assign() function" << endl;
    vec1.assign(5,102);
    cout << "size: " << vec1.size() << " capacity: " << vec1.capacity() << endl;
    for(int i = 0; i < vec1.size(); i++) cout << vec1.at(i) << " ";
    cout << endl;
    // PROCESSING - test clear on default constructor
    cout << "\nTesting clear() function" << endl;
    vec1.clear();
    cout << "size: " << vec1.size() << " capacity: "
         << vec1.capacity() << endl << endl;

    return 0;
}
