#ifndef _SORTED_LIST_HAS_A
#define _SORTED_LIST_HAS_A

#include "SortedListInterface.h"
#include "ListInterface.h"
#include "Node.h"


template<class ItemType>
class FrontList : public SortedListInterface<ItemType>
{
private:
   ListInterface<ItemType>* listPtr; 
	
public:
   FrontList();
   FrontList(const FrontList<ItemType>& sList);
   virtual ~FrontList();
   
   void insertSorted(const ItemType& newEntry);
   bool removeSorted(const ItemType& anEntry);
   int getPosition(const ItemType& newEntry) const;
   
   // The following methods have the same specifications
   // as given in ListInterface:

   bool isEmpty() const;
   int getLength() const;
   bool remove(int position);
   void clear();
   ItemType getEntry(int position) const ;
}; // end SortedListHasA


#include "FrontList.cpp"


#endif