
#include <iostream>
#include <string>
#include "FrontList.h"
#include "FrontListisA.h"
#include "FrontListasA.h" // ADT sorted list operations

using namespace std;

void displayList(SortedListInterface<string>* listPtr)
{
	cout << "The sorted list contains " << endl;
   for (int pos = 1; pos <= listPtr->getLength(); pos++)
   {
      cout << listPtr->getEntry(pos) << " ";
   } // end for
	cout << endl << endl;
}  // end displayList

void displayListIsA(FrontListisA<string>* listPtrIsA)
{
	cout << "The sorted list contains " << endl;
   for (int pos = 1; pos <= listPtrIsA->getLength(); pos++)
   {
      cout << listPtrIsA->getEntry(pos) << " ";
   } // end for
	cout << endl << endl;
}  // end displayList


void copyContructorTest()
{
   
   FrontList<string> list;
   string entries[] = {"entry0","entry1", "entry2", "entry3", "entry4", "entry5"};



   cout << "Entries to add to the list: ";
   for(int i = 0; i < 6; i++)
   {
      cout << entries[i] << " ";
   }
      cout << endl;

   for (int i = 0; i < 6; i++)
   {
	   cout << "Adding " << entries[i] << endl;
      list.insertSorted(entries[i]);
	}
   cout << endl;
   displayList(&list);
   FrontList<string> copyOfList(list);
   cout << "Copy of list: " <<endl;
   displayList(&copyOfList);

   cout << "The Copied List:" <<endl;;;
   displayList(&list);

}

void Tester(SortedListInterface<string>* listPtr)
{
   string Nathan = "Nathan";
   string Lucy = "Lucy";
   string Pepper = "Pepper";
   string Smokey = "Smokey";
   string Coa = "Coa"; 
   string Xyla = "Xyla";
  
   cout << "Test isEmpty with an empty list:" << endl;
   if(listPtr->isEmpty())
      cout << "OKAY" << endl;
   else
      cout << "isEmpty() error" << endl;

   listPtr->insertSorted(Nathan);
   listPtr->insertSorted(Lucy);
   listPtr->insertSorted(Pepper);
   listPtr->insertSorted(Smokey);
   listPtr->insertSorted(Coa);
   listPtr->insertSorted(Xyla);

   //display the list
   cout << "List should contain\nNathan, Lucy, Peppr, Smokey, Coa, Xyla" <<endl;
   cout << "List actually contains: " <<endl;
   displayList(listPtr);
   cout << endl;


   //test position
   cout<< "\nTest getPosition:\n" <<endl;

   cout << "Nathan is at position " << listPtr->getPosition(Nathan) << endl;
   cout << "Lucy is at position " << listPtr->getPosition(Lucy) << endl;
   cout << "Pepper is at position " << listPtr->getPosition(Pepper) << endl;
   cout << "Smokey is at position "  << listPtr->getPosition(Smokey) << endl;
   cout << "Coa is at position "   << listPtr->getPosition(Coa) << endl;
   cout << "Xyla is at position "   << listPtr->getPosition(Xyla) << endl;

   // These names are not in the list
   string ryan = "Ryan";
   cout << "Missy belongs at position " << listPtr->getPosition(ryan) << endl;
   string zach = "Zach";
   cout << "Zeke belongs at position " << listPtr->getPosition(zach) << endl;
   string lizzi = "Lizzi";
   cout << "Aaron belongs at position " << listPtr->getPosition(lizzi) << endl;


   // test getLength and getEntry
   cout << "\nTest getLength and getEntry:\n" << endl;
   
   cout << "\nList has " << listPtr->getLength() << " entries, as follows:\n" << endl;
   for (int i = 1; i <= listPtr->getLength(); i++)
      cout << i << ": " << listPtr->getEntry(i) << endl;
   
   
   // test remove
   cout << "\nTest remove:\n" << endl;
   
   // remove first entry
   cout << "\nRemoving first item (Nathan): " << listPtr->removeSorted(Nathan) << "; should be 1 (true)" << endl;
   cout << "\nAfter removing Nathan, list contains " << listPtr->getLength()
   << " items, as follows:" << endl;
   displayList(listPtr);
   
   // remove interior
   cout << "\nRemoving interior item (Lucy: " << listPtr->removeSorted(Lucy) << "; should be 1 (true)" << endl;
   cout << "\nAfter removing Lucy, list contains " << listPtr->getLength()
   << " items, as follows:" << endl;
   displayList(listPtr);
   
   // remove last
   cout << &"\nRemoving last item (Xyla): " [ listPtr->removeSorted(Xyla)] << "; should be 1 (true)" << endl;
   cout << "\nAfter removing last item, list contains " << listPtr->getLength()
   << " items, as follows:" << endl;
   displayList(listPtr);
   
   cout << "\nRemoving a missing item (Nathan): " << listPtr->removeSorted(Nathan) << "; should be 0 (false)" << endl;
   cout << "\nRemoving a missing item (Lucy): " << listPtr->removeSorted(Lucy) << "; should be 0 (false)" << endl;
   cout << "\nRemoving a missing item (Xyla): " << listPtr->removeSorted(Xyla) << "; should be 0 (false)" << endl;
   
   cout << "\nThe list contains " << listPtr->getLength()
   << " items, as follows:" << endl;
   displayList(listPtr);
   
   // test clear()
   cout << "\nTest clear():\n" << endl;
   listPtr->clear();
   
      if (listPtr->isEmpty())
         cout << "\nThe list is empty after invoking clear()." << endl;
      else
         cout << "\nclear() error" << endl;


   cout << endl;
   cout << "DONE!" << endl;
}//Tester



