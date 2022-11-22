

#include "FrontList.h"  // Header file
#include "LinkedList.h"
#include <cassert>
#include <cmath>
  
template<class ItemType>
FrontList<ItemType>::FrontList()
{
   listPtr = new LinkedList<ItemType>();
}  // end default constructor

template<class ItemType>
FrontList<ItemType>::FrontList(const FrontList<ItemType>& sList) 
{
	// First, create our own list
	listPtr = new LinkedList<ItemType>();
	
	// Then add items to it using public methods
	for(int position = 1; position <= sList.getLength(); position++)
	{
		listPtr->insert(position, sList.getEntry(position));
	}  // end for	
}  // end copy constructor

template<class ItemType>
FrontList<ItemType>::~FrontList()
{
   clear();
}  // end destructor

template<class ItemType>
void FrontList<ItemType>::insertSorted(const ItemType& newEntry)
{
   int newPosition = fabs(getPosition(newEntry));
   listPtr->insert(newPosition, newEntry);
}  // end insertSorted

template<class ItemType>
bool FrontList<ItemType>::removeSorted(const ItemType& anEntry)
{
   bool ableToRemove = false;
   if (!isEmpty())
   {
      int position = getPosition(anEntry);
             
      ableToRemove = position > 0;
      if (ableToRemove)
      {
         ableToRemove = listPtr->remove(position);
      }  // end if
   }  // end if

   return ableToRemove;
}  // end removeSorted

template<class ItemType>
int FrontList<ItemType>::getPosition(const ItemType& anEntry) const
{
   int position = 1;
   int length = listPtr->getLength();
   
   while ( (position <= length) && (anEntry > listPtr->getEntry(position)) )
   {
      position++;
   } // end while
   
   if ( (position > length) || (anEntry != listPtr->getEntry(position)) )
      position = -position;
   
   return position;
}  // end getPosition

//=====================
// List operations:

template<class ItemType>
bool FrontList<ItemType>::remove(int position)
{
   return listPtr->remove(position);
}  // end remove

template<class ItemType>
void FrontList<ItemType>::clear()
{
   listPtr->clear();
}  // end clear

template<class ItemType>
ItemType FrontList<ItemType>::getEntry(int position) const 
{
   return listPtr->getEntry(position);
}  // end getEntry

template<class ItemType>
bool FrontList<ItemType>::isEmpty() const
{
   return listPtr->isEmpty();
}  // end isEmpty

template<class ItemType>
int FrontList<ItemType>::getLength() const
{
   return listPtr->getLength();
}  // end getLength

//  End of implementation file.
