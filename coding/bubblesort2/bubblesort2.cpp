/*
 * bubblesort2.cpp
 *
 *  Created on: Jun 26, 2019
 *      Author: gurvinder
 */
#include <iostream>
#include <list>
#include <iterator>
using namespace std;
//function for printing the elements in a list
void printlist(list <int> lst)
{
list <int> :: iterator it;
for(it = lst.begin(); it != lst.end(); ++it)
cout << '\t' << *it;
cout << '\n';
}
int main()
{
list <int> firstlist, secondlist;
for (int i = 0; i < 10; ++i)
{
firstlist.push_back(i * 2);
secondlist.push_front(i * 3);
}
cout << "\nList 1 (firstlist) is : ";
printlist(firstlist);
cout << "\nList 2 (secondlist) is : ";
printlist(secondlist);
cout << "\nfirstlist.front() : " << firstlist.front();
cout << "\nfirstlist.back() : " << firstlist.back();
cout << "\nfirstlist.pop_front() : ";
firstlist.pop_front();
printlist(firstlist);
cout << "\nsecondlist.pop_back() : ";
secondlist.pop_back();
printlist(secondlist);
cout << "\nfirstlist.reverse() : ";
firstlist.reverse();
printlist(firstlist);
cout << "\nsecondlist.sort(): ";

secondlist.sort();
printlist(secondlist);
return 0;

}



