#include <iostream>
#include <string>
#include <vector>

int num(std::string s)
{
    std::string num_in_str = s.substr(8, s.size() - 1);
    return std::stoi(num_in_str);
}

int main()
{
    int t, n;
    std::cin >> t;
    std::string input = "";
    std::vector<std::string> comands;
    while (t--)
    {
        std::cin >> n;
        comands.clear();
        std::cin.ignore();
        int p = 0;
        while (n--)
        {
            std::getline(std::cin, input);
            comands.push_back(input);
            if (!input.compare("LEFT"))
                p--;
            else if (!input.compare("RIGHT"))
                p++;
            else
            {
                int posi = num(input);
                while (1)
                {
                    --posi;
                    if (comands[posi][0] != 'S')
                    {
                        if (!comands[posi].compare("LEFT"))
                            p--;
                        else
                            p++;
                        break;
                    }
                    else
                        posi = num(comands[posi]);
                }
            }
        }
        std::cout << p << "\n";
    }
    return 0;
}
