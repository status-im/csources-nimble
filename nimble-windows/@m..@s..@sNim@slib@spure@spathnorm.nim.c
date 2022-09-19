/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
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
  typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg;
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg {
NI i;
NI prev;
NIM_BOOL notFirst;
};
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__pureZpathnorm_75)(NimStringDesc* x, NimStringDesc** result, NI* state, NIM_CHAR dirSep);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__pureZpathnorm_6)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it, NimStringDesc* x);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_3455)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next__pureZpathnorm_10)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg* it, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash__pureZpathnorm_67)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot__pureZpathnorm_63)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__system_8704)(NimStringDesc* s, NI first, NI last);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot__pureZpathnorm_59)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
STRING_LITERAL(TM__DfU0iuayCGwHDN1Exp9cbKg_21, ".", 1);
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	{
		if (!(framePtr__system_3022 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s).calldepth = ((NI16) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		(*s).calldepth = (NI16)((*framePtr__system_3022).calldepth + ((NI16) 1));
	}
	LA1_: ;
	(*s).prev = framePtr__system_3022;
	framePtr__system_3022 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;
		callDepthLimitReached__system_3455();
	}
	LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__system_3022 = (*framePtr__system_3022).prev;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__pureZpathnorm_6)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it, NimStringDesc* x) {
	NIM_BOOL result;
	nimfr_("hasNext", "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	result = (NIM_BOOL)0;
	nimln_(25, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	result = (it.i < (x ? x->Sup.len : 0));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next__pureZpathnorm_10)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg* it, NimStringDesc* x) {
	tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ result;
	nimfr_("next", "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	nimZeroMem((void*)(&result), sizeof(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ));
	nimln_(28, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	(*it).prev = (*it).i;
	nimln_(29, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	{
		NIM_BOOL T3_;
		NI TM__DfU0iuayCGwHDN1Exp9cbKg_3;
		T3_ = (NIM_BOOL)0;
		T3_ = !((*it).notFirst);
		if (!(T3_)) goto LA4_;
		if ((*it).i < 0 || (*it).i >= (x ? x->Sup.len : 0)){ raiseIndexError2((*it).i,(x ? x->Sup.len : 0)-1); }
		T3_ = (((NU8)(x->data[(*it).i])) == ((NU8)(92)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47)));
		LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(31, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
		if (nimAddInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_3)) { raiseOverflow(); };
		(*it).i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_3);
		nimln_(33, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
		{
			NIM_BOOL T9_;
			NIM_BOOL T10_;
			NIM_BOOL T11_;
			NI TM__DfU0iuayCGwHDN1Exp9cbKg_4;
			NI TM__DfU0iuayCGwHDN1Exp9cbKg_5;
			NI TM__DfU0iuayCGwHDN1Exp9cbKg_6;
			nimln_(34, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
			T9_ = (NIM_BOOL)0;
			nimln_(33, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
			T10_ = (NIM_BOOL)0;
			T11_ = (NIM_BOOL)0;
			T11_ = hasNext__pureZpathnorm_6((*it), x);
			if (!(T11_)) goto LA12_;
			if ((*it).i < 0 || (*it).i >= (x ? x->Sup.len : 0)){ raiseIndexError2((*it).i,(x ? x->Sup.len : 0)-1); }
			T11_ = ((NU8)(x->data[(*it).i]) == (NU8)(92));
			LA12_: ;
			T10_ = T11_;
			if (!(T10_)) goto LA13_;
			nimln_(34, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
			if (nimAddInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_4)) { raiseOverflow(); };
			T10_ = ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_4) < (x ? x->Sup.len : 0));
			LA13_: ;
			T9_ = T10_;
			if (!(T9_)) goto LA14_;
			if (nimAddInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_5)) { raiseOverflow(); };
			if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_5) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_5) >= (x ? x->Sup.len : 0)){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_5),(x ? x->Sup.len : 0)-1); }
			T9_ = !(((NU8)(x->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_5)]) == (NU8)(92)));
			LA14_: ;
			if (!T9_) goto LA15_;
			nimln_(35, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
			if (nimAddInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_6)) { raiseOverflow(); };
			(*it).i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_6);
		}
		LA15_: ;
	}
	goto LA1_;
	LA5_: ;
	{
		{
			nimln_(37, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
			while (1) {
				NIM_BOOL T20_;
				NI TM__DfU0iuayCGwHDN1Exp9cbKg_7;
				T20_ = (NIM_BOOL)0;
				T20_ = ((*it).i < (x ? x->Sup.len : 0));
				if (!(T20_)) goto LA21_;
				if ((*it).i < 0 || (*it).i >= (x ? x->Sup.len : 0)){ raiseIndexError2((*it).i,(x ? x->Sup.len : 0)-1); }
				T20_ = !((((NU8)(x->data[(*it).i])) == ((NU8)(92)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47))));
				LA21_: ;
				if (!T20_) goto LA19;
				if (nimAddInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_7)) { raiseOverflow(); };
				(*it).i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_7);
			} LA19: ;
		}
	}
	LA1_: ;
	nimln_(38, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	{
		NI colontmp_;
		NI colontmp__2;
		NI TM__DfU0iuayCGwHDN1Exp9cbKg_8;
		if (!((*it).prev < (*it).i)) goto LA24_;
		nimln_(39, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
		colontmp_ = (*it).prev;
		if (nimSubInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_8)) { raiseOverflow(); };
		colontmp__2 = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_8);
		result.Field0 = colontmp_;
		result.Field1 = colontmp__2;
	}
	goto LA22_;
	LA24_: ;
	{
		NIM_BOOL T27_;
		nimln_(40, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
		T27_ = (NIM_BOOL)0;
		T27_ = hasNext__pureZpathnorm_6((*it), x);
		if (!T27_) goto LA28_;
		nimln_(41, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
		result = next__pureZpathnorm_10(it, x);
	}
	goto LA22_;
	LA28_: ;
	LA22_: ;
	{
		nimln_(43, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
		while (1) {
			NIM_BOOL T32_;
			NI TM__DfU0iuayCGwHDN1Exp9cbKg_9;
			T32_ = (NIM_BOOL)0;
			T32_ = ((*it).i < (x ? x->Sup.len : 0));
			if (!(T32_)) goto LA33_;
			if ((*it).i < 0 || (*it).i >= (x ? x->Sup.len : 0)){ raiseIndexError2((*it).i,(x ? x->Sup.len : 0)-1); }
			T32_ = (((NU8)(x->data[(*it).i])) == ((NU8)(92)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47)));
			LA33_: ;
			if (!T32_) goto LA31;
			if (nimAddInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_9)) { raiseOverflow(); };
			(*it).i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_9);
		} LA31: ;
	}
	nimln_(44, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	(*it).notFirst = NIM_TRUE;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash__pureZpathnorm_67)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	nimfr_("isSlash", "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	result = (NIM_BOOL)0;
	nimln_(57, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds.Field1 == bounds.Field0);
	if (!(T1_)) goto LA2_;
	if (bounds.Field0 < 0 || bounds.Field0 >= (x ? x->Sup.len : 0)){ raiseIndexError2(bounds.Field0,(x ? x->Sup.len : 0)-1); }
	T1_ = (((NU8)(x->data[bounds.Field0])) == ((NU8)(92)) || ((NU8)(x->data[bounds.Field0])) == ((NU8)(47)));
	LA2_: ;
	result = T1_;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot__pureZpathnorm_63)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	NI TM__DfU0iuayCGwHDN1Exp9cbKg_11;
	NI TM__DfU0iuayCGwHDN1Exp9cbKg_12;
	nimfr_("isDotDot", "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	result = (NIM_BOOL)0;
	nimln_(54, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	if (nimAddInt(bounds.Field0, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_11)) { raiseOverflow(); };
	T2_ = (bounds.Field1 == (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_11));
	if (!(T2_)) goto LA3_;
	if (bounds.Field0 < 0 || bounds.Field0 >= (x ? x->Sup.len : 0)){ raiseIndexError2(bounds.Field0,(x ? x->Sup.len : 0)-1); }
	T2_ = ((NU8)(x->data[bounds.Field0]) == (NU8)(46));
	LA3_: ;
	T1_ = T2_;
	if (!(T1_)) goto LA4_;
	if (nimAddInt(bounds.Field0, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_12)) { raiseOverflow(); };
	if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_12) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_12) >= (x ? x->Sup.len : 0)){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_12),(x ? x->Sup.len : 0)-1); }
	T1_ = ((NU8)(x->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_12)]) == (NU8)(46));
	LA4_: ;
	result = T1_;
	popFrame();
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == ((NimStringDesc*) NIM_NIL)))) goto LA3_;
		copyMem__system_1727(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot__pureZpathnorm_59)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	nimfr_("isDot", "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	result = (NIM_BOOL)0;
	nimln_(51, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds.Field1 == bounds.Field0);
	if (!(T1_)) goto LA2_;
	if (bounds.Field0 < 0 || bounds.Field0 >= (x ? x->Sup.len : 0)){ raiseIndexError2(bounds.Field0,(x ? x->Sup.len : 0)-1); }
	T1_ = ((NU8)(x->data[bounds.Field0]) == (NU8)(46));
	LA2_: ;
	result = T1_;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__pureZpathnorm_75)(NimStringDesc* x, NimStringDesc** result, NI* state, NIM_CHAR dirSep) {
	tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it;
	nimfr_("addNormalizePath", "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	nimZeroMem((void*)(&it), sizeof(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg));
	nimln_(66, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	it.notFirst = (((NI) 0) < (NI)((NI64)((*state)) >> (NU64)(((NI) 1))));
	nimln_(67, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	{
		if (!it.notFirst) goto LA3_;
		{
			nimln_(68, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
			while (1) {
				NIM_BOOL T7_;
				NI TM__DfU0iuayCGwHDN1Exp9cbKg_2;
				T7_ = (NIM_BOOL)0;
				T7_ = (it.i < (x ? x->Sup.len : 0));
				if (!(T7_)) goto LA8_;
				if (it.i < 0 || it.i >= (x ? x->Sup.len : 0)){ raiseIndexError2(it.i,(x ? x->Sup.len : 0)-1); }
				T7_ = (((NU8)(x->data[it.i])) == ((NU8)(92)) || ((NU8)(x->data[it.i])) == ((NU8)(47)));
				LA8_: ;
				if (!T7_) goto LA6;
				if (nimAddInt(it.i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_2)) { raiseOverflow(); };
				it.i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_2);
			} LA6: ;
		}
	}
	LA3_: ;
	{
		nimln_(69, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
		while (1) {
			NIM_BOOL T11_;
			tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ b;
			T11_ = (NIM_BOOL)0;
			T11_ = hasNext__pureZpathnorm_6(it, x);
			if (!T11_) goto LA10;
			nimln_(70, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
			b = next__pureZpathnorm_10((&it), x);
			nimln_(71, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
			{
				NIM_BOOL T14_;
				T14_ = (NIM_BOOL)0;
				T14_ = ((NI)((NI64)((*state)) >> (NU64)(((NI) 1))) == ((NI) 0));
				if (!(T14_)) goto LA15_;
				T14_ = isSlash__pureZpathnorm_67(x, b);
				LA15_: ;
				if (!T14_) goto LA16_;
				nimln_(72, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
				{
					NIM_BOOL T20_;
					NI TM__DfU0iuayCGwHDN1Exp9cbKg_10;
					T20_ = (NIM_BOOL)0;
					T20_ = (((*result) ? (*result)->Sup.len : 0) == ((NI) 0));
					if (T20_) goto LA21_;
					if (nimSubInt(((*result) ? (*result)->Sup.len : 0), ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_10)) { raiseOverflow(); };
					if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_10) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_10) >= ((*result) ? (*result)->Sup.len : 0)){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_10),((*result) ? (*result)->Sup.len : 0)-1); }
					T20_ = !((((NU8)((*result)->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_10)])) == ((NU8)(92)) || ((NU8)((*result)->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_10)])) == ((NU8)(47))));
					LA21_: ;
					if (!T20_) goto LA22_;
					nimln_(73, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
					unsureAsgnRef((void**) (&(*result)), addChar((*result), dirSep));
				}
				LA22_: ;
				nimln_(74, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
				(*state) = (NI)((*state) | ((NI) 1));
			}
			goto LA12_;
			LA16_: ;
			{
				NIM_BOOL T25_;
				nimln_(75, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
				T25_ = (NIM_BOOL)0;
				T25_ = isDotDot__pureZpathnorm_63(x, b);
				if (!T25_) goto LA26_;
				nimln_(76, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
				{
					NI d;
					if (!(((NI) 1) <= (NI)((NI64)((*state)) >> (NU64)(((NI) 1))))) goto LA30_;
					nimln_(77, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
					d = ((*result) ? (*result)->Sup.len : 0);
					{
						nimln_(84, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
						while (1) {
							NIM_BOOL T34_;
							NI TM__DfU0iuayCGwHDN1Exp9cbKg_13;
							NI TM__DfU0iuayCGwHDN1Exp9cbKg_14;
							NI TM__DfU0iuayCGwHDN1Exp9cbKg_15;
							T34_ = (NIM_BOOL)0;
							if (nimSubInt(d, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_13)) { raiseOverflow(); };
							T34_ = ((NI)((*state) & ((NI) 1)) < (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13));
							if (!(T34_)) goto LA35_;
							if (nimSubInt(d, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_14)) { raiseOverflow(); };
							if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_14) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_14) >= ((*result) ? (*result)->Sup.len : 0)){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_14),((*result) ? (*result)->Sup.len : 0)-1); }
							T34_ = !((((NU8)((*result)->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_14)])) == ((NU8)(92)) || ((NU8)((*result)->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_14)])) == ((NU8)(47))));
							LA35_: ;
							if (!T34_) goto LA33;
							nimln_(85, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
							if (nimSubInt(d, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_15)) { raiseOverflow(); };
							d = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_15);
						} LA33: ;
					}
					nimln_(86, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
					{
						NI TM__DfU0iuayCGwHDN1Exp9cbKg_16;
						NI TM__DfU0iuayCGwHDN1Exp9cbKg_17;
						if (!(((NI) 0) < d)) goto LA38_;
						nimln_(87, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
						if (nimSubInt(d, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_16)) { raiseOverflow(); };
						if (((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_16)) < ((NI) 0) || ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_16)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_16), ((NI) 0), ((NI) IL64(9223372036854775807))); }
						unsureAsgnRef((void**) (&(*result)), setLengthStr((*result), ((NI) ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_16)))));
						nimln_(88, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
						if (nimSubInt((*state), ((NI) 2), &TM__DfU0iuayCGwHDN1Exp9cbKg_17)) { raiseOverflow(); };
						(*state) = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_17);
					}
					LA38_: ;
				}
				goto LA28_;
				LA30_: ;
				{
					NimStringDesc* T47_;
					nimln_(90, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
					{
						NIM_BOOL T43_;
						NI TM__DfU0iuayCGwHDN1Exp9cbKg_18;
						T43_ = (NIM_BOOL)0;
						T43_ = (((NI) 0) < ((*result) ? (*result)->Sup.len : 0));
						if (!(T43_)) goto LA44_;
						if (nimSubInt(((*result) ? (*result)->Sup.len : 0), ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_18)) { raiseOverflow(); };
						if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_18) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_18) >= ((*result) ? (*result)->Sup.len : 0)){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_18),((*result) ? (*result)->Sup.len : 0)-1); }
						T43_ = !((((NU8)((*result)->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_18)])) == ((NU8)(92)) || ((NU8)((*result)->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_18)])) == ((NU8)(47))));
						LA44_: ;
						if (!T43_) goto LA45_;
						nimln_(91, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
						unsureAsgnRef((void**) (&(*result)), addChar((*result), dirSep));
					}
					LA45_: ;
					nimln_(92, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
					T47_ = NIM_NIL;
					T47_ = substr__system_8704(x, b.Field0, b.Field1);
					unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T47_ ? T47_->Sup.len : 0) + 0));
