#include <iostream>
#include <vector>
int main()
{
    std::vector<std::vector<int>> vec;
    vec.push_back({ 1,2,3 });
    vec.push_back({ 4,5 });
    vec.push_back({});
    vec[1].push_back(6);
    vec[2] = { 7,8,9 };
    for (auto& it1 : vec)
    {
        for (auto& it2 : it1)
            std::cout << it2 << ' ';
        std::cout << '\n';
    }
    return 0;
}
