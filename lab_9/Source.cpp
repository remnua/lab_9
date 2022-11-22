#include <iostream>
#include <math.h>
using namespace std;

void cicle(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//int main() {
//    int n = 6;
//    int* arr = new int[n];
//    int max = INT_MIN;
//    int min = INT_MAX;
//    int a = 0;
//    int b = 0;
//    int temp;
//    srand(time(0));
//    for (int i = 0; i < n; i++) {
//        arr[i] = rand();
//    }
//    cout << "Unchanged array:";
//    cicle(arr, n);
//
//    for (int i = 0; i < n; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//            a = i;
//        }
//        if (arr[i] < min) {
//            min = arr[i];
//            b = i;
//        }
//    }
//    temp = arr[a];
//    arr[a] = arr[b];
//    arr[b] = temp;
//
//    cout << "Changed array:";
//    cicle(arr, n);
//}




//int main (){
//    int A;
//    cout << "Enter the number: ";
//    cin >> A;
//    int n = 6;
//    int* arr = new int[n];
//    srand(time(0));
//    for (int i = 0; i < n; i++) {
//        arr[i] = rand();
//    }
//
//    int count = 0;
//    cicle(arr, n);
//    for (int i = 0; i < n; i++)  if (arr[i] > A) count++;
//    cout << count;
//
//}



//int main() {
//    int n = 6;
//    int* arr = new int[n];
//    srand(time(0));
//    for (int i = 0; i < n; i++) {
//        arr[i] = rand();
//    }
//    int max = INT_MIN;
//    int max2 = INT_MIN;
//    cout << "Array: ";
//    cicle(arr, n);
//    for (int i = 0; i < n; i++) {
//        if (arr[i] > max) {
//            max2 = max;
//            max = arr[i];
//        }
//        else if (arr[i] > max2) {
//            max2 = arr[i];
//        }
//        
//    }
//    cout << "Second max number: " << max2;
//}


int main() {
    int n = 6;
    bool check = false;
    int* arr = new int[n];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand();
    }
    arr[rand() % 6] = 0;
    cicle(arr, n);
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            cout <<  "Index of first zero element: " << i;
            check = true;
            break;
        }
    }
    if (!check) cout << "Array doesn't contain 0";

}