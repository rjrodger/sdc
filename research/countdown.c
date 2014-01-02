
#include <stdio.h>
#include <unistd.h>


void decrement( int *counts );


int main(int argc, char *argv[])
{
  int c[] = {0,9,3,6,1,1,6};

  for( int i = 0; i < 70; i++ ) {
    decrement( c );
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",i,c[0],c[1],c[2],c[3],c[4],c[5],c[6]);
    sleep(1);
  }

  return 0;
}


void decrement( int *counts ) {

  // seconds
  counts[6]--;
  if( counts[6] < 0 ) {
    counts[6] = 59;
    counts[5]--;
  }

  // minutes
  if( counts[5] < 0 ) {
    counts[5] = 59;
    counts[4]--;
  }

  // hours
  if( counts[4] < 0 ) {
    counts[4] = 23;
    counts[3]--;
  }

  // days (just keep at zero)
  if( counts[3] < 0 ) {
    counts[3] = 0;
  }

}

