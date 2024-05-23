// a =>
// #include <stdio.h>
// int main( )
// {
//     int i = 2, j = 3, k, l ;
//     float a, b ;
//     k = i / j * j ;
//     l = j / i * i ;
//     a = i / j * j ;
//     b = j / i * i ;
//     printf( "%d %d %f %f", k, l, a, b ) ;
//     return 0;
// }

// ans => 0 2 0.000000 2.000000

// b =>
// #include <stdio.h>
// int main( )
// {
//     int a, b ;
//     a = -3 - - 3 ;
//     b = -3 - - ( - 3 ) ;
//     printf ( "a = %d b = %d", a, b ) ;
//     return 0;
// }

// ans => a = 0 b = -6

// c =>
// #include <stdio.h>
// int main( )
// {
//     float a = 5, b = 2 ;
//     int c ;
//     c = (int)a % (int)b ;
//     printf ( "%d", c ) ;
//     return 0;
// }

// and => 1

// d =>
// #include <stdio.h>
// int main( )
// {
//     printf ( "nn \n\n nn\n" ) ;
//     printf ( "nn /n/n nn/n" ) ;
//     return 0;
// }

// ans =>
// nn

//  nn
// nn /n/n nn/n

// e =>