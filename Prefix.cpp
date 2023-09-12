//Longest Common Prefix, https://leetcode.com/problems/longest-common-prefix/

#include <iostream>
#include <string>
#include <vector>
class Solution {
public:
    static std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()){
            return "";
        }
        for (int i = 0; i < strs[0].size(); i++){
            char c = strs[0][i];
            for (int j = 1; j < strs.size(); j++){
                if (i == strs[j].size() || strs[j][i] != c){
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};

int main(){
    std::vector<std::string> test;
    int size1;
    std::cout << "Get size: " << std::endl;
    std::cin >> size1;
    std::cout << "Get user input: " << std::endl;
    for (int i = 0; i < size1; i++){
        std::string input;
        std::cin >> input;
        test.push_back(input);
    }
    std::cout << Solution::longestCommonPrefix(test) << std::endl;
}