void TesterIsA(FrontListisA <string>* listPtrIsA)
{
   string Nathan = "Nathan";
   string Lucy = "Lucy";
   string Pepper = "Pepper";
   string Smokey = "Smokey";
   string Coa = "Coa"; 
   string Xyla = "Xyla";
  
   cout << "Test isEmpty with an empty list:" << endl;
   if(listPtrIsA->isEmpty())
      cout << "OKAY" << endl;
   else
      cout << "isEmpty() error" << endl;

   listPtrIsA->insertSorted(Nathan);
   listPtrIsA->insertSorted(Lucy);
   listPtrIsA->insertSorted(Pepper);
   listPtrIsA->insertSorted(Smokey);
   listPtrIsA->insertSorted(Coa);
   listPtrIsA->insertSorted(Xyla);

   //display the list
   cout << "List should contain\nNathan, Lucy, Peppr, Smokey, Coa, Xyla" <<endl;
   cout << "List actually contains: " <<endl;
   displayListIsA(listPtrIsA);
   cout << endl;


   //test position
   cout<< "\nTest getPosition:\n" <<endl;

   cout << "Nathan is at position " << listPtrIsA->getPosition(Nathan) << endl;
   cout << "Lucy is at position " << listPtrIsA->getPosition(Lucy) << endl;
   cout << "Pepper is at position " << listPtrIsA->getPosition(Pepper) << endl;
   cout << "Smokey is at position "  << listPtrIsA->getPosition(Smokey) << endl;
   cout << "Coa is at position "   << listPtrIsA->getPosition(Coa) << endl;
   cout << "Xyla is at position "   << listPtrIsA->getPosition(Xyla) << endl;

   // These names are not in the list
   string ryan = "Ryan";
   cout << "Missy belongs at position " << listPtrIsA->getPosition(ryan) << endl;
   string zach = "Zach";
   cout << "Zeke belongs at position " << listPtrIsA->getPosition(zach) << endl;
   string lizzi = "Lizzi";
   cout << "Aaron belongs at position " << listPtrIsA->getPosition(lizzi) << endl;


   // test getLength and getEntry
   cout << "\nTest getLength and getEntry:\n" << endl;
   
   cout << "\nList has " << listPtrIsA->getLength() << " entries, as follows:\n" << endl;
   for (int i = 1; i <= listPtrIsA->getLength(); i++)
      cout << i << ": " << listPtrIsA->getEntry(i) << endl;
   
   
   // test remove
   cout << "\nTest remove:\n" << endl;
   
   // remove first entry
   cout << "\nRemoving first item (Nathan): " << listPtrIsA->removeSorted(Nathan) << "; should be 1 (true)" << endl;
   cout << "\nAfter removing Nathan, list contains " << listPtrIsA->getLength()
   << " items, as follows:" << endl;
   displayListIsA(listPtrIsA);
   
   // remove interior
   cout << "\nRemoving interior item (Lucy: " << listPtrIsA->removeSorted(Lucy) << "; should be 1 (true)" << endl;
   cout << "\nAfter removing Lucy, list contains " << listPtrIsA->getLength()
   << " items, as follows:" << endl;
   displayListIsA(listPtrIsA);
   
   // remove last
   cout << &"\nRemoving last item (Xyla): " [ listPtrIsA->removeSorted(Xyla)] << "; should be 1 (true)" << endl;
   cout << "\nAfter removing last item, list contains " << listPtrIsA->getLength()
   << " items, as follows:" << endl;
   displayListIsA(listPtrIsA);
   
   cout << "\nRemoving a missing item (Nathan): " << listPtrIsA->removeSorted(Nathan) << "; should be 0 (false)" << endl;
   cout << "\nRemoving a missing item (Lucy): " << listPtrIsA->removeSorted(Lucy) << "; should be 0 (false)" << endl;
   cout << "\nRemoving a missing item (Xyla): " << listPtrIsA->removeSorted(Xyla) << "; should be 0 (false)" << endl;
   
   cout << "\nThe list contains " << listPtrIsA->getLength()
   << " items, as follows:" << endl;
   displayListIsA(listPtrIsA);
   
   // test clear()
   cout << "\nTest clear():\n" << endl;
   listPtrIsA->clear();
   
      if (listPtrIsA->isEmpty())
         cout << "\nThe list is empty after invoking clear()." << endl;
      else
         cout << "\nclear() error" << endl;


   cout << endl;
   cout << "IS-A DONE!" << endl;
}//Tester

