#include "FrontListisA.h"  // Header file
#include <cassert>
#include <cmath>
 
template<class ItemType>
FrontListisA<ItemType>::FrontListisA()
{
}  // end default constructor

template<class ItemType>
FrontListisA<ItemType>::FrontListisA(const FrontListisA<ItemType>& aList)
	:LinkedList<ItemType>(aList)
{
}  // end copy constructor

template<class ItemType>
FrontListisA<ItemType>::~FrontListisA()
{
}  // end destructor

template<class ItemType>
void FrontListisA<ItemType>::insertSorted(const ItemType& newEntry)
{
   int newPosition = fabs(getPosition(newEntry));
   
   // We need to call the LinkedList version here since the
	// SortedListIsA version does nothing but return false
   LinkedList<ItemType>::insert(newPosition, newEntry);
// this->insert(newPosition, newEntry); // WRONG as it calls the overriding version
}  // end insertSorted

template<class ItemType>
bool FrontListisA<ItemType>::removeSorted(const ItemType& anEntry)
{
   bool ableToRemove = false;
   if (!LinkedList<ItemType>::isEmpty())
   {
      int position = getPosition(anEntry);
             
      ableToRemove = position > 0;
      if (ableToRemove)
      {
         ableToRemove = LinkedList<ItemType>::remove(position);
      }  // end if
   }  // end if

   return ableToRemove;
}  // end removeSorted

template<class ItemType>
int FrontListisA<ItemType>::getPosition(const ItemType& anEntry) const
{
   int position = 1;
   int length = LinkedList<ItemType>::getLength();
   
   while ( (position <= length) && 
           (anEntry > LinkedList<ItemType>::getEntry(position)) )
   {
      position++;
   }  // end while
   
   if ( (position > length) || 
        (anEntry != LinkedList<ItemType>::getEntry(position)) )
   {
      position = -position;
   }  // end if
   
   return position;
}  // end getPosition

template<class ItemType>
bool FrontListisA<ItemType>::insert(int newPosition, const ItemType& newEntry) 
{ 
	return false;
} // end insert

template<class ItemType>
ItemType FrontListisA<ItemType>::replace(int position, const ItemType& newEntry)
{ 
	std::cout << "This is an illegal action!"; 
   return 0;
} // end setEntry

//  End of implementation file.
