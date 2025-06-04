#include "Data.hpp"

Data::Data(): id(0){}

Data::Data(int user_id): id(user_id){}

Data Data::operator=(const Data &){return *this;}

Data::Data(const Data &other){*this = other;}

Data::~Data(){}
