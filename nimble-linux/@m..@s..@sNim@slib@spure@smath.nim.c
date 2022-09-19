/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 64

#include "nimbase.h"
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
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  typedef struct tyTuple__q4xn9bvzjB0QCTcS8bELuDQ tyTuple__q4xn9bvzjB0QCTcS8bELuDQ;
struct tyTuple__q4xn9bvzjB0QCTcS8bELuDQ {
NF Field0;
NI Field1;
};
static N_INLINE(void, stareq___pureZstrutils_2194)(NF* x, NF y);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_3527)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo__pureZmath_175)(NI x) {
	NI result;
	result = (NI)0;
	result = (NI)(x - ((NI) 1));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 32))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 16))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 8))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 4))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 2))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 1))));
	result += (NI)(((NI) 1) + (x <= ((NI) 0)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, floorDiv__pureZtimes_262)(NI64 x, NI64 y) {
	NI64 result;
	NI64 r;
	result = (NI64)0;
	result = (NI64)(x / y);
	r = (NI64)(x % y);
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NIM_BOOL T7_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = (IL64(0) < r);
		if (!(T4_)) goto LA5_;
		T4_ = (y < IL64(0));
		LA5_: ;
		T3_ = T4_;
		if (T3_) goto LA6_;
		T7_ = (NIM_BOOL)0;
		T7_ = (r < IL64(0));
		if (!(T7_)) goto LA8_;
		T7_ = (IL64(0) < y);
		LA8_: ;
		T3_ = T7_;
		LA6_: ;
		if (!T3_) goto LA9_;
		result -= ((NI) 1);
	}
	LA9_: ;
	return result;
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	{
		if (!(framePtr__system_3094 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s).calldepth = ((NI16) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		(*s).calldepth = (NI16)((*framePtr__system_3094).calldepth + ((NI16) 1));
	}
	LA1_: ;
	(*s).prev = framePtr__system_3094;
	framePtr__system_3094 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;
		callDepthLimitReached__system_3527();
	}
	LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__system_3094 = (*framePtr__system_3094).prev;
}
static N_INLINE(void, stareq___pureZstrutils_2194)(NF* x, NF y) {
	nimfr_("*=", "/home/yyoncho/Sources/nim/Nim/lib/system.nim");
	nimln_(2746, "/home/yyoncho/Sources/nim/Nim/lib/system.nim");
	(*x) = ((NF)((*x)) * (NF)(y));
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NF, roof___nimblepkgZdevelopfile_33343)(NF x, NI y) {
	NF result;
	nimfr_("^", "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
	result = (NF)0;
	nimln_(1153, "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
	switch (y) {
	case ((NI) 0):
	{
		nimln_(1154, "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
		result = 1.0;
	}
	break;
	case ((NI) 1):
	{
		nimln_(1155, "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
		result = x;
	}
	break;
	case ((NI) 2):
	{
		nimln_(1156, "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
		result = ((NF)(x) * (NF)(x));
	}
	break;
	case ((NI) 3):
	{
		nimln_(1157, "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
		result = ((NF)(((NF)(x) * (NF)(x))) * (NF)(x));
	}
	break;
	default:
	{
		tyTuple__q4xn9bvzjB0QCTcS8bELuDQ T6_;
		NF x_2;
		NI y_2;
		nimln_(1159, "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
		T6_.Field0 = x;
		T6_.Field1 = y;
		x_2 = T6_.Field0;
		y_2 = T6_.Field1;
		nimln_(1160, "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
		result = 1.0;
		{
			nimln_(1161, "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
			while (1) {
				nimln_(1162, "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
				{
					if (!!(((NI)(((NI) (y_2)) & ((NI) 1)) == ((NI) 0)))) goto LA11_;
					nimln_(1163, "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
					stareq___pureZstrutils_2194((&result), x_2);
				}
				LA11_: ;
				nimln_(1164, "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
				if (((NI)((NI64)(((NI) (y_2))) >> (NU64)(((NI) 1)))) < ((NI) 0) || ((NI)((NI64)(((NI) (y_2))) >> (NU64)(((NI) 1)))) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)((NI64)(((NI) (y_2))) >> (NU64)(((NI) 1))), ((NI) 0), ((NI) IL64(9223372036854775807))); }
				y_2 = ((NI) ((NI)((NI64)(((NI) (y_2))) >> (NU64)(((NI) 1)))));
				nimln_(1165, "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
				{
					if (!(((NI) (y_2)) == ((NI) 0))) goto LA15_;
					nimln_(1166, "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
					goto LA7;
				}
				LA15_: ;
				nimln_(1167, "/home/yyoncho/Sources/nim/Nim/lib/pure/math.nim");
				stareq___pureZstrutils_2194((&x_2), x_2);
			}
		} LA7: ;
	}
	break;
	}
	popFrame();
	return result;
}
