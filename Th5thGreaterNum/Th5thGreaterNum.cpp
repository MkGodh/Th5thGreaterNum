#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> vec;
    int value;
    int maxIndex = 0;
    std::cout << "Input array elements:\n";

    while (true) {
        std::cin >> value;
        if (value == -1) {
            if (!vec.empty()) {
                std::cout << vec.back();
            }
            else {
                std::cerr << "Vector is empty." << std::endl;
            }
        }
        if (value == -2) {
            break;
        }

        if (value >= 0) {
            if (vec.size() == 5) {
                int maxIndex = std::max_element(vec.begin(), vec.end()) - vec.begin();

                if (value < vec[maxIndex])
                {
                    vec.erase(vec.begin() + maxIndex);
                    vec.push_back(value);
                }
            }
            else
            {
                vec.push_back(value);
            }

            std::sort(vec.begin(), vec.end());
        }

    }
    return 0;
}