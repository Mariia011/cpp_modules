#pragma once 

#include "AForm.hpp"

#define ascii_tree   "\
        >X<                 \n\
         A                  \n\
        d$b                 \n\
      .d\\$$b.               \n\
    .d$i$$\\$$b.             \n\
       d$$@b                \n\
      d\\$$$ib               \n\
    .d$$$\\$$$b              \n\
  .d$$@$$$$\\$$ib.           \n\
      d$$i$$b               \n\
     d\\$$$$@$b              \n\
  .d$@$$\\$$$$$@b.           \n\
.d$$$$i$$$\\$$$$$$b.         \n\
        ###                 \n\
        ###                 \n\
        ###                 \n\
"

class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm(const std::string&, const std::string&);
    ShrubberyCreationForm(const ShrubberyCreationForm&);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
    ~ShrubberyCreationForm();
public: 
    void execute (Bureaucrat const & executor) const;
};

