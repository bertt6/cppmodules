#include <fstream>
#include <iostream>

//open fonksiyonu ifstream ve ofstream (.replace) açıyor 

void replaceFunct(std::ifstream &inFile, std::ofstream &ofFile, std::string s1, std::string s2)
{
    std::string line;
    size_t pos;
    while(std::getline(inFile, line))
    {
        pos = 0;
        while((pos = line.find(s1, pos) != std::string::npos))
        {
            pos = line.substr(0, pos) + s2 + line.substr(pos, s1.length());
            
        }
    }
}

void openFiles(char **av)
{
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream inFile(filename, std::ifstream::in);
    if(!inFile.is_open())
    {
        std::cout << "File open error!" << std::endl;
        return;
    }
    std::ofstream ofFile(filename + ".replace", std::ofstream::out);
    replaceFunct(inFile, ofFile, s1, s2);
}

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "error!" << std::endl;
        return ;
    }

    openFiles(av);

}

//ifstream olarak dosya aç ve dosuya isminin sağına ifstream::in(arastir) yaz.
//eğer dosya açılkmadıysa hata ver. açıldıysa filename+".replace" olarak bir ofstream dosya oluşturup ofstream:out özelliği ver
//diğer fonksiyona gönder bir tane string değişken oluştur ve while içinde getline fonksiyonu ile ifstream olarak gelen parametreyi line'a getline ile oku
//whil içinde pos oluştur size_t olarak ve posun içie line.substr(0, pos) + s2 + lineo.substr(pos + s1.length())'i at daha sonra pos'a s2'nin uzunlığunu ekle
// son olarak ise ofstream dosyasının içine line'i gönder endl ile 