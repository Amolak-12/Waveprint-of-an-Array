#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector< vector<int>>v{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

  for(int i=0;i<v.size();i++)
    {
      for(int j=0;j<v[i].size();j++)
        {
          cout << v[i][j] << " ";
        }
      cout << endl;
    }
  for(int i = 0;i<v.size() ; i++){
    if(i%2 == 0)
    {
      for(int j = 0 ; j < v.size() ; j++)
      {
      cout << v[j][i] << " ";
      }

    }
    else{
      for(int j = v.size()-1 ; j>= 0 ; j--)
        {
          cout << v[j][i] << " ";

        }
    }
    cout << endl;
  }


}