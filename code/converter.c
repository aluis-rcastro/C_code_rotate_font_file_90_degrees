void main(void)
{ 
#define FONT8X8                
 
#ifdef  FONT8X8
#define FONT_WIDTH      8
#define FONT_HEIGHT     8
#endif
 
const unsigned char Alphabet[] = {
#ifdef   FONT5X7  
#include "Font5x7.c"
#endif
#ifdef   FONT8X12  
#include "Font8x12__8x16.c"
#endif
#ifdef   FONT8X8  
#include "Font8x8.c"
#endif
};
 
#define ALPHABET_SIZE sizeof(Alphabet)
 
unsigned char Alphabet_90[ALPHABET_SIZE]          ;
unsigned char CountAlphabet = 0                    ;
unsigned char CountRow    = 0                      ;
unsigned char CountColumn   = FONT_WIDTH-1        ;
unsigned char PointRow                           ;
unsigned char PointColumn                         ;
while ( CountAlphabet < ALPHABET_SIZE )
      {
      CountRow     = 0                             ;
      PointRow    = BIT7                          ;
      while ( CountRow < FONT_HEIGHT )
            {
            CountColumn   = FONT_WIDTH-1          ;
            PointColumn   = BIT7                  ;            
            while ( PointColumn )
               {
               unsigned int PontAlph   =  (CountRow  + (CountAlphabet*FONT_HEIGHT  ))  ;
               unsigned int PontAlph90 =  (CountColumn + (CountAlphabet*FONT_WIDTH ))  ;
               if ( Alphabet[PontAlph] & PointColumn )  Alphabet_90[PontAlph90] |= PointRow ;
                  else                                  Alphabet_90[PontAlph90] &=~PointRow ;
               PointColumn >>= 1 ;  
               CountColumn--     ;           
               }
            PointRow >>= 1     ;  
            CountRow++         ;   
            }
      CountAlphabet++            ;
      }
}
 
