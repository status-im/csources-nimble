/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <setjmp.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
N_LIB_PRIVATE N_NIMCALL(int, c_setjmp__systemZansi95c_42)(jmp_buf jmpb) {
	int result;
	result = (int)0;
	result = _setjmp(jmpb, NIM_NIL);
	return result;
}
