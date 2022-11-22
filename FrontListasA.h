#ifndef _SORTED_LIST_AS_A
#define _SORTED_LIST_AS_A

#include "SortedListInterface.h"
#include "LinkedList.h"
#include "Node.h"


template<class ItemType>
class FrontListasA : public SortedListInterface<ItemType>, private LinkedList<ItemType>
{
public:
   FrontListasA();
   FrontListasA(const FrontListasA<ItemType>& sList);
   virtual ~FrontListasA();

   void insertSorted(const ItemType& newEntry);
   bool removeSorted(const ItemType& anEntry);
   int getPosition(const ItemType& newEntry) const;
   
   // The following methods are inherited and have the same 
   // specifications as given in ListInterface:
   bool isEmpty() const;
   int getLength() const;
   bool remove(int position);
   void clear();
   ItemType getEntry(int position) const;   
}; // end SortedListAsA

#include "FrontListasA.cpp"
#endif 