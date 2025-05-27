#pragma once 

#include "AForm.hpp"


#define starry_night "  |              .                                  .     \n\
                      --o--                                    '    |           \n\
                        |                        |                --o--         \n\
                            /                  --o--     |          |         | \n\
   _|_                     /                     |     - o -                 -o-\n\
    |                     *                              |            |       | \n\
            ':.                                                     --o--       \n\
_|_           '::._                                 |                 |         \n\
 |              '._)                              - o -                     .   \n\
         |                                          |                           \n\
       - o -                                                                    \n\
         |                                                  .-.                 \n\
                                                           (   )                \n\
                        *             .                     `-'. |   |          \n\
     |                           |               \\            - o --o-         \n\
   - o -          |            - o -             \\  .           |   |  |       \n\
     |          --o--  '         |                 *               /   -o-      \n\
                | |   '                                           /     |       \n\
          '    -o-                                               *              \n\
                |         +                                                    \n\
"

#define ascii_tree   ">X<   \n\
         A                  \n\
        d$b                 \n\
      .d\$$b.               \n\
    .d$i$$\$$b.             \n\
       d$$@b                \n\
      d\$$$ib               \n\
    .d$$$\$$$b              \n\
  .d$$@$$$$\$$ib.           \n\
      d$$i$$b               \n\
     d\$$$$@$b              \n\
  .d$@$$\$$$$$@b.           \n\
.d$$$$i$$$\$$$$$$b.         \n\
        ###                 \n\
        ###                 \n\
        ###                 \n\
"

class ShrubberyCreationForm : public AForm
{
public:
    struct GradeNotCorrect : public std::exception{const char* what() const throw();}; 
    struct FormNotSigned : public std::exception{const char* what() const throw();};
    struct GradeTooLowExceptionExec : public std::exception{const char* what() const throw();}; 
    struct GradeTooLowExceptionSign : public std::exception{const char* what() const throw();}; 
public:
    ShrubberyCreationForm(const std::string&, const std::string&);
    ShrubberyCreationForm(const std::string &userdef_name, const std::string &target, const int execute, const int sign);
    ShrubberyCreationForm(const ShrubberyCreationForm&);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
    ~ShrubberyCreationForm();
public: 
    void execute (Bureaucrat const & executor) const;
};

