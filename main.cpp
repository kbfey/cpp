#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "enter a int" << endl;
    int int1 = 0;
    cin >> int1;
    if(int1 > 0){
        cout << "大于0的整数" << endl;
    }
    else {
        cout << "小于0的整数" << endl;
    }
    cout << int1 << endl;
    int arr1[5] = {1,2,3,4,5};
    for(int i = 0;i < 5;i++){
        cout << arr1[i] << endl;
    }
    cout << "end" << endl;
    return 0;
}
