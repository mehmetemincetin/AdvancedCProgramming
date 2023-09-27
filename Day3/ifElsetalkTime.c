#include <stdio.h>

int
main ()
{
  float fee, talkTime;

  printf ("Please enter the talk time:");
  scanf ("%f", &talkTime);

  if (talkTime <= 4)
    {
      fee =1.0;
      printf ("Total fee: %.3f",fee);
    
    }else {
        fee = 1+ (talkTime-4) * 0.07 ;
        printf("Total fee:%.3f",fee);
    }
    return 0;
}
