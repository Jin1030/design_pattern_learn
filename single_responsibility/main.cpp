
#include <iostream>
#include "single_respon.h"
#include "PersistenceManager.h"

int main ()
{
    Journal journal("Dear Diary");
    journal.add_entry("I ate a apple");
    journal.add_entry("i am happy today");

    PersistenceManager::save(journal, "diary.txt");
    PersistenceManager::read_text("diary.txt");

}