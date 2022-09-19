#include "single_respon.h"
#include <fstream>
#include <iostream>

class PersistenceManager
{
    public:
       static void save(const Journal& j, const std::string& filename);
};
