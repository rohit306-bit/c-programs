#include <iostream>
#include <string>
#include <map>

using namespace std;

//Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["rohit"] = 98;
    marksMap["jack"] = 95;
    marksMap["sujit"] = 97;
    marksMap["anukaran"] = 90;

    marksMap.insert({{"kozume", 169}, {"kuroo", 187}});

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    return 0;
}