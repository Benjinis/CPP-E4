#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>


//exercice fait avec Goulven Fournier
//pas fonctionnel

std::vector<std::string> split(std::string s)
{

    

    int start, end = -1;
    std::vector<std::string> txt;

    do {

        start = end + 1;

        end = s.find(" ", start);

        txt.push_back(s.substr(start, end - start));

    } while (end != -1);
    return txt;
}
int find_motive(std::string s, std::string motive)
    {
        int k = 0;
        std::vector<std::string> words = split(s);

        for (int i = 0; i < words.size(); i++)
        {
            if (words[i].find(motive) != -1)
            {
                k += 1;
            }
            
        }

        return k;
    }

// std::cout << "The file contains " << k << " words containing the motive" << motive << std::endl;
//C:\Users\benji\OneDrive\Documents\ESIEE\C++ E4\find_motive/lorem_ipsum.txt

int main(int argc, char* argv[])
{
    
    /*
    std::string path;
    std::string motive;
    

    std::cout << "Please enter the file-path of text and the motive :  " << std::endl;
    std::cin >> path >> motive;
    std::cout << path << " " << motive << std::endl;

    */

    std::string textline;
    std::fstream text;
    text.open(argv[1], std::ios::in);
    int counter = 0;
    if (text.is_open())
    {
    while(std::getline(text, textline))
        {
            counter += find_motive(textline, argv[2]);
        }
    }


    text.close();

    if (text.fail())
    {
        std::cout << "The file couldn't be opened." << std::endl;
        return 1;
    }

    std::cout << "The file contains " << counter << " words containing the motive : " << argv[2] << std::endl;
    return 0;

}