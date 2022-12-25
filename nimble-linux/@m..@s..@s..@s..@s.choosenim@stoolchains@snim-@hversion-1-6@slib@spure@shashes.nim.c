/* Generated by Nim Compiler v1.6.11 */
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
  typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
static N_INLINE(NI, emarkamp___pureZhashes_3)(NI h, NI val);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_2997)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_279)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NI, murmurHash__pureZhashes_192)(NU8* x, NI xLen_0);
N_LIB_PRIVATE N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NIM_BOOL, nimDivInt)(NI a, NI b, NI* res);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(NU32, rotl32__pureZhashes_180)(NU32 x, NI r);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, emarkdollar___pureZhashes_18)(NI h);
N_LIB_PRIVATE N_NIMCALL(NI, hash__nimblepkgZpaths_54)(NimStringDesc* path);
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
static N_INLINE(void, nimFrame)(TFrame* s) {
	{
		if (!(framePtr__system_2564 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s).calldepth = ((NI16) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		(*s).calldepth = (NI16)((*framePtr__system_2564).calldepth + ((NI16) 1));
	}
	LA1_: ;
	(*s).prev = framePtr__system_2564;
	framePtr__system_2564 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;
		callDepthLimitReached__system_2997();
	}
	LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__system_2564 = (*framePtr__system_2564).prev;
}
static N_INLINE(NI, emarkamp___pureZhashes_3)(NI h, NI val) {
	NI result;
	NU h_2;
	NU val_2;
	NU res;
	nimfr_("!&", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	result = (NI)0;
	nimln_(79, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	h_2 = ((NU) (h));
	nimln_(80, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	val_2 = ((NU) (val));
	nimln_(81, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	res = (NU)((NU64)(h_2) + (NU64)(val_2));
	nimln_(82, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	res = (NU)((NU64)(res) + (NU64)((NU)((NU64)(res) << (NU64)(((NI) 10)))));
	nimln_(83, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	res = (NU)(res ^ (NU)((NU64)(res) >> (NU64)(((NI) 6))));
	nimln_(84, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	result = ((NI) (res));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, nimDivInt)(NI a, NI b, NI* res) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(T3_)) goto LA4_;
		T3_ = (b == ((NI) -1));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA5_: ;
	{
		(*res) = (NI)(a / b);
	}
	LA1_: ;
	return result;
}
static N_INLINE(NU32, rotl32__pureZhashes_180)(NU32 x, NI r) {
	NU32 result;
	NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_5;
	nimfr_("rotl32", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	result = (NU32)0;
	nimln_(300, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	if (nimSubInt(((NI) 32), r, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_5)) { raiseOverflow(); };
	result = (NU32)((NU32)((NU64)(x) << (NU64)(r)) | (NU32)((NU32)(x) >> (NU64)((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_5))));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, murmurHash__pureZhashes_192)(NU8* x, NI xLen_0) {
	NI result;
	NI size;
	NI stepSize;
	NI n;
	NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_2;
	NU32 h1;
	NI i;
	NU32 k1_2;
	NI rem;
	NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_6;
	nimfr_("murmurHash", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
{	result = (NI)0;
	nimln_(311, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	size = xLen_0;
	nimln_(312, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	stepSize = ((NI) 4);
	nimln_(313, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	if (stepSize == 0){ raiseDivByZero(); }
	if (nimDivInt(size, stepSize, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_2)) { raiseOverflow(); };
	n = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_2);
	h1 = (NU32)0;
	nimln_(316, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	i = ((NI) 0);
	{
		nimln_(319, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
		while (1) {
			NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_3;
			NU32 k1;
			NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_4;
			if (nimMulInt(n, stepSize, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_3)) { raiseOverflow(); };
			if (!(i < (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_3))) goto LA2;
			k1 = (NU32)0;
			nimln_(327, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
			if (i < 0 || i >= xLen_0){ raiseIndexError2(i,xLen_0-1); }
			k1 = (*((NU32*) ((&x[i]))));
			nimln_(328, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
			if (nimAddInt(i, stepSize, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_4)) { raiseOverflow(); };
			i = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_4);
			nimln_(330, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
			k1 = (NU32)((NU32)(k1) * (NU32)(((NU32) IL64(3432918353))));
			nimln_(331, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
			k1 = rotl32__pureZhashes_180(k1, ((NI) 15));
			nimln_(332, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
			k1 = (NU32)((NU32)(k1) * (NU32)(((NU32) 461845907)));
			nimln_(334, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
			h1 = (NU32)(h1 ^ k1);
			nimln_(335, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
			h1 = rotl32__pureZhashes_180(h1, ((NI) 13));
			nimln_(336, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
			h1 = (NU32)((NU32)((NU32)((NU32)(h1) * (NU32)(((NU32) 5)))) + (NU32)(((NU32) IL64(3864292196))));
		} LA2: ;
	}
	k1_2 = (NU32)0;
	nimln_(340, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	if (stepSize == 0){ raiseDivByZero(); }
	if (nimModInt(size, stepSize, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_6)) { raiseOverflow(); };
	rem = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_6);
	{
		nimln_(341, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
		while (1) {
			NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_7;
			NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_8;
			if (!(((NI) 0) < rem)) goto LA4;
			nimln_(342, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
			if (nimSubInt(rem, ((NI) 1), &TM__7tkD9cFJSchVDwHuwaY9bP9bA_7)) { raiseOverflow(); };
			rem = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_7);
			nimln_(343, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
			if (nimAddInt(i, rem, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_8)) { raiseOverflow(); };
			if ((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_8) < 0 || (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_8) >= xLen_0){ raiseIndexError2((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_8),xLen_0-1); }
			k1_2 = (NU32)((NU32)((NU64)(k1_2) << (NU64)(((NI) 8))) | ((NU32) (x[(NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_8)])));
		} LA4: ;
	}
	nimln_(344, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	k1_2 = (NU32)((NU32)(k1_2) * (NU32)(((NU32) IL64(3432918353))));
	nimln_(345, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	k1_2 = rotl32__pureZhashes_180(k1_2, ((NI) 15));
	nimln_(346, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	k1_2 = (NU32)((NU32)(k1_2) * (NU32)(((NU32) 461845907)));
	nimln_(347, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	h1 = (NU32)(h1 ^ k1_2);
	nimln_(350, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	h1 = (NU32)(h1 ^ ((NU32) (size)));
	nimln_(351, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU64)(((NI) 16))));
	nimln_(352, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	h1 = (NU32)((NU32)(h1) * (NU32)(((NU32) IL64(2246822507))));
	nimln_(353, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU64)(((NI) 13))));
	nimln_(354, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	h1 = (NU32)((NU32)(h1) * (NU32)(((NU32) IL64(3266489909))));
	nimln_(355, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU64)(((NI) 16))));
	nimln_(356, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	result = ((NI) (h1));
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_279)(NimStringDesc* x) {
	NI result;
	nimfr_("hash", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	result = (NI)0;
	nimln_(388, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	if (((x ? x->Sup.len : 0)-1)-((NI) 0) != -1 && (((NI) 0) < 0 || ((NI) 0) >= (x ? x->Sup.len : 0) || ((x ? x->Sup.len : 0)-1) < 0 || ((x ? x->Sup.len : 0)-1) >= (x ? x->Sup.len : 0))){ raiseIndexError(); }
	result = murmurHash__pureZhashes_192(((x) ? ((NU8*)x->data+(((NI) 0))) : NIM_NIL), (((x ? x->Sup.len : 0)-1))-(((NI) 0))+1);
	popFrame();
	return result;
}
static N_INLINE(NI, emarkdollar___pureZhashes_18)(NI h) {
	NI result;
	NU h_2;
	NU res;
	nimfr_("!$", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	result = (NI)0;
	nimln_(90, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	h_2 = ((NU) (h));
	nimln_(91, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	res = (NU)((NU64)(h_2) + (NU64)((NU)((NU64)(h_2) << (NU64)(((NI) 3)))));
	nimln_(92, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	res = (NU)(res ^ (NU)((NU64)(res) >> (NU64)(((NI) 11))));
	nimln_(93, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	res = (NU)((NU64)(res) + (NU64)((NU)((NU64)(res) << (NU64)(((NI) 15)))));
	nimln_(94, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	result = ((NI) (res));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__nimblepkgZcli_200)(tyTuple__UV3llMMYFckfui8YMBuUZA x) {
	NI result;
	NI T1_;
	NI T2_;
	nimfr_("hash", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	result = (NI)0;
	nimln_(556, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	T1_ = (NI)0;
	T1_ = hash__pureZhashes_279(x.Field0);
	result = emarkamp___pureZhashes_3(result, T1_);
	T2_ = (NI)0;
	T2_ = hash__pureZhashes_279(x.Field1);
	result = emarkamp___pureZhashes_3(result, T2_);
	nimln_(557, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	result = emarkdollar___pureZhashes_18(result);
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__nimblepkgZdevelopfile_14103)(tyTuple__UV3llMMYFckfui8YMBuUZA x) {
	NI result;
	NI T1_;
	NI T2_;
	nimfr_("hash", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	result = (NI)0;
	nimln_(556, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	T1_ = (NI)0;
	T1_ = hash__nimblepkgZpaths_54(x.Field0);
	result = emarkamp___pureZhashes_3(result, T1_);
	T2_ = (NI)0;
	T2_ = hash__nimblepkgZpaths_54(x.Field1);
	result = emarkamp___pureZhashes_3(result, T2_);
	nimln_(557, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/hashes.nim");
	result = emarkdollar___pureZhashes_18(result);
	popFrame();
	return result;
}