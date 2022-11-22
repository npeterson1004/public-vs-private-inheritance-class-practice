//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** Implementation file for the class SortedListAsA.
 @file SortedListAsA.cpp */

#include "FrontListasA.h"  // Header file
#include <cassert>
#include <cmath>
  
template<class ItemType>
FrontListasA<ItemType>::FrontListasA()
{
}  // end default constructor

template<class ItemType>
FrontListasA<ItemType>::FrontListasA(const FrontListasA<ItemType>& sList)
		:LinkedList<ItemType>(sList)
{
	
}  // end copy constructor

template<class ItemType>
FrontListasA<ItemType>::~FrontListasA()
{
    clear();
}  // end destructor

template<class ItemType>
void FrontListasA<ItemType>::insertSorted(const ItemType& newEntry)
{
   int newPosition = fabs(getPosition(newEntry));
   this->insert(newPosition, newEntry);
}  // end insertSorted

template<class ItemType>
bool FrontListasA<ItemType>::removeSorted(const ItemType& anEntry)
{
   bool ableToDelete = false;
   // if (!this->isEmpty())
   if (!LinkedList<ItemType>::isEmpty())
   {
      int position = getPosition(anEntry);
             
      ableToDelete = position > 0;
      if (ableToDelete)
      {
         ableToDelete = remove(position);
//       ableToDelete = this->remove(position);
      }  // end if
   }  // end if

   return ableToDelete;
}  // end removeSorted

template<class ItemType>
int FrontListasA<ItemType>::getPosition(const ItemType& anEntry) const
{
   int position = 1;
   int length = LinkedList<ItemType>::getLength();
   // int length = this->getLength();
   
   // while ( (position <= length) && (anEntry > this->getEntry(position)) )
   while ( (position <= length) && 
          (anEntry > LinkedList<ItemType>::getEntry(position)) )
   {
      position++;
   }  // end while
   
   // if ( (position > length) || (anEntry != this->getEntry(position)) )
   if ( (position > length) || 
       (anEntry != LinkedList<ItemType>::getEntry(position)) )
   {
      position = -position;
   }  // end if
   
   return position;
}  // end getPosition

//=====================
// List operations:
template<class ItemType>
void FrontListasA<ItemType>::clear()
{
    LinkedList<ItemType>::clear();
}  // end clear


template<class ItemType>
bool FrontListasA<ItemType>::isEmpty() const
{
    return LinkedList<ItemType>::isEmpty();
}  // end isEmpty

template<class ItemType>
int FrontListasA<ItemType>::getLength() const
{
    return LinkedList<ItemType>::getLength();
}  // end getLength

template<class ItemType>
bool FrontListasA<ItemType>::remove(int position)
{
    return LinkedList<ItemType>::remove(position);
}

template<class ItemType>
ItemType FrontListasA<ItemType>::getEntry(int position) const
{
    return LinkedList<ItemType>::getEntry(position);
}
