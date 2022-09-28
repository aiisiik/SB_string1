#include <string>
#include <iostream>

int main()
{
    std::string s = "Let's go to Kazakhstan";
    std::cout << s <<"\n";
    std::cout << s.length() << "\n";
    std::cout << s[0] << "\n";
    std::cout << s[s.length()-1] << "\n";
}