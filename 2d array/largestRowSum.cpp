// #include <iostream>
// using namespace std;

// int largestRowSum(int arr[][3]) {

//     int maxi = INT_MIN()
//     int rowIndex = -1;

//     for(int row=0; row<3; row++) {
//         int sum = 0;
//         for(int col=0; col<3; col++) {
//             sum += arr[row][col];
//         }

//         if(sum > maxi ) {
//             maxi = sum;
//             rowIndex = row;
//         }
       
//     }

//     cout << "the maximum sum is " << maxi << endl;
//     return rowIndex;
// }

// int main()
// {
//     int arr[3][4];

//     // take input
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cin >> arr[row][col];
//         }
//     }

//     // print array
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }

//     cout << "Max raw at index " << largestSum(arr)  << endl;
//     return 0;
// }