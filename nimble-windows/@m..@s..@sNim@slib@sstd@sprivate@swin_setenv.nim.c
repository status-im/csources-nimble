/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdlib.h>
#include <string.h>
#include <errno.h>
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
typedef struct tySequence__lBgZ7a89beZGYPl8PiANMTA tySequence__lBgZ7a89beZGYPl8PiANMTA;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NI16 tyUncheckedArray__Tyd4y3haUOOHTj71TPIRag[1];
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
typedef N_STDCALL_PTR(NI32, tyProc__KHeEdNTR0xu6nVKzb2dFPw) (NI16* lpName, NI16* lpValue);
struct tySequence__lBgZ7a89beZGYPl8PiANMTA {
  TGenericSeq Sup;
  NIM_CHAR data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NI16*, newWideCString__systemZwidestrs_257)(NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorNoArgs)(void);
N_LIB_PRIVATE N_NIMCALL(tySequence__lBgZ7a89beZGYPl8PiANMTA*, newSeq__stdZprivateZwin95setenv_46)(NI len);
static N_NIMCALL(void, Marker_tySequence__lBgZ7a89beZGYPl8PiANMTA)(void* p, NI op);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_3455)(void);
static N_INLINE(void, popFrame)(void);
STRING_LITERAL(TM__UOYsq9cbb0VE8vr3Xt181HA_2, "=", 1);
STRING_LITERAL(TM__UOYsq9cbb0VE8vr3Xt181HA_3, "=  ", 3);
extern TNimType NTIchar__nmiMWKVIe46vacnhAFrQvw_;
N_LIB_PRIVATE TNimType NTIseqLcharT__lBgZ7a89beZGYPl8PiANMTA_;
STRING_LITERAL(TM__UOYsq9cbb0VE8vr3Xt181HA_8, "kernel32", 8);
STRING_LITERAL(TM__UOYsq9cbb0VE8vr3Xt181HA_9, "kernel32", 8);
extern NIM_CHAR** _environ;
static void* TM__UOYsq9cbb0VE8vr3Xt181HA_6;
tyProc__KHeEdNTR0xu6nVKzb2dFPw Dl_1509949442_;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
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
static N_NIMCALL(void, Marker_tySequence__lBgZ7a89beZGYPl8PiANMTA)(void* p, NI op) {
	tySequence__lBgZ7a89beZGYPl8PiANMTA* a;
	NI T1_;
	a = (tySequence__lBgZ7a89beZGYPl8PiANMTA*)p;
	T1_ = (NI)0;
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
N_LIB_PRIVATE N_NIMCALL(int, setEnvImpl__stdZprivateZwin95setenv_17)(NimStringDesc* name, NimStringDesc* value, int overwrite) {
	int result;
	NI16* wideName;
	NimStringDesc* envstring_2;
	NimStringDesc* T18_;
	NI16* s;
	nimfr_("setEnvImpl", "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
{	result = (int)0;
	nimln_(45, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
	wideName = newWideCString__systemZwidestrs_257(name);
	nimln_(46, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
	{
		NIM_BOOL T3_;
		NI16* T5_;
		T3_ = (NIM_BOOL)0;
		T3_ = (overwrite == ((NI32) 0));
		if (!(T3_)) goto LA4_;
		T5_ = NIM_NIL;
		T5_ = _wgetenv(wideName);
		T3_ = !((T5_ == ((NI16*) NIM_NIL)));
		LA4_: ;
		if (!T3_) goto LA6_;
		nimln_(47, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
		result = ((int) 0);
		goto BeforeRet_;
	}
	LA6_: ;
	nimln_(49, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
	{
		NimStringDesc* envstring;
		NimStringDesc* T12_;
		int e;
		NI16* T13_;
		if (!!(((value ? value->Sup.len : 0) == 0))) goto LA10_;
		nimln_(50, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
		T12_ = NIM_NIL;
		T12_ = rawNewString((name ? name->Sup.len : 0) + (value ? value->Sup.len : 0) + 1);
appendString(T12_, name);
appendString(T12_, ((NimStringDesc*) &TM__UOYsq9cbb0VE8vr3Xt181HA_2));
appendString(T12_, value);
		envstring = T12_;
		nimln_(51, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
		T13_ = NIM_NIL;
		T13_ = newWideCString__systemZwidestrs_257(envstring);
		e = _wputenv(T13_);
		nimln_(52, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
		{
			if (!!((e == ((NI32) 0)))) goto LA16_;
			nimln_(53, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
			errno = ((int) 22);
			nimln_(54, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
			result = ((int) -1);
			goto BeforeRet_;
		}
		LA16_: ;
		nimln_(55, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
		result = ((int) 0);
		goto BeforeRet_;
	}
	LA10_: ;
	nimln_(62, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
	T18_ = NIM_NIL;
	T18_ = rawNewString((name ? name->Sup.len : 0) + 3);
appendString(T18_, name);
appendString(T18_, ((NimStringDesc*) &TM__UOYsq9cbb0VE8vr3Xt181HA_3));
	envstring_2 = T18_;
	nimln_(63, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
	{
		NI16* T21_;
		int T22_;
		T21_ = NIM_NIL;
		T21_ = newWideCString__systemZwidestrs_257(envstring_2);
		T22_ = (int)0;
		T22_ = _wputenv(T21_);
		if (!!((T22_ == ((NI32) 0)))) goto LA23_;
		nimln_(64, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
		errno = ((int) 22);
		nimln_(65, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
		result = ((int) -1);
		goto BeforeRet_;
	}
	LA23_: ;
	nimln_(67, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
	s = _wgetenv(wideName);
	nimln_(68, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
	s[((NI) 0)] = ((NI16) 0);
	nimln_(74, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
	s = _wgetenv(wideName);
	nimln_(75, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
	s[((NI) 1)] = ((NI16) 61);
	nimln_(82, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
	{
		size_t requiredSizeS;
		if (!!((_environ == ((NIM_CHAR**) NIM_NIL)))) goto LA27_;
		nimln_(88, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
		requiredSizeS = wcstombs(((NIM_CHAR*) NIM_NIL), wideName, ((size_t) 0));
		nimln_(89, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
		{
			NI requiredSize;
			tySequence__lBgZ7a89beZGYPl8PiANMTA* buf;
			NI TM__UOYsq9cbb0VE8vr3Xt181HA_4;
			NIM_CHAR* buf2;
			if (!!((requiredSizeS == ((size_t) -1)))) goto LA31_;
			nimln_(90, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
			if (requiredSizeS > (size_t)(((NI) IL64(9223372036854775807)))){ raiseRangeErrorNoArgs(); }
			requiredSize = ((NI) (requiredSizeS));
			nimln_(91, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
			if (nimAddInt(requiredSize, ((NI) 1), &TM__UOYsq9cbb0VE8vr3Xt181HA_4)) { raiseOverflow(); };
			if (((NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_4)) < ((NI) 0) || ((NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_4)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_4), ((NI) 0), ((NI) IL64(9223372036854775807))); }
			buf = newSeq__stdZprivateZwin95setenv_46(((NI) ((NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_4))));
			nimln_(92, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
			if (((NI) 0) < 0 || ((NI) 0) >= (buf ? buf->Sup.len : 0)){ raiseIndexError2(((NI) 0),(buf ? buf->Sup.len : 0)-1); }
			buf2 = (&buf->data[((NI) 0)]);
			nimln_(93, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
			{
				NI TM__UOYsq9cbb0VE8vr3Xt181HA_5;
				size_t T35_;
				NCSTRING ptrToEnv;
				if (nimAddInt(requiredSize, ((NI) 1), &TM__UOYsq9cbb0VE8vr3Xt181HA_5)) { raiseOverflow(); };
				T35_ = (size_t)0;
				T35_ = wcstombs(buf2, wideName, ((size_t) ((NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_5))));
				if (!!((T35_ == ((size_t) -1)))) goto LA36_;
				nimln_(94, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
				ptrToEnv = getenv(((NCSTRING) (buf2)));
				nimln_(95, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
				ptrToEnv[((NI) 0)] = 0;
				nimln_(96, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
				ptrToEnv = getenv(((NCSTRING) (buf2)));
				nimln_(97, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
				ptrToEnv[((NI) 1)] = 61;
			}
			LA36_: ;
		}
		LA31_: ;
	}
	LA27_: ;
	nimln_(100, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
	{
		NI16* T40_;
		NI32 T41_;
		T40_ = NIM_NIL;
		T40_ = newWideCString__systemZwidestrs_257(value);
		T41_ = (NI32)0;
		T41_ = Dl_1509949442_(wideName, T40_);
		if (!(T41_ == ((NI32) 0))) goto LA42_;
		nimln_(101, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
		errno = ((int) 22);
		nimln_(102, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
		result = ((int) -1);
		goto BeforeRet_;
	}
	LA42_: ;
	nimln_(103, "/home/yyoncho/Sources/nim/Nim/lib/std/private/win_setenv.nim");
	result = ((int) 0);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsNimatslibatsstdatsprivateatswin_setenvdotnim_DatInit000)(void) {
NTIseqLcharT__lBgZ7a89beZGYPl8PiANMTA_.size = sizeof(tySequence__lBgZ7a89beZGYPl8PiANMTA*);
NTIseqLcharT__lBgZ7a89beZGYPl8PiANMTA_.align = NIM_ALIGNOF(tySequence__lBgZ7a89beZGYPl8PiANMTA*);
NTIseqLcharT__lBgZ7a89beZGYPl8PiANMTA_.kind = 24;
NTIseqLcharT__lBgZ7a89beZGYPl8PiANMTA_.base = (&NTIchar__nmiMWKVIe46vacnhAFrQvw_);
NTIseqLcharT__lBgZ7a89beZGYPl8PiANMTA_.marker = Marker_tySequence__lBgZ7a89beZGYPl8PiANMTA;
if (!((TM__UOYsq9cbb0VE8vr3Xt181HA_6 = nimLoadLibrary(((NimStringDesc*) &TM__UOYsq9cbb0VE8vr3Xt181HA_8)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__UOYsq9cbb0VE8vr3Xt181HA_9));
	Dl_1509949442_ = (tyProc__KHeEdNTR0xu6nVKzb2dFPw) nimGetProcAddr(TM__UOYsq9cbb0VE8vr3Xt181HA_6, "SetEnvironmentVariableW");
}

