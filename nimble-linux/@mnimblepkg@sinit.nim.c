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
  typedef struct tyTuple__m4dgv18KkMuujpHOVANHbw tyTuple__m4dgv18KkMuujpHOVANHbw;
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
struct tyTuple__m4dgv18KkMuujpHOVANHbw {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
};
typedef NU8 tyEnum_DisplayType__HypVeg1P09aXzPaqyobO7xA;
typedef NU8 tyEnum_Priority__8lOyDpa4mymX3OHP5fBsAQ;
typedef NimStringDesc* tyArray__DLxB9cOndPvLDyky9bY9ccM3g[7];
N_LIB_PRIVATE N_NIMCALL(void, createDirD__nimblepkgZtools_94)(NimStringDesc* dir);
static N_INLINE(NimStringDesc*, slash___pureZos_121)(NimStringDesc* head, NimStringDesc* tail);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_2997)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem__system_1735)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_LIB_PRIVATE N_NIMCALL(void, writeExampleIfNonExistent__nimblepkgZinit_22)(NimStringDesc* file, NimStringDesc* content);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosfileExists)(NimStringDesc* filename);
N_LIB_PRIVATE N_NIMCALL(void, writeFile__systemZio_477)(NimStringDesc* filename, NimStringDesc* content);
N_LIB_PRIVATE N_NIMCALL(void, display__nimblepkgZcli_156)(NimStringDesc* category, NimStringDesc* msg, tyEnum_DisplayType__HypVeg1P09aXzPaqyobO7xA displayType, tyEnum_Priority__8lOyDpa4mymX3OHP5fBsAQ priority);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__systemZassertions_56)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen_0);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuEscape)(NimStringDesc* s, NimStringDesc* prefix, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_2, "binary", 6);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_3, "library", 7);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_4, "hybrid", 6);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_5, "nim", 3);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_6, "Info:", 5);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_7, "File ", 5);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_8, " already exists, did not write example code", 43);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_9, "# This is just an example to get you started. A typical binary package\012# uses this file as the main entry point of the application.\012\012when isMainModule:\012  echo(\"Hello, World!\")\012", 176);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_10, "bin           = @[\"$1\"]\012", 24);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_11, "# This is just an example to get you started. A typical library package\012# exports the main API in this file. Note that you cannot rename this file\012# but you can remove it if you wish.\012\012proc add*(x, y: int): int =\012  ## Adds two numbers together.\012  return x + y\012", 260);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_12, "submodule", 9);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_13, "# This is just an example to get you started. Users of your library will\012# import this file by writing ``import $1/submodule``. Feel free to rename or\012# remove this file altogether. You may create additional modules alongside\012# this file as required.\012\012type\012  Submodule* = object\012    name*: string\012\012proc initSubmodule*(): Submodule =\012  ## Initialises a new ``Submodule`` object.\012  Submodule(name: \"Anonymous\")\012", 409);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_14, "# This is just an example to get you started. A typical hybrid package\012# uses this file as the main entry point of the application.\012\012import $1pkg/submodule\012\012when isMainModule:\012  echo(getWelcomeMessage())\012", 204);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_15, "pkg", 3);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_16, "# This is just an example to get you started. Users of your hybrid library will\012# import this file by writing ``import $1pkg/submodule``. Feel free to rename or\012# remove this file altogether. You may create additional modules alongside\012# this file as required.\012\012proc getWelcomeMessage*(): string = \"Hello, World!\"\012", 314);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_17, "installExt    = @[\"nim\"]\012", 25);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_18, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim(105, 12) `false` Invalid package type specified.", 104);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_19, "tests", 5);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_20, "config", 6);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_21, "nims", 4);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_22, "switch(\"path\", \"$$projectDir/../$#\")", 36);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_23, "test1", 5);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_24, "# This is just an example to get you started. You may wish to put all of your\012# tests into a single file, or separate them into multiple `test1`, `test2`\012# etc. files (better names are recommended, just make sure the name starts with\012# the letter \'t\').\012#\012# To run these tests, simply execute `nimble test`.\012\012import unittest\012\012import $1\012test \"can add\":\012  check add(5, 5) == 10\012", 375);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_25, "# This is just an example to get you started. You may wish to put all of your\012# tests into a single file, or separate them into multiple `test1`, `test2`\012# etc. files (better names are recommended, just make sure the name starts with\012# the letter \'t\').\012#\012# To run these tests, simply execute `nimble test`.\012\012import unittest\012\012import $1pkg/submodule\012test \"correct welcome\":\012  check getWelcomeMessage() == \"Hello, World!\"\012", 419);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_26, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim(155, 12) `false` Invalid package type specified.", 104);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_27, "nimble", 6);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_28, "# Package\012\012version       = $#\012author        = \"$#\"\012description   = \"$#\"\012license       = $#\012srcDir        = $#\012$#\012\012# Dependencies\012\012requires \"nim >= $#\"\012", 151);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_29, "\"", 1);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_30, "\\\"", 2);
STRING_LITERAL(TM__74Ly1Pltw9bii2XReJC59cDg_31, "Nimble file created successfully", 32);
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
static N_INLINE(NimStringDesc*, slash___pureZos_121)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
	nimfr_("/", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/os.nim");
	result = NIM_NIL;
	nimln_(234, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/os.nim");
	result = nosjoinPath(head, tail);
	popFrame();
	return result;
}
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}
static N_INLINE(NIM_BOOL, equalMem__system_1735)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32) 0));
	return result;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
	nimfr_("eqStrings", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system/strmantle.nim");
{	result = (NIM_BOOL)0;
	nimln_(27, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system/strmantle.nim");
	alen = (a ? a->Sup.len : 0);
	nimln_(28, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system/strmantle.nim");
	blen = (b ? b->Sup.len : 0);
	nimln_(29, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system/strmantle.nim");
	{
		if (!(alen == blen)) goto LA3_;
		nimln_(30, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system/strmantle.nim");
		{
			if (!(alen == ((NI) 0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		nimln_(31, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system/strmantle.nim");
		result = equalMem__system_1735(((void*) ((&a->data[((NI) 0)]))), ((void*) ((&b->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(void, writeExampleIfNonExistent__nimblepkgZinit_22)(NimStringDesc* file, NimStringDesc* content) {
	nimfr_("writeExampleIfNonExistent", "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	nimln_(17, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nosfileExists(file);
		if (!!(T3_)) goto LA4_;
		nimln_(18, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		writeFile__systemZio_477(file, content);
	}
	goto LA1_;
	LA4_: ;
	{
		NimStringDesc* T7_;
		nimln_(20, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T7_ = NIM_NIL;
		T7_ = rawNewString((file ? file->Sup.len : 0) + 48);
appendString(T7_, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_7));
appendString(T7_, file);
appendString(T7_, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_8));
		display__nimblepkgZcli_156(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_6), T7_, ((tyEnum_DisplayType__HypVeg1P09aXzPaqyobO7xA) 4), ((tyEnum_Priority__8lOyDpa4mymX3OHP5fBsAQ) 3));
	}
	LA1_: ;
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
N_LIB_PRIVATE N_NIMCALL(void, createPkgStructure__nimblepkgZinit_25)(tyTuple__m4dgv18KkMuujpHOVANHbw* info, NimStringDesc* pkgRoot) {
	NimStringDesc* T1_;
	NimStringDesc* nimbleFileOptions;
	NimStringDesc* pkgTestDir;
	NimStringDesc* nimbleFile;
	NimStringDesc* T60_;
	tyArray__DLxB9cOndPvLDyky9bY9ccM3g T61_;
	NimStringDesc* T62_;
	nimfr_("createPkgStructure", "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	nimln_(25, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	T1_ = NIM_NIL;
	T1_ = slash___pureZos_121(pkgRoot, (*info).Field5);
	createDirD__nimblepkgZtools_94(T1_);
	nimln_(28, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	nimbleFileOptions = ((NimStringDesc*) NIM_NIL);
	nimln_(29, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	if (eqStrings((*info).Field7, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_2))) goto LA2_;
	if (eqStrings((*info).Field7, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_3))) goto LA3_;
	if (eqStrings((*info).Field7, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_4))) goto LA4_;
	goto LA5_;
	LA2_: ;
	{
		NimStringDesc* mainFile;
		NimStringDesc* T8_;
		NimStringDesc* T9_;
		NimStringDesc* T10_;
		nimln_(31, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T8_ = NIM_NIL;
		T8_ = slash___pureZos_121(pkgRoot, (*info).Field5);
		T9_ = NIM_NIL;
		T9_ = noschangeFileExt((*info).Field0, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_5));
		mainFile = slash___pureZos_121(T8_, T9_);
		nimln_(32, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		writeExampleIfNonExistent__nimblepkgZinit_22(mainFile, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_9));
		nimln_(41, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T10_ = NIM_NIL;
		T10_ = nsuFormatSingleElem(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_10), (*info).Field0);
		nimbleFileOptions = resizeString(nimbleFileOptions, (T10_ ? T10_->Sup.len : 0) + 0);
appendString(nimbleFileOptions, T10_);
	}
	goto LA6_;
	LA3_: ;
	{
		NimStringDesc* mainFile_2;
		NimStringDesc* T12_;
		NimStringDesc* T13_;
		NimStringDesc* T14_;
		NimStringDesc* T15_;
		NimStringDesc* submodule;
		NimStringDesc* T16_;
		NimStringDesc* T17_;
		NimStringDesc* T18_;
		NimStringDesc* T19_;
		nimln_(43, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T12_ = NIM_NIL;
		T12_ = slash___pureZos_121(pkgRoot, (*info).Field5);
		T13_ = NIM_NIL;
		T13_ = noschangeFileExt((*info).Field0, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_5));
		mainFile_2 = slash___pureZos_121(T12_, T13_);
		nimln_(44, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		writeExampleIfNonExistent__nimblepkgZinit_22(mainFile_2, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_11));
		nimln_(56, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T14_ = NIM_NIL;
		T14_ = slash___pureZos_121(pkgRoot, (*info).Field5);
		T15_ = NIM_NIL;
		T15_ = slash___pureZos_121(T14_, (*info).Field0);
		createDirD__nimblepkgZtools_94(T15_);
		nimln_(57, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T16_ = NIM_NIL;
		T16_ = slash___pureZos_121(pkgRoot, (*info).Field5);
		T17_ = NIM_NIL;
		T17_ = slash___pureZos_121(T16_, (*info).Field0);
		nimln_(58, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T18_ = NIM_NIL;
		T18_ = nosaddFileExt(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_12), ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_5));
		nimln_(57, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		submodule = slash___pureZos_121(T17_, T18_);
		nimln_(59, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		nimln_(73, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T19_ = NIM_NIL;
		T19_ = nsuFormatSingleElem(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_13), (*info).Field0);
		nimln_(59, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		writeExampleIfNonExistent__nimblepkgZinit_22(submodule, T19_);
	}
	goto LA6_;
	LA4_: ;
	{
		NimStringDesc* mainFile_3;
		NimStringDesc* T21_;
		NimStringDesc* T22_;
		NimStringDesc* T23_;
		NimStringDesc* pkgSubDir;
		NimStringDesc* T24_;
		NimStringDesc* T25_;
		NimStringDesc* T26_;
		NimStringDesc* submodule_2;
		NimStringDesc* T27_;
		NimStringDesc* T28_;
		NimStringDesc* T29_;
		nimln_(76, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T21_ = NIM_NIL;
		T21_ = slash___pureZos_121(pkgRoot, (*info).Field5);
		T22_ = NIM_NIL;
		T22_ = noschangeFileExt((*info).Field0, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_5));
		mainFile_3 = slash___pureZos_121(T21_, T22_);
		nimln_(77, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		nimln_(86, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T23_ = NIM_NIL;
		T23_ = nsuFormatSingleElem(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_14), (*info).Field0);
		nimln_(77, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		writeExampleIfNonExistent__nimblepkgZinit_22(mainFile_3, T23_);
		nimln_(89, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T24_ = NIM_NIL;
		T25_ = NIM_NIL;
		T25_ = slash___pureZos_121(pkgRoot, (*info).Field5);
		T26_ = NIM_NIL;
		T26_ = slash___pureZos_121(T25_, (*info).Field0);
		T24_ = rawNewString((T26_ ? T26_->Sup.len : 0) + 3);
appendString(T24_, T26_);
appendString(T24_, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_15));
		pkgSubDir = T24_;
		nimln_(90, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		createDirD__nimblepkgZtools_94(pkgSubDir);
		nimln_(91, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T27_ = NIM_NIL;
		T27_ = nosaddFileExt(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_12), ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_5));
		submodule_2 = slash___pureZos_121(pkgSubDir, T27_);
		nimln_(92, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		nimln_(100, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T28_ = NIM_NIL;
		T28_ = nsuFormatSingleElem(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_16), (*info).Field0);
		nimln_(92, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		writeExampleIfNonExistent__nimblepkgZinit_22(submodule_2, T28_);
		nimln_(102, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		nimbleFileOptions = resizeString(nimbleFileOptions, 25);
appendString(nimbleFileOptions, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_17));
		nimln_(103, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T29_ = NIM_NIL;
		T29_ = nsuFormatSingleElem(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_10), (*info).Field0);
		nimbleFileOptions = resizeString(nimbleFileOptions, (T29_ ? T29_->Sup.len : 0) + 0);
appendString(nimbleFileOptions, T29_);
	}
	goto LA6_;
	LA5_: ;
	{
		nimln_(105, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		{
			if (!NIM_TRUE) goto LA33_;
			failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_18));
		}
		LA33_: ;
	}
	LA6_: ;
	nimln_(107, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	pkgTestDir = copyString(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_19));
	nimln_(109, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	if (eqStrings((*info).Field7, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_2))) goto LA35_;
	if (eqStrings((*info).Field7, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_4))) goto LA36_;
	if (eqStrings((*info).Field7, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_3))) goto LA36_;
	goto LA37_;
	LA35_: ;
	{
	}
	goto LA38_;
	LA36_: ;
	{
		NimStringDesc* pkgTestPath;
		NimStringDesc* T41_;
		NimStringDesc* T42_;
		NimStringDesc* T43_;
		nimln_(113, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		pkgTestPath = slash___pureZos_121(pkgRoot, pkgTestDir);
		nimln_(114, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		createDirD__nimblepkgZtools_94(pkgTestPath);
		nimln_(116, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T41_ = NIM_NIL;
		T41_ = nosaddFileExt(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_20), ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_21));
		T42_ = NIM_NIL;
		T42_ = slash___pureZos_121(pkgTestPath, T41_);
		nimln_(117, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		T43_ = NIM_NIL;
		T43_ = nsuFormatSingleElem(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_22), (*info).Field5);
		nimln_(116, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		writeFile__systemZio_477(T42_, T43_);
		nimln_(120, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		{
			NimStringDesc* T48_;
			NimStringDesc* T49_;
			NimStringDesc* T50_;
			if (!eqStrings((*info).Field7, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_3))) goto LA46_;
			nimln_(121, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
			T48_ = NIM_NIL;
			T48_ = nosaddFileExt(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_23), ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_5));
			T49_ = NIM_NIL;
			T49_ = slash___pureZos_121(pkgTestPath, T48_);
			nimln_(135, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
			T50_ = NIM_NIL;
			T50_ = nsuFormatSingleElem(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_24), (*info).Field0);
			nimln_(121, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
			writeExampleIfNonExistent__nimblepkgZinit_22(T49_, T50_);
		}
		goto LA44_;
		LA46_: ;
		{
			NimStringDesc* T52_;
			NimStringDesc* T53_;
			NimStringDesc* T54_;
			nimln_(138, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
			T52_ = NIM_NIL;
			T52_ = nosaddFileExt(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_23), ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_5));
			T53_ = NIM_NIL;
			T53_ = slash___pureZos_121(pkgTestPath, T52_);
			nimln_(152, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
			T54_ = NIM_NIL;
			T54_ = nsuFormatSingleElem(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_25), (*info).Field0);
			nimln_(138, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
			writeExampleIfNonExistent__nimblepkgZinit_22(T53_, T54_);
		}
		LA44_: ;
	}
	goto LA38_;
	LA37_: ;
	{
		nimln_(155, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
		{
			if (!NIM_TRUE) goto LA58_;
			failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_26));
		}
		LA58_: ;
	}
	LA38_: ;
	nimln_(158, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	T60_ = NIM_NIL;
	T60_ = noschangeFileExt((*info).Field0, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_27));
	nimbleFile = slash___pureZos_121(pkgRoot, T60_);
	nimln_(159, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	nimln_(171, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	nimZeroMem((void*)T61_, sizeof(tyArray__DLxB9cOndPvLDyky9bY9ccM3g));
	nimln_(172, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	T61_[0] = nsuEscape((*info).Field1, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_29), ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_29));
	T61_[1] = nsuReplaceStr((*info).Field2, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_29), ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_30));
	T61_[2] = nsuReplaceStr((*info).Field3, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_29), ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_30));
	nimln_(173, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	T61_[3] = nsuEscape((*info).Field4, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_29), ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_29));
	T61_[4] = nsuEscape((*info).Field5, ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_29), ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_29));
	T61_[5] = copyString(nimbleFileOptions);
	T61_[6] = copyString((*info).Field6);
	nimln_(171, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	T62_ = NIM_NIL;
	T62_ = nsuFormatOpenArray(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_28), T61_, 7);
	nimln_(159, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	writeFile__systemZio_477(nimbleFile, T62_);
	nimln_(178, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/init.nim");
	display__nimblepkgZcli_156(((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_6), ((NimStringDesc*) &TM__74Ly1Pltw9bii2XReJC59cDg_31), ((tyEnum_DisplayType__HypVeg1P09aXzPaqyobO7xA) 4), ((tyEnum_Priority__8lOyDpa4mymX3OHP5fBsAQ) 2));
	popFrame();
}
