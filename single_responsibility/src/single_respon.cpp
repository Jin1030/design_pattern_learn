#include <vector>
#include "single_respon.h"


void Journal::add_entry(const std::string& entry)
{
    static int count = 1;
    entries.push_back(std::to_string(count++) + ": " + entry);
}
