#include <iostream>
#include<string>
#include<vector>

using namespace std;


int main(){
    vector<pair<string,int>> hash(2);
    hash.push_back({"user1", 123});
    hash.push_back({"user2", 1251});

    for (auto itr: hash)
    {
        cout << itr.first << " , " << itr.second << endl;
        
    }
    cout << "Finsished..." << endl;
    // vector<vector<pair<string, int>>> hash(2);

    return 0;
}