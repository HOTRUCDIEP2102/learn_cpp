#include <iostream>
using namespace std;



void ImArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "Import values in Array ";
    cout << "Import values arr[" << i << "] : ";
    cin >> arr[i];
  }
}
void ExArr(int arr[], int n)
{
  cout << "Value of Array" << endl;
  cout << arr[i] << " ";
}

int main()
{

  int n;
  cin >> n;
  int arr[n];

  ImArr(arr, n);
  ExArr(arr, n);

  system("pause");
  return 0;
}
