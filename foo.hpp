#pragma once

#include "Human.hpp"
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> wynik;
    for (Human& person : people) {
        person.birthday();
        if (person.isMonster()) {
            wynik.push_back('n');
        }
        else {
            wynik.push_back('y');
        }
    }
    size_t n = wynik.size();
    for (size_t i = 0; i < n / 2; ++i) {
        char chwilowo = wynik[i];
        wynik[i] = wynik[n - 1 - i]; 
        wynik[n - 1 - i] = chwilowo;
    }


    return wynik;
}
