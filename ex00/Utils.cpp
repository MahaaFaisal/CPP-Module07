#include "Utils.hpp"


Utils::Utils() {}
Utils::Utils(Utils &other) {(void)other;}
Utils &Utils::operator=(Utils rhs){(void)rhs; return *this;}
Utils::~Utils() {}


void    Utils::printMsg(const std::string& msg, const std::string& color) {
    std::string textBold = "\033[1m";
    std::string textColor = "\033[37m"; // Default white
    std::string textReset = "\033[0m";

    if (color == "green") textColor = "\033[32m";
    else if (color == "red") textColor = "\033[31m";
    else if (color == "yellow") textColor = "\033[33m";
    else if (color == "blue") textColor = "\033[34m";
    else if (color == "magenta") textColor = "\033[35m";
    else if (color == "cyan") textColor = "\033[36m";
    else if (color == "purple") textColor = "\033[35m"; 

    std::string fullMsg = textBold + textColor + msg + textReset;
    std::cout << fullMsg;
}

void    Utils::printErr(const std::string& msg) {
    std::string textBold = "\033[1m";
    std::string textRed = "\033[31m";
    std::string textReset = "\033[0m";

    std::string fullMsg = textBold + textRed + msg + textReset;
    std::cerr << fullMsg << std::endl;
}
