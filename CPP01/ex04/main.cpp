#include <fstream>
#include <iostream>


void replaceFunct(std::ifstream& inFile, std::ofstream& ofFile, std::string& s1, std::string& s2)
{
    std::string line;
    while(std::getline(inFile, line))
    {
        size_t pos = 0;
        while(((pos = line.find(s1, pos)) != std::string::npos))
        {
            line = line.substr(0, pos) + s2 + line.substr(pos, s1.length());
            pos += s2.length();
        }
        ofFile << line << std::endl;
    }
}

void openFiles(char **av)
{
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream inFile;
    inFile.open(filename, std::ifstream::in);
    if(!inFile.is_open())
    {
        std::cout << "File open error!" << std::endl;
        return;
    }
    std::ofstream ofFile;
    ofFile.open(filename + ".replace", std::ofstream::out);
    replaceFunct(inFile, ofFile, s1, s2);
}

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "error!" << std::endl;
        return 0;
    }
    openFiles(av);
}

