#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include <cstring>
#include <cmath>

bool isPrime(const int n)
{
    for (int i = 2 ; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

std::list<int> IntList(char x)
{
    std::list<int> L = {};
    char* t = &x;
    int length = strlen(t);
    char* temp;
    for (int i = 0; i < length ; i++)
    {
        if (t[i] == ' ')
        {
            if (temp[0] != '\0')
            {
                L.push_back((int) *temp);
                *temp = '\0';
            }
        }
        else
        {
            *temp += t[i];
        }
    }
    return L;
}

int main()
{
    std::cout << "Please type one or more positive integer(s)." << std::endl;
    char x;
    std::cin >> x;
    for (auto const& n : IntList(x))
    {
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