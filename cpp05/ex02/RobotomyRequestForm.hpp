#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm&);
    RobotomyRequestForm(const std::string &userdef_name, const int execute, const int sign);
    RobotomyRequestForm& operator=(const RobotomyRequestForm&);
    ~RobotomyRequestForm();
public: 
    void execute (Bureaucrat const & executor) const;
};