#include "single_respon.h"
#include "PersistenceManager.h"


void PersistenceManager::save(const Journal& j, const std::string& filename)
{
    std::ofstream ofs(filename);
    for (auto& e : j.entries)
    ofs << e << std::endl;
};