appendString((*result), T47_);
				}
				LA28_: ;
			}
			goto LA12_;
			LA26_: ;
			{
				NIM_BOOL T49_;
				nimln_(93, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
				T49_ = (NIM_BOOL)0;
				T49_ = isDot__pureZpathnorm_59(x, b);
				if (!T49_) goto LA50_;
			}
			goto LA12_;
			LA50_: ;
			{
				NimStringDesc* T61_;
				NI TM__DfU0iuayCGwHDN1Exp9cbKg_20;
				nimln_(95, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
				if (!(b.Field0 <= b.Field1)) goto LA53_;
				nimln_(96, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
				{
					NIM_BOOL T57_;
					NI TM__DfU0iuayCGwHDN1Exp9cbKg_19;
					T57_ = (NIM_BOOL)0;
					T57_ = (((NI) 0) < ((*result) ? (*result)->Sup.len : 0));
					if (!(T57_)) goto LA58_;
					if (nimSubInt(((*result) ? (*result)->Sup.len : 0), ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_19)) { raiseOverflow(); };
					if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_19) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_19) >= ((*result) ? (*result)->Sup.len : 0)){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_19),((*result) ? (*result)->Sup.len : 0)-1); }
					T57_ = !((((NU8)((*result)->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_19)])) == ((NU8)(92)) || ((NU8)((*result)->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_19)])) == ((NU8)(47))));
					LA58_: ;
					if (!T57_) goto LA59_;
					nimln_(97, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
					unsureAsgnRef((void**) (&(*result)), addChar((*result), dirSep));
				}
				LA59_: ;
				nimln_(98, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
				T61_ = NIM_NIL;
				T61_ = substr__system_8704(x, b.Field0, b.Field1);
				unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T61_ ? T61_->Sup.len : 0) + 0));
