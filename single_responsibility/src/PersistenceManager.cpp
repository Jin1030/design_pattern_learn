#include "single_respon.h"
#include "PersistenceManager.h"


void PersistenceManager::save(const Journal& j, const std::string& filename)
{
    std::ofstream ofs(filename);
    for (auto& e : j.entries)
    ofs << e << std::endl;
};


void PersistenceManager::read_text(const std::string& filename)
{

    std::string temp;
    std::ifstream rd;
    rd.open(filename);
    if (!rd.is_open())
    {
        std::cout << "Error opening file" << std::endl; 
        exit(1);
    }
    else
    {
        while(getline(rd,temp))
        {
            std::cout<<temp<<std::endl;
        }
    }
    rd.close();
}