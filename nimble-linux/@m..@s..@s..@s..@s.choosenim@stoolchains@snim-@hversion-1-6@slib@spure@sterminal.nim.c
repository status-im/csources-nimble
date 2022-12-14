/* Generated by Nim Compiler v1.6.11 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
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
  typedef struct tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og {
NIM_BOOL trueColorIsSupported;
NIM_BOOL trueColorIsEnabled;
NIM_BOOL fgSetColor;
};
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
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef NU8 tyEnum_ForegroundColor__ez9ah4IgQc0AbdW68acioDg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU16 tySet_tyEnum_Style__NXKayqTLMsAibFwNceBlpA;
typedef NU8 tyEnum_Style__NXKayqTLMsAibFwNceBlpA;
typedef unsigned char tyArray__wo9atxlj1CQKWeAypuYX9cIg[32];
static N_NIMCALL(void, Marker_tyRef__flNJLrANZti6Wiy5LTlGGA)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM__CN3raB9atujkEiPpxYAdlgQ_3)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, write__systemZio_205)(FILE* f, NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, ansiStyleCode__pureZterminal_278)(NI style);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, formatValue__pureZstrformat_162)(NimStringDesc** result, NimStringDesc* value, NimStringDesc* specifier);
N_LIB_PRIVATE N_NIMCALL(void, formatValue__pureZterminal_155)(NimStringDesc** result, NI value, NimStringDesc* specifier);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_2997)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, setStyle__pureZterminal_296)(FILE* f, tySet_tyEnum_Style__NXKayqTLMsAibFwNceBlpA style);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(void, resetAttributes__pureZterminal_263)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__systemZio_228)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___systemZdollars_3)(NI x);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, setRaw__pureZterminal_34)(int fd_0, int time);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, readChar__systemZio_222)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, setCursorXPos__pureZterminal_202)(FILE* f, NI x);
N_LIB_PRIVATE TNimType NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_;
extern TNimType NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_;
N_LIB_PRIVATE TNimType NTIpterminal__flNJLrANZti6Wiy5LTlGGA_;
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_5, "\033[", 2);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_6, "m", 1);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_8, "\033[0m", 4);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_9, "C", 1);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_10, "\033[\?25l", 6);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_11, "D", 1);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_12, "B", 1);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_13, "\033[\?25h", 6);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_14, "\033[2K", 4);
STRING_LITERAL(TM__CN3raB9atujkEiPpxYAdlgQ_16, "G", 1);
N_LIB_PRIVATE tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* gTerm__pureZterminal_10;
N_LIB_PRIVATE NI gFG__pureZterminal_261;
N_LIB_PRIVATE NI gBG__pureZterminal_262;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
static N_NIMCALL(void, Marker_tyRef__flNJLrANZti6Wiy5LTlGGA)(void* p, NI op) {
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* a;
	a = (tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*)p;
}
static N_NIMCALL(void, TM__CN3raB9atujkEiPpxYAdlgQ_3)(void) {
	nimGCvisit((void*)gTerm__pureZterminal_10, 0);
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, ansiStyleCode__pureZterminal_278)(NI style) {
	NimStringDesc* result;
	NimStringDesc* fmtRes;
	nimfr_("ansiStyleCode", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	result = NIM_NIL;
	nimln_(540, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(583, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/strformat.nim");
	nimln_(540, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	fmtRes = rawNewString(((NI) 41));
	formatValue__pureZstrformat_162((&fmtRes), ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_5), ((NimStringDesc*) NIM_NIL));
	formatValue__pureZterminal_155((&fmtRes), style, ((NimStringDesc*) NIM_NIL));
	fmtRes = resizeString(fmtRes, 1);
appendString(fmtRes, ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_6));
	result = copyString(fmtRes);
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, setForegroundColor__pureZterminal_370)(FILE* f, tyEnum_ForegroundColor__ez9ah4IgQc0AbdW68acioDg fg, NIM_BOOL bright) {
	NimStringDesc* T5_;
	nimfr_("setForegroundColor", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(634, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	gFG__pureZterminal_261 = fg;
	nimln_(635, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	{
		NI TM__CN3raB9atujkEiPpxYAdlgQ_4;
		if (!bright) goto LA3_;
		if (nimAddInt(gFG__pureZterminal_261, ((NI) 60), &TM__CN3raB9atujkEiPpxYAdlgQ_4)) { raiseOverflow(); };
		gFG__pureZterminal_261 = (NI)(TM__CN3raB9atujkEiPpxYAdlgQ_4);
	}
	LA3_: ;
	nimln_(636, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	T5_ = NIM_NIL;
	T5_ = ansiStyleCode__pureZterminal_278(gFG__pureZterminal_261);
	write__systemZio_205(f, T5_);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, setStyle__pureZterminal_296)(FILE* f, tySet_tyEnum_Style__NXKayqTLMsAibFwNceBlpA style) {
	nimfr_("setStyle", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	{
		tyEnum_Style__NXKayqTLMsAibFwNceBlpA s;
		NI i;
		s = (tyEnum_Style__NXKayqTLMsAibFwNceBlpA)0;
		nimln_(52, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system/iterators.nim");
		i = ((NI) 1);
		{
			nimln_(53, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system/iterators.nim");
			while (1) {
				NI TM__CN3raB9atujkEiPpxYAdlgQ_7;
				if (!(i <= ((NI) 9))) goto LA3;
				nimln_(54, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system/iterators.nim");
				{
					NimStringDesc* T8_;
					if ((i) < ((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) 1) || (i) > ((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) 9)){ raiseRangeErrorI(i, ((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) 1), ((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) 9)); }
					if (!((style &((NU16)1<<((NU)((((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) (i))- 1))&15U)))!=0)) goto LA6_;
					nimln_(561, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
					if ((i) < ((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) 1) || (i) > ((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) 9)){ raiseRangeErrorI(i, ((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) 1), ((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) 9)); }
					s = ((tyEnum_Style__NXKayqTLMsAibFwNceBlpA) (i));
					T8_ = NIM_NIL;
					T8_ = ansiStyleCode__pureZterminal_278(((NI) (s)));
					write__systemZio_205(f, T8_);
				}
				LA6_: ;
				nimln_(55, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system/iterators.nim");
				if (nimAddInt(i, ((NI) 1), &TM__CN3raB9atujkEiPpxYAdlgQ_7)) { raiseOverflow(); };
				i = (NI)(TM__CN3raB9atujkEiPpxYAdlgQ_7);
			} LA3: ;
		}
	}
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, resetAttributes__pureZterminal_263)(FILE* f) {
	nimfr_("resetAttributes", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(523, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	write__systemZio_205(f, ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_8));
	nimln_(524, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	gFG__pureZterminal_261 = ((NI) 0);
	nimln_(525, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	gBG__pureZterminal_262 = ((NI) 0);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, writeStyled__pureZterminal_339)(NimStringDesc* txt, tySet_tyEnum_Style__NXKayqTLMsAibFwNceBlpA style) {
	nimfr_("writeStyled", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(573, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	setStyle__pureZterminal_296(stdout, style);
	nimln_(574, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	write__systemZio_205(stdout, txt);
	nimln_(575, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	resetAttributes__pureZterminal_263(stdout);
	nimln_(576, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	{
		NimStringDesc* T5_;
		if (!!((gFG__pureZterminal_261 == ((NI) 0)))) goto LA3_;
		nimln_(577, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
		T5_ = NIM_NIL;
		T5_ = ansiStyleCode__pureZterminal_278(gFG__pureZterminal_261);
		write__systemZio_205(stdout, T5_);
	}
	LA3_: ;
	nimln_(578, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	{
		NimStringDesc* T10_;
		if (!!((gBG__pureZterminal_262 == ((NI) 0)))) goto LA8_;
		nimln_(579, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
		T10_ = NIM_NIL;
		T10_ = ansiStyleCode__pureZterminal_278(gBG__pureZterminal_262);
		write__systemZio_205(stdout, T10_);
	}
	LA8_: ;
	popFrame();
}
N_LIB_PRIVATE N_NOCONV(void, resetAttributes__pureZterminal_603)(void) {
	nimfr_("resetAttributes", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(882, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	resetAttributes__pureZterminal_263(stdout);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isatty__pureZterminal_485)(FILE* f) {
	NIM_BOOL result;
	int T1_;
	int T2_;
	nimfr_("isatty", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	result = (NIM_BOOL)0;
	nimln_(720, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	T1_ = (int)0;
	T1_ = getFileHandle__systemZio_228(f);
	T2_ = (int)0;
	T2_ = isatty(T1_);
	result = !((T2_ == ((NI32) 0)));
	popFrame();
	return result;
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[(*dest).Sup.len] = c;
	(*dest).data[(NI)((*dest).Sup.len + ((NI) 1))] = 0;
	(*dest).Sup.len += ((NI) 1);
}
N_LIB_PRIVATE N_NIMCALL(void, cursorUp__pureZterminal_215)(FILE* f, NI count) {
	NimStringDesc* T1_;
	NimStringDesc* T2_;
	nimfr_("cursorUp", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(398, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	T1_ = NIM_NIL;
	T2_ = NIM_NIL;
	T2_ = dollar___systemZdollars_3(count);
	T1_ = rawNewString((T2_ ? T2_->Sup.len : 0) + 3);
appendString(T1_, ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_5));
appendString(T1_, T2_);
appendChar(T1_, 65);
	write__systemZio_205(f, T1_);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, cursorForward__pureZterminal_231)(FILE* f, NI count) {
	NimStringDesc* fmtRes;
	nimfr_("cursorForward", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(418, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(583, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/strformat.nim");
	nimln_(418, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	fmtRes = rawNewString(((NI) 41));
	formatValue__pureZstrformat_162((&fmtRes), ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_5), ((NimStringDesc*) NIM_NIL));
	formatValue__pureZterminal_155((&fmtRes), count, ((NimStringDesc*) NIM_NIL));
	fmtRes = resizeString(fmtRes, 1);
appendString(fmtRes, ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_9));
	write__systemZio_205(f, fmtRes);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, hideCursor__pureZterminal_142)(FILE* f) {
	nimfr_("hideCursor", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(340, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	write__systemZio_205(f, ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_10));
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, cursorBackward__pureZterminal_244)(FILE* f, NI count) {
	NimStringDesc* fmtRes;
	nimfr_("cursorBackward", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(428, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(583, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/strformat.nim");
	nimln_(428, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	fmtRes = rawNewString(((NI) 41));
	formatValue__pureZstrformat_162((&fmtRes), ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_5), ((NimStringDesc*) NIM_NIL));
	formatValue__pureZterminal_155((&fmtRes), count, ((NimStringDesc*) NIM_NIL));
	fmtRes = resizeString(fmtRes, 1);
appendString(fmtRes, ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_11));
	write__systemZio_205(f, fmtRes);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, cursorDown__pureZterminal_218)(FILE* f, NI count) {
	NimStringDesc* fmtRes;
	nimfr_("cursorDown", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(408, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(583, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/strformat.nim");
	nimln_(408, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	fmtRes = rawNewString(((NI) 41));
	formatValue__pureZstrformat_162((&fmtRes), ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_5), ((NimStringDesc*) NIM_NIL));
	formatValue__pureZterminal_155((&fmtRes), count, ((NimStringDesc*) NIM_NIL));
	fmtRes = resizeString(fmtRes, 1);
appendString(fmtRes, ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_12));
	write__systemZio_205(f, fmtRes);
	popFrame();
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(void, setRaw__pureZterminal_34)(int fd_0, int time) {
	struct termios mode;
	int T1_;
	int T2_;
	nimfr_("setRaw", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimZeroMem((void*)(&mode), sizeof(struct termios));
	nimln_(255, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	T1_ = (int)0;
	T1_ = tcgetattr(fd_0, (&mode));
	(void)(T1_);
	nimln_(256, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(257, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(256, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	mode.c_iflag = (NU32)(mode.c_iflag & (NU32)((NU32) ~((NU32)((NU32)((NU32)((NU32)(BRKINT | ICRNL) | INPCK) | ISTRIP) | IXON))));
	nimln_(258, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	mode.c_oflag = (NU32)(mode.c_oflag & (NU32)((NU32) ~(OPOST)));
	nimln_(259, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	mode.c_cflag = (NU32)((NU32)(mode.c_cflag & (NU32)((NU32) ~((NU32)(CSIZE | PARENB)))) | CS8);
	nimln_(260, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	mode.c_lflag = (NU32)(mode.c_lflag & (NU32)((NU32) ~((NU32)((NU32)((NU32)(ECHO | ICANON) | IEXTEN) | ISIG))));
	if ((NU)(VMIN) > (NU)(31)){ raiseIndexError2(VMIN, 31); }
	nimln_(261, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	mode.c_cc[(VMIN)- 0] = 1;
	if ((NU)(VTIME) > (NU)(31)){ raiseIndexError2(VTIME, 31); }
	nimln_(262, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	mode.c_cc[(VTIME)- 0] = 0;
	nimln_(263, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	T2_ = (int)0;
	T2_ = tcsetattr(fd_0, time, (&mode));
	(void)(T2_);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, getch__pureZterminal_559)(void) {
	NIM_CHAR result;
	int fd_1;
	struct termios oldMode;
	int T1_;
	int T2_;
	nimfr_("getch", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	result = (NIM_CHAR)0;
	nimln_(801, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	fd_1 = getFileHandle__systemZio_228(stdin);
	nimZeroMem((void*)(&oldMode), sizeof(struct termios));
	nimln_(803, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	T1_ = (int)0;
	T1_ = tcgetattr(fd_1, (&oldMode));
	(void)(T1_);
	nimln_(804, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	setRaw__pureZterminal_34(fd_1, TCSAFLUSH);
	nimln_(805, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	result = readChar__systemZio_222(stdin);
	nimln_(806, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	T2_ = (int)0;
	T2_ = tcsetattr(fd_1, TCSADRAIN, (&oldMode));
	(void)(T2_);
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, showCursor__pureZterminal_144)(FILE* f) {
	nimfr_("showCursor", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(347, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	write__systemZio_205(f, ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_13));
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, setCursorXPos__pureZterminal_202)(FILE* f, NI x) {
	NimStringDesc* fmtRes;
	NI TM__CN3raB9atujkEiPpxYAdlgQ_15;
	nimfr_("setCursorXPos", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(371, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(583, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/strformat.nim");
	nimln_(371, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	fmtRes = rawNewString(((NI) 39));
	formatValue__pureZstrformat_162((&fmtRes), ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_5), ((NimStringDesc*) NIM_NIL));
	nimln_(533, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/core/macros.nim");
	if (nimAddInt(x, ((NI) 1), &TM__CN3raB9atujkEiPpxYAdlgQ_15)) { raiseOverflow(); };
	nimln_(371, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	formatValue__pureZterminal_155((&fmtRes), (NI)(TM__CN3raB9atujkEiPpxYAdlgQ_15), ((NimStringDesc*) NIM_NIL));
	fmtRes = resizeString(fmtRes, 1);
appendString(fmtRes, ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_16));
	write__systemZio_205(f, fmtRes);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, eraseLine__pureZterminal_257)(FILE* f) {
	nimfr_("eraseLine", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	nimln_(484, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	write__systemZio_205(f, ((NimStringDesc*) &TM__CN3raB9atujkEiPpxYAdlgQ_14));
	nimln_(485, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/terminal.nim");
	setCursorXPos__pureZterminal_202(f, ((NI) 0));
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminusathversionminus1minus6atslibatspureatsterminaldotnim_Init000)(void) {
{
	TFrame FR_; FR_.len = 0;

	nimRegisterThreadLocalMarker(TM__CN3raB9atujkEiPpxYAdlgQ_3);

}/* preInitProc end */
{
}
}

