#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_

/*
        76543210
  VAR = 00000101
  VAR = VAR | (1<<BIT)
*/
#define SET_BIT(VAR,BIT) (VAR = VAR | (1<<BIT))
/*
        76543210
  VAR = 00000101
  AND==>11111011 (INVERSE OF) 00000100 (1<<BIT)
  VAR = VAR &~ (1<<BIT)
 */
#define CLR_BIT(VAR,BIT) (VAR = VAR &~ (1<<BIT))
/*
        76543210
  VAR = 00000101
  XOR = 00000100  (1<<BIT)
  0 ^ ANY THING ==> ANY THING
  1 ^ ANY THING ==> INVERSE OF ANY THING
  VAR = VAR ^ (1<<BIT)
*/
#define TOOGLE_BIT(VAR,BIT) (VAR = VAR ^ (1<<BIT)) 
/* 
        76543210
  VAR = 00000101
  VAR>>2 = 00000001 & (00000001) ===> 1
 (VAR>>BIT)&1
*/
#define GET_BIT(VAR,BIT) ((VAR>>BIT)&1)

#endif //_BIT_MATH_H_