appendString((*result), T61_);
				nimln_(99, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
				if (nimAddInt((*state), ((NI) 2), &TM__DfU0iuayCGwHDN1Exp9cbKg_20)) { raiseOverflow(); };
				(*state) = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_20);
			}
			goto LA12_;
			LA53_: ;
			LA12_: ;
		} LA10: ;
	}
	nimln_(100, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	{
		NIM_BOOL T64_;
		T64_ = (NIM_BOOL)0;
		T64_ = (((*result) ? (*result)->Sup.len : 0) == 0);
		if (!(T64_)) goto LA65_;
		T64_ = !(((x ? x->Sup.len : 0) == 0));
		LA65_: ;
		if (!T64_) goto LA66_;
		unsureAsgnRef((void**) (&(*result)), copyString(((NimStringDesc*) &TM__DfU0iuayCGwHDN1Exp9cbKg_21)));
	}
	LA66_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, normalizePath__pureZpathnorm_131)(NimStringDesc* path, NIM_CHAR dirSep) {
	NimStringDesc* result;
	NI state;
	nimfr_("normalizePath", "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	result = NIM_NIL;
	nimln_(110, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	if (((path ? path->Sup.len : 0)) < ((NI) 0) || ((path ? path->Sup.len : 0)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((path ? path->Sup.len : 0), ((NI) 0), ((NI) IL64(9223372036854775807))); }
	result = rawNewString(((NI) ((path ? path->Sup.len : 0))));
	nimln_(111, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	state = ((NI) 0);
	nimln_(112, "/home/yyoncho/Sources/nim/Nim/lib/pure/pathnorm.nim");
	addNormalizePath__pureZpathnorm_75(path, (&result), (&state), dirSep);
	popFrame();
	return result;
}
