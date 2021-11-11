#include "data.hpp"

Data::Data() : name{""}, addIndex{}, deleteIndex{} {}

std::string Data::getName()const
{
    return name;
}

int Data::getAddIndex()const
{
    return addIndex;
}

int Data::getDeleteIndex()const
{
    return deleteIndex;
}

std::string &Data::setName()
{
    return name;
}

int &Data::setAddIndex()
{
    return addIndex;
}

int &Data::setDeleteIndex()
{
    return deleteIndex;
}




