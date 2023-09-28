    #ifndef CLAPTRAP_HPP
    # define CLAPTRAP_HPP

    #include <iostream>

    using std::cout;
    using std::string;
    using std::endl;

    class ClapTrap {
        protected: 
            string _name;
            int _healthPoint;
            int _energyPoint;
            int _attackDamage;
        public:
            ClapTrap();
            ClapTrap(string);
            ~ClapTrap();
            ClapTrap(const ClapTrap &);
            ClapTrap &operator = (const ClapTrap &);
            void attack(const string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);

            void debug(string);
    };


    #endif