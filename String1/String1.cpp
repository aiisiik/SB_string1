#include <string>
#include <iostream>

int main()
{
    std::string s = "Konnichiwa";
    std::cout << s << std::endl;
    std::cout << s.length() << std::endl;
    std::cout << s.substr(0,1) << std::endl;
    std::cout << s.substr(s.length() - 1,1) << std::endl;
    return 0;
}