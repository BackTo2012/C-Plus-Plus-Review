#include <iostream>
#include <iomanip>
using namespace std;
template <typename T>
void bubbleSort( T a[], int d) {
   int i, j, flag;
   T temp;
   for (i = 0; i < d - 1; i++) { // 进行d-1次
      flag = 0; // 交换标志，0表示无交换，1表示有交换
      for (j = 0; j < (d - i - 1); j++)
      {
         if (a[j] > a[j + 1])
         {
            flag = 1;
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
         }
      }
      if (flag == 0) // 无交换,说明已经全部排好序，提前结束
      {
         break;
      }
   }
}

//StudybarCommentBegin
int main()
{
   const int arraySize = 10;  // size of array
   int a[ arraySize ] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 }, i;

   // display int array in original order
   cout << "Integer data items in original order\n";

   for ( i = 0; i < arraySize; ++i )
      cout << setw( 6 ) << a[ i ];

   bubbleSort( a, arraySize );          // sort the array

   // display int array in sorted order
   cout << "\nInteger data items in ascending order\n";

   for ( i = 0; i < arraySize; ++i )
      cout << setw( 6 ) << a[ i ];

   cout << "\n\n";

   // initialize double array
   double b[ arraySize ] = { 10.1, 9.9, 8.8, 7.7, 6.6, 5.5,
                             4.4, 3.3, 2.2, 1.1
                           };

   // display double array in original order
   cout << "double point data items in original order\n";

   for ( i = 0; i < arraySize; ++i )
      cout << setw( 6 ) << b[ i ];

   bubbleSort( b, arraySize );          // sort the array

   // display sorted double array
   cout << "\ndouble point data items in ascending order\n";

   for ( i = 0; i < arraySize; ++i )
      cout << setw( 6 ) << b[ i ];

   cout << endl;

   return 0;

} // end main
//StudybarCommentEnd
