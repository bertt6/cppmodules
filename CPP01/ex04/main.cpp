#include <iostream>
#include <fstream>

int main(int ac, char **av) {
    std::fstream myfile;
    myfile.open("dssadasd.txt");
    myfile << "selams";
    myfile.close();
}