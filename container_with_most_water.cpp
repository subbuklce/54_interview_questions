#include<iostream>
#include<algorithm>
using namespace std;

int input[] = {5,9,2,4};

int main() {
auto maxArea = 0;

    for (auto i =0;i < sizeof(input)-1; ++i) {
        for (auto j =i;j < sizeof(input); ++j) {
            auto width = j -i ;
            auto length = std::min(input[i], input[j]);
            auto area = length * width;
            maxArea = std::max(maxArea, area);
        }
    }
cout<<"\n the max area is ::"<< maxArea;
}