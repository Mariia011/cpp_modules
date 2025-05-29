#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm(const std::string& userdef_name, const std::string& userdef_target);
    RobotomyRequestForm(const RobotomyRequestForm&);
    RobotomyRequestForm& operator=(const RobotomyRequestForm&);
    ~RobotomyRequestForm();
public: 
    void execute (Bureaucrat const & executor) const;
};
