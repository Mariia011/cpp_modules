#ifndef 

class Weapon {
    public:
        Weapon();
        ~Weapon();
    private:
        std::string type;
    public:
        std::string getType();
        void setType(std::string);
};