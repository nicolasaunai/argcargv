
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    std::cout << "there are " << argc << " arguments to this program\n";

    for (int argIndex = 0; argIndex < argc; ++argIndex)
    {
        std::cout << argv[argIndex] << "\n";
        std::string arg = argv[argIndex];
        if (arg.substr(arg.find_last_of(".") + 1) == "txt")
            std::cout << "is a txt file\n";
    }
}
