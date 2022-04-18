#include <iostream>
#include <string>
#include <vector>

struct web
{
    std::string name;
    int rank;
};

int rank_starting_point(std::string s)
{
    int i = 0;
    for (i; i < s.size(); i++)
    {
        if (s[i] == ' ')
            return i;
    }
    return i;
}

std::string string_part(std::string s)
{
    std::string str = s.substr(0, rank_starting_point(s));
    return str;
}

int number_part(std::string s)
{
    std::string num_in_string = s.substr(rank_starting_point(s) + 1, s.size() - 1);
    int num = std::stoi(num_in_string);
    return num;
}

int main()
{
    int t, n = 10;
    std::cin >> t;
    std::string input;
    std::vector<struct web> website;
    website.resize(n);
    std::cin.ignore();
    for (int k = 1; k <= t; k++)
    {
        for (int i = 0; i < 10; i++)
        {
            std::getline(std::cin, input);
            website[i].name = string_part(input);
            website[i].rank = number_part(input);
        }
        int max_rank = website[0].rank;
        for (int i = 1; i < 10; i++)
        {
            if (website[i].rank > max_rank)
                max_rank = website[i].rank;
        }
        //  printing data
        printf("Case #%d:\n", k);
        for (int i = 0; i < 10; i++)
        {
            if (website[i].rank == max_rank)
                std::cout << website[i].name << "\n";
        }
    }
    return 0;
}
