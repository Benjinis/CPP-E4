#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <math.h>


//Exercice fait avec Goulven Fournier
bool isPrime(const long long n)
{
    if (n == 0)
    {
        return false;
    }
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




int main()
{
    /*std::string x;
    std::getline(std::cin >> std::ws, x);*/
    long long n;
    while (std::cin >> n)
    {

   
        
        
        
        if (isPrime(n))
        {
            std::cout << n << " is a prime: True" << std::endl;
        }
        else
        {
            std::cout << n << " is a prime: False" << std::endl;
        }
    }
    
} 