void listOpsTester(SortedListInterface<string>* listPtr)
{
   string Nathan = "Nathan";
   string Lucy = "Lucy";
   string Pepper = "Pepper";
   string Smokey = "Smokey";
   string Coa = "Coa"; 
   string Xyla = "Xyla";

   listPtr->insertSorted(Nathan);
   listPtr->insertSorted(Lucy);
   listPtr->insertSorted(Pepper);
   listPtr->insertSorted(Smokey);
   listPtr->insertSorted(Coa);
   listPtr->insertSorted(Xyla);
   
   displayList(listPtr);
   
   cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 0 (false)" << endl;
   cout << "getLength returns : " << listPtr->getLength() << "; should be 6" << endl;
   
   cout << "remove(2): returns " << listPtr->remove(2) << "; should be 1 (true)" << endl;
   cout << "remove(1): returns " << listPtr->remove(1) << "; should be 1 (true)" << endl;
   cout << "remove(6): returns " << listPtr->remove(6) << "; should be 0 (false)" << endl;
   displayList(listPtr);
   cout << "getLength returns : " << listPtr->getLength() << "; should be 4" << endl;
   cout << "clear: " << endl;
   listPtr->clear();
   cout << "isEmpty: returns " << listPtr->isEmpty() << "; should be 1 (true)" << endl;
   
  
  
} // end listOpsTester
   
void listOpsTesterIsA(FrontListisA<string>* listPtrIsA)
{
  string Nathan = "Nathan";
   string Lucy = "Lucy";
   string Pepper = "Pepper";
   string Smokey = "Smokey";
   string Coa = "Coa"; 
   string Xyla = "Xyla";
   
   listPtrIsA->insertSorted(Nathan);
   listPtrIsA->insertSorted(Lucy);
   listPtrIsA->insertSorted(Pepper);
   listPtrIsA->insertSorted(Smokey);
   listPtrIsA->insertSorted(Coa);
   listPtrIsA->insertSorted(Xyla);
   
   displayListIsA(listPtrIsA);
   
   cout << "isEmpty: returns " << listPtrIsA->isEmpty() << "; should be 0 (false)" << endl;
   cout << "getLength returns : " << listPtrIsA->getLength() << "; should be 6" << endl;
   
   cout << "remove(2): returns " << listPtrIsA->remove(2) << "; should be 1 (true)" << endl;
   cout << "remove(1): returns " << listPtrIsA->remove(1) << "; should be 1 (true)" << endl;
   cout << "remove(6): returns " << listPtrIsA->remove(6) << "; should be 0 (false)" << endl;
   displayListIsA(listPtrIsA);
   cout << "getLength returns : " << listPtrIsA->getLength() << "; should be 4" << endl;
   cout << "clear: " << endl;
   listPtrIsA->clear();
   cout << "isEmpty: returns " << listPtrIsA->isEmpty() << "; should be 1 (true)" << endl;
   
  
  
} // end listOpsTesterIs

int main()
{
   cout << "copy onstructor Test" << endl;
   cout << endl;
   copyContructorTest();
   cout << "-------------------------------"<< endl;

   SortedListInterface<string>* listPtrHasA = new FrontList<string>();
   FrontListisA<string>* listPtrIsA = new FrontListisA<string>();
   SortedListInterface<string>* listPtrasA = new FrontListasA<string>();
   cout << "Tester" << endl;
   cout << endl;
   cout << "Testing HAS-A" << endl <<endl;
   Tester(listPtrHasA);
   cout << endl;
   cout << "ListOpsTester" << endl << endl;
   listOpsTester(listPtrHasA);
   cout << "--------------------------------" << endl;
   cout << endl <<endl;

   cout << "Testing IS-A" << endl <<endl;
   TesterIsA(listPtrIsA);
   cout << endl;

   cout << "ListOpsTester" << endl << endl;
   listOpsTesterIsA(listPtrIsA);
   cout << "--------------------------------" << endl;
   cout << endl <<endl;

   cout << "Testing AS-A" << endl <<endl;
   Tester(listPtrasA);
   cout << endl;

   cout << "ListOpsTester" << endl << endl;
   listOpsTester(listPtrasA);
   cout << "--------------------------------" << endl;
   cout << endl <<endl;


   return 0;
}  // end main
