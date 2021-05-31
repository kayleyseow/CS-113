// 2/19/2021
// Lab 2
// This program has three functions, the first one which calculates the union of two sets, the second of which calculates the intersection of two sets, and the third of which is a Boolean which returns if the sets are a subset of another.

#include <iostream>
#include <set>
#include <iterator>
using namespace std;

// Function Prototypes
void set_union(set<int, greater<int> > set1, set<int, greater<int> > set2);
void set_intersect(set<int, greater<int>> set1, set<int, greater<int>> set2);
bool subset(set<int, greater<int> > set1, set<int, greater<int> > set2);

// Void function that calculates the union of two sets
void set_union(set<int, greater<int> > set1, set<int, greater<int> > set2)
{
    set<int, greater<int> >::iterator iterator1;
    set<int, greater<int> >::iterator iterator2;
    set<int, greater<int> > done;
    set<int, greater<int> >::iterator iterator3;
    for (iterator1 = set1.begin(); iterator1 != set1.end(); iterator1++)
    {
        for (iterator2 = set2.begin(); iterator2 != set2.end(); iterator2++) // Nested for loops to traverse both sets
        {
            if (*iterator1 != *iterator2)
            {
                bool check = true;
                for (iterator3 = done.begin(); iterator3 != done.end(); iterator3++)
                {
                    if (*iterator2 == *iterator3)
                    {
                        check = false;
                    }
                }
                if (check) // Check the boolean, insert union into set1
                {
                    set1.insert(*iterator2);
                }
            }
        }
    }
    cout << "Union of the two sets: ";
    for (iterator1 = set1.begin(); iterator1 != set1.end(); iterator1++)
    {
        cout << *iterator1 << " ";
    }
    cout << endl;
}

// Void function that calculates the intersection of two sets
void set_intersect(set<int, greater<int>> set1, set<int, greater<int>> set2)
{
    set<int, greater<int> >::iterator iterator1;
    set<int, greater<int> >::iterator iterator2;
    set<int, greater<int> > done;
    set<int, greater<int> >::iterator iterator3;
    set<int, greater<int> > intersect;
    for (iterator1 = set1.begin(); iterator1 != set1.end(); iterator1++)
    {
        for (iterator2 = set2.begin(); iterator2 != set2.end(); iterator2++)
        {
            if (*iterator1 == *iterator2)
            {
                bool add = true;
                for (iterator3 = done.begin(); iterator3 != done.end(); iterator3++)
                {
                    if (*iterator2 == *iterator3)
                    {
                        add = false;
                    }
                }
                if (add) // Check the boolean, insert intersections into intersect
                {
                    intersect.insert(*iterator2);
                }
            }
        }
    }
    cout << "Intersection of the two sets: ";
    for (iterator1 = intersect.begin(); iterator1 != intersect.end(); iterator1++)
    {
        cout << *iterator1 << " ";
    }
    cout << endl;
}

// Boolean function that tells if the first set is a subset of the second or not
bool subset(set<int, greater<int> > set1, set<int, greater<int> > set2)
{
    set<int, greater<int> > smallerSet = set2;
    set<int, greater<int> > largerSet = set1;
    set<int, greater<int> >::iterator iterator1;
    set<int, greater<int> >::iterator iterator2;
    if (set1.size() < set2.size())
    {
        smallerSet = set1;
        largerSet = set2;
    }
    bool is = true;
    for (iterator1 = smallerSet.begin(); iterator1 != smallerSet.end(); iterator1++)
    {
        bool same = false;
        for (iterator2 = largerSet.begin(); iterator2 != largerSet.end(); iterator2++)
        {
            if (*iterator1 == *iterator2)
            {
                same = true;
                break;
            }
        }
        if (!same)
        {
            is = false;
            break;
        }
    }
    return is;
}

int main()
{
    // Test 1, Not a Subset
    cout << "Results for the First Test: \n";
    set<int, greater<int> > testSet1 = {58, 51, 42, 40, 33, 27, 92, 16, 34, 17};
    set<int, greater<int> > testSet2 = {28, 17, 42, 99, 72, 44};
    set_union(testSet1, testSet2);
    set_intersect(testSet1, testSet2);
    subset(testSet1, testSet2) ? cout << "The set is a subset of another.\n" : cout << "The set is not a subset of another.\n";

    cout << endl;

    // Test 2, Is a Subset
    cout << "Results for the Second Test: \n";
    set<int, greater<int> > testSet3 = {37, 64, 66, 70, 43, 32, 59, 85, 41, 5};
    set<int, greater<int> > testSet4 = {43, 59, 5, 37, 66};
    set_union(testSet3, testSet4);
    set_intersect(testSet3, testSet4);
    subset(testSet3, testSet4) ? cout << "The set is a subset of another.\n" : cout << "The set is not a subset of another.\n";
}
