#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
    std::vector<int> v={{1,2,3,4,5}};
    std::transform(std::begin(v),std::end(v),std::begin(v),[](int x){return x+5;});
    for(auto e :v)
    {
        std::cout<<e<<std::endl;
    }
    return 0;
}
