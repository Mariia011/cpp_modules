#include "BitcoinExchange.hpp"

void open_the_file(std::string& filename, std::map<tm_>)
{
    if(std::open(filename))

}

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cout << "Error: couldn't open the file";
        return 0;
    }
    parse_the_table("data.csv");
    open_the_file(argv[1]);

    //write a checker for valid files:
    //parse the date (the year uptodate, month x > 0 && x < 13, day before 31 and check withing the month to be a right number),
    // then the value t be a positive value (unsigned int and double)
        
    //copy that file and copy_replace '|' to '=>'

}