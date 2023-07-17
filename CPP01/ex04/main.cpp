#include <iostream>
#include <fstream>

int main(int ac, char **av) {
    (void)ac;
    (void)av;
    std::string text = "asdasdasd";
    std::fstream myfile;
    myfile.open("dssadasd.txt");
    myfile << text;
    getline(myfile, text);
    std::cout << text;
}