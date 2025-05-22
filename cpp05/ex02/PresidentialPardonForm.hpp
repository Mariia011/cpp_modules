#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
    // PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm&);
    PresidentialPardonForm(const std::string &userdef_name, const int execute, const int sign);
    PresidentialPardonForm& operator=(const PresidentialPardonForm&);
    ~PresidentialPardonForm();
public: 


};
