#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <math.h>


//Exercice fait avec Goulven Fournier
bool isPrime(const int n)
{
    if( n == 1)
    {
        return false;
    }
    for (int i = 2 ; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

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


int main()
{
    std::cout << "Please type positive integers." << std::endl;
    std::string x;
    std::getline(std::cin >> std::ws, x);
    

    std::vector<std::string> nombres = split(x);
   
    
    for(int i = 0; i < nombres.size(); i++)
    {
        
        int n = std::stoi(nombres[i]);
        
        if (isPrime(n))
        {
            std::cout << n << " is a prime : True" << std::endl;
        }
        else
        {
            std::cout << n << " is a prime : False" << std::endl;
        }
    }

} 