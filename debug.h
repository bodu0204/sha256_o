#ifndef DEBUG_H
#define DEBUG_H
#include <stdio.h>
#include <unistd.h>
#define TEST printf("[(%s/%d) %s ]\n", __FILE__, __LINE__, __func__); fflush(stdin);
#define TEST_ printf("---------------------------------------------[(%s/%d) %s ]\n", __FILE__, __LINE__, __func__); fflush(stdin);
#define TESTn(str, i) printf("[(%s/%d) %s ]%s:%d\n", __FILE__, __LINE__, __func__, (str), (int)(i)); fflush(stdin);
#define TESTnx(h, i) printf("[(%s/%d) %s ]%02d:%08x\n", __FILE__, __LINE__, __func__, (int)(h), (int)(i)); fflush(stdin);
#define TESTsx(str, i) printf("[(%s/%d) %s ]%s:%08x\n", __FILE__, __LINE__, __func__, (str), (int)(i)); fflush(stdin);
#define TESTp(str, i) printf("[(%s/%d) %s ]%s:%p\n", __FILE__, __LINE__, __func__, (str), (i)); fflush(stdin);
#ifndef PUSH_SWAP_H
#endif



#endif
//* test */static	size_t stc = 0;
//* test */const int stc_max = 10000;
//* test */const int onoff = 1;
//* test */stc++;
//* test */if (stc > stc_max && onoff)
//* test */{
//* test */	printf("the number is too big"); TEST
//* test */	exit(0);
//* test */}

/*




TESTn("s->len", s->len)
TESTn("s->grd", s->grd)
TESTn("s->udr", s->udr)












 */
