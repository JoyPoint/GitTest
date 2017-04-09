/* REALLOC.C: This program allocates a block of memory for
 * buffer and then uses _msize to display the size of that
 * block. Next, it uses realloc to expand the amount of
 * memory used by buffer and then calls _msize again to
 * display the new amount of memory allocated to buffer.
 */

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(  )
{
   double *buffer;// = new double[3];
   size_t size;
   int length;
   double douA[3] =  {1.0,2.0,3.0};
   buffer = douA;
   // if( (buffer = (double *)malloc( 1000 * sizeof( double ) )) == NULL )
   //    exit( 1 );

   size = _msize( &buffer );
   length = size / sizeof(double);
   printf( "Size of block after size of 3 doubles: %u\n", size );

   printf( "Size of block after malloc of 1000 doubles: %u\n", length );

   /* Reallocate and show new size: */
   // if( (buffer = (double *)realloc( buffer, size + (1000 * sizeof( double ))))  ==  NULL )
   //    exit( 1 );
   // size = _msize( buffer );
   // printf( "Size of block after realloc of 1000 more doubles: %u\n", 
   //          size );

   free( buffer );
   exit( 0 );
}