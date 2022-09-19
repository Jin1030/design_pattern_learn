
#include <iostream>
#include "single_respon.h"
#include "PersistenceManager.h"

int main ()
{
    Journal journal("Dear Diary");
    std::cout<<"helloworld1"<<std::endl;
    journal.add_entry("I ate a apple");
    journal.add_entry("i am happy today");

    PersistenceManager pm;
    pm.save(journal, "diary.txt");
}