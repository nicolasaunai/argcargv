
#include <iostream>


int main(int argc, char** argv)
{
    std::cout << "there are " << argc << " arguments to this program\n";

    for (int argIndex = 0; argIndex < argc; ++argIndex)
    {
        std::cout << argv[argIndex] << "\n";
    }
}