N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminusathversionminus1minus6atslibatspureatsterminaldotnim_DatInit000)(void) {
static TNimNode* TM__CN3raB9atujkEiPpxYAdlgQ_2_3[3];
static TNimNode TM__CN3raB9atujkEiPpxYAdlgQ_0[4];
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.size = sizeof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og);
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.align = NIM_ALIGNOF(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og);
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.kind = 18;
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.base = 0;
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.flags = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_2_3[0] = &TM__CN3raB9atujkEiPpxYAdlgQ_0[1];
TM__CN3raB9atujkEiPpxYAdlgQ_0[1].kind = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_0[1].offset = offsetof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og, trueColorIsSupported);
TM__CN3raB9atujkEiPpxYAdlgQ_0[1].typ = (&NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__CN3raB9atujkEiPpxYAdlgQ_0[1].name = "trueColorIsSupported";
TM__CN3raB9atujkEiPpxYAdlgQ_2_3[1] = &TM__CN3raB9atujkEiPpxYAdlgQ_0[2];
TM__CN3raB9atujkEiPpxYAdlgQ_0[2].kind = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_0[2].offset = offsetof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og, trueColorIsEnabled);
TM__CN3raB9atujkEiPpxYAdlgQ_0[2].typ = (&NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__CN3raB9atujkEiPpxYAdlgQ_0[2].name = "trueColorIsEnabled";
TM__CN3raB9atujkEiPpxYAdlgQ_2_3[2] = &TM__CN3raB9atujkEiPpxYAdlgQ_0[3];
TM__CN3raB9atujkEiPpxYAdlgQ_0[3].kind = 1;
TM__CN3raB9atujkEiPpxYAdlgQ_0[3].offset = offsetof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og, fgSetColor);
TM__CN3raB9atujkEiPpxYAdlgQ_0[3].typ = (&NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__CN3raB9atujkEiPpxYAdlgQ_0[3].name = "fgSetColor";
TM__CN3raB9atujkEiPpxYAdlgQ_0[0].len = 3; TM__CN3raB9atujkEiPpxYAdlgQ_0[0].kind = 2; TM__CN3raB9atujkEiPpxYAdlgQ_0[0].sons = &TM__CN3raB9atujkEiPpxYAdlgQ_2_3[0];
NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_.node = &TM__CN3raB9atujkEiPpxYAdlgQ_0[0];
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.size = sizeof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*);
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.align = NIM_ALIGNOF(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*);
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.kind = 22;
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.base = (&NTIpterminal58objecttype__EcU8GhMNGo9bGDXbfqZ82og_);
NTIpterminal__flNJLrANZti6Wiy5LTlGGA_.marker = Marker_tyRef__flNJLrANZti6Wiy5LTlGGA;
}

