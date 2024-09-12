// #include <iostream>
// using namespace std;

// int main(){
//   int n[100];
//   int S = 0;
//   for(int i = 0; i < 100; i++){
//     n[i] = i;
//     S+=n[i];
//     }
//     cout << S << endl;
// }

// int main() {
//     const int size = 10;
//     double arr[size];
//     cout << "Enter array elements" << endl;
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     int sum = 0;
//     cout << endl << endl;
//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }
//     cout << endl << sum << endl;
// }

// int main() {
//     const int size = 3;
//     int arr[size];
//     srand (time(0));
//     cout<<"Enter array elements\n";
//     for (int i = 0; i < size; ++i)
//         arr[i] = rand() % 10;
//     cout<<"output\n";
//     for (int i = 0; i < size; ++i)
//         cout<<arr[i]<<" ";
// }

// int main() {
//     setlocale(LC_CTYPE, "ukr");
//     const int size = 10;
//     int arr[size];
//     srand(time(0));
//     for (int i = 0; i < size; i++) {
//         arr[i] = rand() % size;
//     }
//     cout <<"output"<< endl;
//     for (int i = 0; i < size; i++) {
//         cout << "arr[" << i << "] = " << arr[i] << endl;
//
//     }
//     int sum_a = 0;
//     int sum_b = 0;
//
//     for (int i = 0; i < size; i++) {
//         if (arr[i] % 2 == 0) {
//             sum_a += arr[i];
//         };
//         if (arr[i] % 2 != 0) {
//             sum_b += arr[i];
//         };
//     }
//     cout << "сума парних = " << sum_a << endl;
//     cout << "сума непарних = " << sum_b << endl;
// }


// int main() {
//     srand(time(0));
//     int arr[3][4], max, s = 0;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             arr[i][j] = rand() % 20 - 10;
//         }
//     }
//
//     cout << "output"<< endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cout << "arr[" <<i << ","<< j << arr[i][j] << "]";
//             cout << endl;
//         }
//         max = arr[0][0];
//         for (int i = 0; i < 3; i++) {
//             for (int j = 0; j < 4; j++) {
//                 if (arr[i][j] > max) {
//                     max = arr[i][j];
//                     if (arr[i][j] < 0) {
//                         s = s + arr[i][j];
//                     }
//                 }
//             }
//         }
//
//     }
//     cout <<"max = " << max << endl;
//     cout << "sum = " << s << endl;
// }