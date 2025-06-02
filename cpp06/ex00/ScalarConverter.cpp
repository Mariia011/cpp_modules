#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &other){*this = other;}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &){return *this;}

ScalarConverter::~ScalarConverter(){}

void ScalarConverter::printNan(void)
{

    cout << "Char: " << "impossible" << endl;
    cout << "Int: " << "impossible" << endl;
    cout << "Float: " << "nanf" << endl;
    cout << "Double: " << "nan" << endl;
}

void ScalarConverter::printChar(const string &str)
{
	char res = static_cast<char>(atoi(str.c_str()));
	cout << "Char: ";
	if (res < 0)
		cout
			<< "impossible" << endl;
	else if (res < 32 || res == 127)
		cout
			<< "Non displayable" << endl;
	else
		cout << "\'" << res << "\'" << endl;
}

void ScalarConverter::printInt(const string &str)
{
	cout << "Int: " << atoi(str.c_str()) << endl;
}

bool ScalarConverter::checkInf(const string &val)
{
    return (val == "inf" || val == "+inf" || val == "inff" || val == "+inff" || val == "-inf" || val == "-inff");
}

void ScalarConverter::printInf(const string &val)
{
    cout << "Char: " << "impossible" << endl;
    cout << "Int: " << "impossible" << endl;
    cout << "Float: " << (val[0] == '-' ? "-" : "+") << "inff" << endl;
    cout << "Double: " << (val[0] == '-' ? "-" : "+") << "inf" << endl;
}

void ScalarConverter::printError(void)
{
	cout << "Char: " << "impossible" << endl;
	cout << "Int: " << "impossible" << endl;
	cout << "Float: " << "impossible" << endl;
	cout << "Double: " << "impossible" << endl;
}

void ScalarConverter::printFloat(const string &str)
{
	float res = strtof(str.c_str(), NULL);
	cout << "Float: " << res;
	if (res == static_cast<int>(res))
		cout << ".0f" << endl;
	else
		cout << "f" << endl;
}

void ScalarConverter::printDouble(const string &str)
{
	double res = strtod(str.c_str(), NULL);
	cout << "Double: " << res;
	if (res == static_cast<int>(res))
		cout << ".0";
	cout << endl;
}

bool ScalarConverter::checkNum(const string &str)
{
	int i = 0;
	if (str.empty())
		return false;

	if (str[i] == '+' || str[i] == '-')
		++i;

	int len = str.length();
	int dotCount = 0;

	if (!isdigit(str[len - 1]) && str[len - 1] != 'f')
		return false;
	if (str[len - 1] == 'f')
		--len;

	for (; i < len; ++i)
	{
		if (str[i] == '.')
		{
			++dotCount;
			if (dotCount > 1)
				return false;
		}
		else if (!isdigit(str[i]))
			return false;
	}
	return true;
}

void ScalarConverter::convert(const string &str)
{
	if (str == "nan" || str == "nanf")
        printNan();
	else if (checkInf(str))
    printInf(str);
	else if (checkNum(str))
	{
		printChar(str);
		printInt(str);
		printFloat(str);
		printDouble(str);
	}
	else
		printError();
}