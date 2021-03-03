#include<iostream>
#include<set>
#include<string>

using namespace std;


//  Create a set that can hold integers
set <int> set_of_ints;


//  Display the elements of the set list_set
void list_elements (set <int> list_set)
{
   //  Create an iterator for the set
   set <int> :: iterator iter;

   //  Display the elements of the set
   iter = list_set.begin();
   cout << *iter;
   iter++;
   while (iter != list_set.end())
   {
       cout << ", " << *iter;
       iter++;
   }
   cout << endl;

}



int main()
{

   //  Create an iterator for the set
   set <int> :: iterator iter;


   //  Try to insert four elements into the set
   //  Note: One element is a duplicate and won't be inserted
   set_of_ints.insert (1);
   set_of_ints.insert (2);
   set_of_ints.insert (6);
   set_of_ints.insert (2);


   //  Show the size of the set to verify that only three elements
   //  were actually inserted into the set
   cout << "There are " << set_of_ints.size () << " elements in the set." <<
        endl << endl;


   //  Display the elements of the set
   //  Also verifying that only three elements were inserted into the set
   cout << "The elements in the set are:" << endl;
   list_elements (set_of_ints);
   cout << endl;


   //  Search for an element in the set using find()
   int x;
   cout << "The program will check if a number is in the set." << endl <<
           "Type the number do you want to search for: ";
   cin >> x;
   iter = set_of_ints.find (x);
   if (iter != set_of_ints.end())
      cout << x << " is in the set" << endl;
   else
      cout << x << " is not in the set" << endl;
   cout << endl;


   //  Remove an element from the set using erase()
   cout << "The program will remove a number from the set." << endl <<
           "Type the number do you want to remove: ";
   cin >> x;
   iter = set_of_ints.find (x);
   if (iter != set_of_ints.end())
   {
      set_of_ints.erase (iter);
      cout << "Element removed." << endl;
   }
   else
      cout << x << " was not found in the set" << endl;
   cout << endl;


   // Display the elements of the set again
   cout << "The elements in the set are:" << endl;
   list_elements (set_of_ints);
   cout << endl;

}
