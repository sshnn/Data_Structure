#ifndef DATA_HPP
#define DATA_HPP
#include "node.hpp"

class Data {
public:
    Data();
    ~Data() = default;
    std::string getName()const;
    int getAddIndex()const;
    int getDeleteIndex()const;
    std::string &setName();
    int &setAddIndex();
    int &setDeleteIndex();
private:
    std::string name;
    int addIndex;
    int deleteIndex;
};

#endif
