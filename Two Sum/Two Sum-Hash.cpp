## Hash Table O(n) ##

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        map<int,int> mapping;
        vector<int> result;
        for(int i=0;i<numbers.size();i++){
            mapping[numbers[i]]=i;
        }
        for(int i=0;i<numbers.size();i++){
            int search=target-numbers[i];
            if(mapping.find(search) != mapping.end()){
                result.push_back(i+1);
                result.push_back(mapping[search]+1);
                break;
            }
        }
        return result;
    }
};