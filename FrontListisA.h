#ifndef _SORTED_LIST_IS_A
#define _SORTED_LIST_IS_A

#include "LinkedList.h"
#include "Node.h"


template<class ItemType>
class FrontListisA : public LinkedList<ItemType>
{
public:
   FrontListisA();
   FrontListisA(const FrontListisA<ItemType>& sList);
   virtual ~FrontListisA();

   void insertSorted(const ItemType& newEntry);
   bool removeSorted(const ItemType& anEntry);
   int getPosition(const ItemType& anEntry) const;
   
   // The inherited methods remove, clear, getEntry, isEmpty, and
   // getLength have the same specifications as given in ListInterface.
/*
   bool remove(int position);
   void clear();
   ItemType getEntry(int position) const throw(PrecondViolatedExcep);
   bool isEmpty() const;
   int getLength() const;
*/
   // The following methods must be overridden to disable their
   // effect on a sorted list:
   bool insert(int newPosition, const ItemType& newEntry);
   ItemType replace(int position, const ItemType& newEntry);
}; // end SortedListIsA

#include "FrontListisA.cpp"
#endif 
