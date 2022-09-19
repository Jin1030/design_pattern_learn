#ifndef __INCLUDED_SINGLE_RESPON__
#define __INCLUDED_SINGLE_RESPON__


#include <vector>
#include <string>

class Journal
{
    public:
        Journal(const std::string &title) : title(title) {};
        std::string title;
        std::vector<std::string> entries;
        void add_entry(const std::string& entry);
};


#endif