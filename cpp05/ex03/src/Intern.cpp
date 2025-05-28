#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"


Intern::Intern() {}

Intern::Intern(const Intern& other) {*this = other;}

Intern &Intern::operator=(const Intern& ){return *this;}


static inline AForm *makeShrubberyForm(const std::string& name, const std::string& target) { return new ShrubberyCreationForm(name, target); }
static inline AForm *makeRobotomyRequestForm(const std::string& name, const std::string& target) { return new RobotomyRequestForm(name, target); }
static inline AForm *makePresidentialPardonForm(const std::string& name, const std::string& target) { return new PresidentialPardonForm(name, target); }

AForm* Intern::makeForm(const std::string& formType, const std::string& formTarget)
{
	const std::string name = "foobar";

	const char *keys[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon",
		NULL
	};

	AForm* (*values[])(const std::string&, const std::string&) = {
		makeShrubberyForm,
		makeRobotomyRequestForm,
		makePresidentialPardonForm,
		NULL
	};

	for (int i = 0; keys[i]; ++i) {
		if (formType == keys[i]) {
			return values[i](name, formTarget);
		}
	}
	
	std::clog << "Intern can't create form, because type doesn't match\n";
	return NULL;
}

Intern::~Intern(){}
