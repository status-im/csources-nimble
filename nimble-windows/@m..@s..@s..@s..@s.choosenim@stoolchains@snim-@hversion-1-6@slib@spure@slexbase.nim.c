/* Generated by Nim Compiler v1.6.11 */
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
  typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg;
typedef struct RootObj RootObj;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct RootObj {
TNimType* m_type;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
struct tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg {
  RootObj Sup;
NI bufpos;
NimStringDesc* buf;
tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input;
NI lineNumber;
NI sentinel;
NI lineStart;
NI offsetBase;
tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars;
};
typedef N_NIMCALL_PTR(void, tyProc__JQrsH08b4uPTH9cyFPlVOZg) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__9bmhFrLahRsL2hltfRDVtlQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(void, tyProc__3svSoGIUJIsHkaBL7q4DAQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, tyProc__xflqkf2D1uVClg70czEDHA) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NI, tyProc__c9c0f59ak4YGQ6neEym8LPKw) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc** buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__7jFfqMk9ajToCz6Hv9atCA4A) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc** line);
typedef N_NIMCALL_PTR(NI, tyProc__2VVzVL9bOnKhj1eZKkf9cEuA) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
typedef N_NIMCALL_PTR(void, tyProc__ki6p1QyfOkJLQJ9aw5NI0AQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ {
  RootObj Sup;
tyProc__JQrsH08b4uPTH9cyFPlVOZg closeImpl;
tyProc__9bmhFrLahRsL2hltfRDVtlQ atEndImpl;
tyProc__3svSoGIUJIsHkaBL7q4DAQ setPositionImpl;
tyProc__xflqkf2D1uVClg70czEDHA getPositionImpl;
tyProc__c9c0f59ak4YGQ6neEym8LPKw readDataStrImpl;
tyProc__7jFfqMk9ajToCz6Hv9atCA4A readLineImpl;
tyProc__2VVzVL9bOnKhj1eZKkf9cEuA readDataImpl;
tyProc__2VVzVL9bOnKhj1eZKkf9cEuA peekDataImpl;
tyProc__ki6p1QyfOkJLQJ9aw5NI0AQ writeDataImpl;
tyProc__JQrsH08b4uPTH9cyFPlVOZg flushImpl;
};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__systemZassertions_56)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__pureZlexbase_16)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L);
static N_INLINE(void, moveMem__system_1731)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(NI, readDataStr__pureZstreams_81)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc** buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___pureZunicode_842)(NI a, NI b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_2999)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom__pureZlexbase_126)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L);
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__pureZlexbase_74)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, close__pureZstreams_57)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
extern TNimType NTIrootobj__ytyiCJqK439aF9cIibuRVpAg_;
N_LIB_PRIVATE TNimType NTIbaselexer__MAw8rJZtJ279bVV3TWMtXSg_;
extern TNimType NTIint__rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTIstring__77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTIstream__1G0jiQbe7KwD5ADza5AZaw_;
extern TNimType NTIsetLcharT__HDqWPvEAxZK51ZcfaeQEdg_;
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_3, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim(137, 9) `bufLen > 0` ", 95);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_4, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim(138, 9) `input != nil` ", 97);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_7, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim(51, 9) `L.sentinel + 1 <= L.buf.len` ", 111);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_10, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim(53, 9) `toCopy >= 0` ", 95);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_18, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim(75, 13) `s < L.buf.len` ", 98);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_27, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim(107, 9) `L.buf[pos] == \'\\r\'` ", 103);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_29, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim(94, 9) `pos <= L.sentinel` ", 101);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_32, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim(118, 9) `L.buf[pos] == \'\\n\'` ", 103);
extern TFrame* framePtr__system_2566;
extern TFrame* framePtr__system_2566;
extern TFrame* framePtr__system_2566;
extern TFrame* framePtr__system_2566;
extern TFrame* framePtr__system_2566;
extern TFrame* framePtr__system_2566;
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, moveMem__system_1731)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memmove(dest, source, ((size_t) (size)));
}
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
		if (!(framePtr__system_2566 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s).calldepth = ((NI16) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		(*s).calldepth = (NI16)((*framePtr__system_2566).calldepth + ((NI16) 1));
	}
	LA1_: ;
	(*s).prev = framePtr__system_2566;
	framePtr__system_2566 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;
		callDepthLimitReached__system_2999();
	}
	LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__system_2566 = (*framePtr__system_2566).prev;
}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___pureZunicode_842)(NI a, NI b) {
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimfr_("..", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system.nim");
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimln_(512, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system.nim");
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__pureZlexbase_16)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {
	NI charsRead;
	NI toCopy;
	NI s;
	NI oldBufLen;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_8;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_9;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_12;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_13;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_14;
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T13_;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_15;
	nimfr_("fillBuffer", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	charsRead = (NI)0;
	toCopy = (NI)0;
	s = (NI)0;
	oldBufLen = (NI)0;
	nimln_(51, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_6;
		if (nimAddInt((*L).sentinel, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_6)) { raiseOverflow(); };
		if (!!(((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_6) <= ((*L).buf ? (*L).buf->Sup.len : 0)))) goto LA3_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_7));
	}
	LA3_: ;
	nimln_(52, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	if (nimAddInt((*L).sentinel, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_8)) { raiseOverflow(); };
	if (nimSubInt(((*L).buf ? (*L).buf->Sup.len : 0), (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_8), &TM__k6p5NxDJat9aTyZxfZjCDJQ_9)) { raiseOverflow(); };
	toCopy = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_9);
	nimln_(53, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	{
		if (!!((((NI) 0) <= toCopy))) goto LA7_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_10));
	}
	LA7_: ;
	nimln_(54, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_11;
		if (!(((NI) 0) < toCopy)) goto LA11_;
		nimln_(65, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
		if (((NI) 0) < 0 || ((NI) 0) >= ((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(((NI) 0),((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		if (nimAddInt((*L).sentinel, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_11)) { raiseOverflow(); };
		if ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_11) < 0 || (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_11) >= ((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_11),((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		if ((toCopy) < ((NI) 0) || (toCopy) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(toCopy, ((NI) 0), ((NI) IL64(9223372036854775807))); }
		moveMem__system_1731(((void*) ((&(*L).buf->data[((NI) 0)]))), ((void*) ((&(*L).buf->data[(NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_11)]))), ((NI) (toCopy)));
	}
	LA11_: ;
	nimln_(66, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	nimln_(2533, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system.nim");
	nimln_(66, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	if (nimAddInt(toCopy, (*L).sentinel, &TM__k6p5NxDJat9aTyZxfZjCDJQ_12)) { raiseOverflow(); };
	if (nimAddInt((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_12), ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_13)) { raiseOverflow(); };
	if (nimSubInt((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_13), ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_14)) { raiseOverflow(); };
	T13_ = dotdot___pureZunicode_842(toCopy, (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_14));
	charsRead = readDataStr__pureZstreams_81((*L).input, (&(*L).buf), T13_);
	nimln_(67, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	if (nimAddInt(toCopy, charsRead, &TM__k6p5NxDJat9aTyZxfZjCDJQ_15)) { raiseOverflow(); };
	s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_15);
	nimln_(68, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_16;
		if (nimAddInt((*L).sentinel, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_16)) { raiseOverflow(); };
		if (!(charsRead < (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_16))) goto LA16_;
		if (s < 0 || s >= ((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(s,((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		nimln_(69, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
		(*L).buf->data[s] = 0;
		nimln_(70, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
		(*L).sentinel = s;
	}
	goto LA14_;
	LA16_: ;
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_17;
		nimln_(73, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
		if (nimSubInt(s, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_17)) { raiseOverflow(); };
		s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_17);
		{
			nimln_(74, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
			while (1) {
				nimln_(75, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
				{
					if (!!((s < ((*L).buf ? (*L).buf->Sup.len : 0)))) goto LA23_;
					failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_18));
				}
				LA23_: ;
				{
					nimln_(76, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
					while (1) {
						NIM_BOOL T27_;
						NI TM__k6p5NxDJat9aTyZxfZjCDJQ_19;
						T27_ = (NIM_BOOL)0;
						T27_ = (((NI) 0) <= s);
						if (!(T27_)) goto LA28_;
						if (s < 0 || s >= ((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(s,((*L).buf ? (*L).buf->Sup.len : 0)-1); }
						T27_ = !((((*L).refillChars[(NU)(((NU8)((*L).buf->data[s])))>>3] &(1U<<((NU)(((NU8)((*L).buf->data[s])))&7U)))!=0));
						LA28_: ;
						if (!T27_) goto LA26;
						if (nimSubInt(s, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_19)) { raiseOverflow(); };
						s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_19);
					} LA26: ;
				}
				nimln_(77, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
				{
					if (!(((NI) 0) <= s)) goto LA31_;
					nimln_(79, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
					(*L).sentinel = s;
					nimln_(80, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
					goto LA19;
				}
				goto LA29_;
				LA31_: ;
				{
					NI TM__k6p5NxDJat9aTyZxfZjCDJQ_20;
					NI TM__k6p5NxDJat9aTyZxfZjCDJQ_21;
					tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T34_;
					NI TM__k6p5NxDJat9aTyZxfZjCDJQ_24;
					nimln_(84, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
					oldBufLen = ((*L).buf ? (*L).buf->Sup.len : 0);
					nimln_(85, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
					if (nimMulInt(((*L).buf ? (*L).buf->Sup.len : 0), ((NI) 2), &TM__k6p5NxDJat9aTyZxfZjCDJQ_20)) { raiseOverflow(); };
					if (((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_20)) < ((NI) 0) || ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_20)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_20), ((NI) 0), ((NI) IL64(9223372036854775807))); }
					unsureAsgnRef((void**) (&(*L).buf), setLengthStr((*L).buf, ((NI) ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_20)))));
					nimln_(86, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
					nimln_(2533, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system.nim");
					nimln_(86, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
					if (nimSubInt(((*L).buf ? (*L).buf->Sup.len : 0), ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_21)) { raiseOverflow(); };
					T34_ = dotdot___pureZunicode_842(oldBufLen, (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_21));
					charsRead = readDataStr__pureZstreams_81((*L).input, (&(*L).buf), T34_);
					nimln_(87, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
					{
						NI TM__k6p5NxDJat9aTyZxfZjCDJQ_22;
						NI TM__k6p5NxDJat9aTyZxfZjCDJQ_23;
						if (!(charsRead < oldBufLen)) goto LA37_;
						nimln_(88, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
						if (nimAddInt(oldBufLen, charsRead, &TM__k6p5NxDJat9aTyZxfZjCDJQ_22)) { raiseOverflow(); };
						if ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_22) < 0 || (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_22) >= ((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_22),((*L).buf ? (*L).buf->Sup.len : 0)-1); }
						(*L).buf->data[(NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_22)] = 0;
						nimln_(89, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
						if (nimAddInt(oldBufLen, charsRead, &TM__k6p5NxDJat9aTyZxfZjCDJQ_23)) { raiseOverflow(); };
						(*L).sentinel = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_23);
						nimln_(90, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
						goto LA19;
					}
					LA37_: ;
					nimln_(91, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
					if (nimSubInt(((*L).buf ? (*L).buf->Sup.len : 0), ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_24)) { raiseOverflow(); };
					s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_24);
				}
				LA29_: ;
			}
		} LA19: ;
	}
	LA14_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom__pureZlexbase_126)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {
	nimfr_("skipUtf8Bom", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	nimln_(130, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_25;
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_26;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		if (((NI) 0) < 0 || ((NI) 0) >= ((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(((NI) 0),((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		T4_ = ((NU8)((*L).buf->data[((NI) 0)]) == (NU8)(239));
		if (!(T4_)) goto LA5_;
		if (((NI) 1) < 0 || ((NI) 1) >= ((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(((NI) 1),((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		T4_ = ((NU8)((*L).buf->data[((NI) 1)]) == (NU8)(187));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		if (((NI) 2) < 0 || ((NI) 2) >= ((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(((NI) 2),((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		T3_ = ((NU8)((*L).buf->data[((NI) 2)]) == (NU8)(191));
		LA6_: ;
		if (!T3_) goto LA7_;
		nimln_(131, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
		if (nimAddInt((*L).bufpos, ((NI) 3), &TM__k6p5NxDJat9aTyZxfZjCDJQ_25)) { raiseOverflow(); };
		(*L).bufpos = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_25);
		nimln_(132, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
		if (nimAddInt((*L).lineStart, ((NI) 3), &TM__k6p5NxDJat9aTyZxfZjCDJQ_26)) { raiseOverflow(); };
		(*L).lineStart = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_26);
	}
	LA7_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, open__pureZlexbase_136)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input, NI bufLen, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars) {
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_5;
	nimfr_("open", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	nimln_(137, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	{
		if (!!((((NI) 0) < bufLen))) goto LA3_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_3));
	}
	LA3_: ;
	nimln_(138, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	{
		if (!!(!((input == ((tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ*) NIM_NIL))))) goto LA7_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_4));
	}
	LA7_: ;
	nimln_(139, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	unsureAsgnRef((void**) (&(*L).input), input);
	nimln_(140, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	(*L).bufpos = ((NI) 0);
	nimln_(141, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	(*L).offsetBase = ((NI) 0);
	nimln_(142, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	nimCopyMem((void*)(*L).refillChars, (NIM_CONST void*)refillChars, 32);
	nimln_(143, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	if ((bufLen) < ((NI) 0) || (bufLen) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(bufLen, ((NI) 0), ((NI) IL64(9223372036854775807))); }
	unsureAsgnRef((void**) (&(*L).buf), mnewString(((NI) (bufLen))));
	nimln_(144, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	if (nimSubInt(bufLen, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_5)) { raiseOverflow(); };
	(*L).sentinel = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_5);
	nimln_(145, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	(*L).lineStart = ((NI) 0);
	nimln_(146, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	(*L).lineNumber = ((NI) 1);
	nimln_(147, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	fillBuffer__pureZlexbase_16(L);
	nimln_(148, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	skipUtf8Bom__pureZlexbase_126(L);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__pureZlexbase_74)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	nimfr_("fillBaseLexer", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	result = (NI)0;
	nimln_(94, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	{
		if (!!((pos <= (*L).sentinel))) goto LA3_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_29));
	}
	LA3_: ;
	nimln_(95, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_30;
		if (!(pos < (*L).sentinel)) goto LA7_;
		nimln_(96, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
		if (nimAddInt(pos, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_30)) { raiseOverflow(); };
		result = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_30);
	}
	goto LA5_;
	LA7_: ;
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_31;
		nimln_(98, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
		fillBuffer__pureZlexbase_16(L);
		nimln_(99, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
		if (nimAddInt((*L).offsetBase, pos, &TM__k6p5NxDJat9aTyZxfZjCDJQ_31)) { raiseOverflow(); };
		(*L).offsetBase = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_31);
		nimln_(100, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
		(*L).bufpos = ((NI) 0);
		nimln_(101, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
		result = ((NI) 0);
	}
	LA5_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleCR__pureZlexbase_87)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_28;
	nimfr_("handleCR", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	result = (NI)0;
	nimln_(107, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	{
		if (pos < 0 || pos >= ((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(pos,((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		if (!!(((NU8)((*L).buf->data[pos]) == (NU8)(13)))) goto LA3_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_27));
	}
	LA3_: ;
	nimln_(108, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	if (nimAddInt((*L).lineNumber, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_28)) { raiseOverflow(); };
	(*L).lineNumber = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_28);
	nimln_(109, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	result = fillBaseLexer__pureZlexbase_74(L, pos);
	nimln_(110, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	{
		if (result < 0 || result >= ((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(result,((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		if (!((NU8)((*L).buf->data[result]) == (NU8)(10))) goto LA7_;
		nimln_(111, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
		result = fillBaseLexer__pureZlexbase_74(L, result);
	}
	LA7_: ;
	nimln_(112, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	(*L).lineStart = result;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleLF__pureZlexbase_100)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_33;
	nimfr_("handleLF", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	result = (NI)0;
	nimln_(118, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	{
		if (pos < 0 || pos >= ((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(pos,((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		if (!!(((NU8)((*L).buf->data[pos]) == (NU8)(10)))) goto LA3_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_32));
	}
	LA3_: ;
	nimln_(119, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	if (nimAddInt((*L).lineNumber, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_33)) { raiseOverflow(); };
	(*L).lineNumber = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_33);
	nimln_(120, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	result = fillBaseLexer__pureZlexbase_74(L, pos);
	nimln_(121, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	(*L).lineStart = result;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, getColNumber__pureZlexbase_155)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_34;
	nimfr_("getColNumber", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	result = (NI)0;
	nimln_(152, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	if (nimSubInt(pos, (*L).lineStart, &TM__k6p5NxDJat9aTyZxfZjCDJQ_34)) { raiseOverflow(); };
	if ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_34) == (IL64(-9223372036854775807) - IL64(1))){ raiseOverflow(); }
	result = ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_34) > 0? ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_34)) : -((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_34)));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, close__pureZlexbase_14)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {
	nimfr_("close", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	nimln_(41, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/lexbase.nim");
	close__pureZstreams_57((*L).input);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminusathversionminus1minus6atslibatspureatslexbasedotnim_DatInit000)(void) {
static TNimNode* TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[8];
static TNimNode TM__k6p5NxDJat9aTyZxfZjCDJQ_0[9];
NTIbaselexer__MAw8rJZtJ279bVV3TWMtXSg_.size = sizeof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg);
NTIbaselexer__MAw8rJZtJ279bVV3TWMtXSg_.align = NIM_ALIGNOF(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg);
NTIbaselexer__MAw8rJZtJ279bVV3TWMtXSg_.kind = 17;
NTIbaselexer__MAw8rJZtJ279bVV3TWMtXSg_.base = (&NTIrootobj__ytyiCJqK439aF9cIibuRVpAg_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[0] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, bufpos);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].name = "bufpos";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[1] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, buf);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].typ = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].name = "buf";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[2] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, input);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].typ = (&NTIstream__1G0jiQbe7KwD5ADza5AZaw_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].name = "input";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[3] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, lineNumber);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].name = "lineNumber";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[4] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, sentinel);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].name = "sentinel";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[5] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, lineStart);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].name = "lineStart";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[6] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, offsetBase);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].name = "offsetBase";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[7] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, refillChars);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].typ = (&NTIsetLcharT__HDqWPvEAxZK51ZcfaeQEdg_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].name = "refillChars";
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0].len = 8; TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0].kind = 2; TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0].sons = &TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[0];
NTIbaselexer__MAw8rJZtJ279bVV3TWMtXSg_.node = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0];
}

