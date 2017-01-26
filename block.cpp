#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cout << "Please enter the number of rows you would like: " << endl;
    cin >> rows;
    cout << "Now, please enter the number of columns you would like: " << endl;
    cin >> cols;
    while((rows > 0 && cols == 0) || (rows == 0 && cols > 0) || (rows > 0 && cols > 0))
   {
    for(int i = 0; i < rows; i++)
    {
     for(int j = 0; j < cols; j++)
     {
      cout << "x.";
     }
     cout << endl;
    }
    cout << " Enter the number of rows and columns: " << endl;
    cin >> rows >> cols;
   }

}
