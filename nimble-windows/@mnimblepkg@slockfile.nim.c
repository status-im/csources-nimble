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
  typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Table__iakiVCWUfIuiHQqyxQaX8A tyObject_Table__iakiVCWUfIuiHQqyxQaX8A;
typedef struct tySequence__GuNIUy7Gsew6nZ4VQBHfFg tySequence__GuNIUy7Gsew6nZ4VQBHfFg;
typedef struct tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q;
typedef struct tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ;
typedef struct tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg;
typedef struct tySequence__MlAD6nAPq9bHKla9cWiIZP0g tySequence__MlAD6nAPq9bHKla9cWiIZP0g;
typedef struct tySequence__oLpBKXzW3hF9aCVMo5EymfQ tySequence__oLpBKXzW3hF9aCVMo5EymfQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__ZkxkVxJvB9aqet9cfVQmFTZw tySequence__ZkxkVxJvB9aqet9cfVQmFTZw;
typedef struct tyTuple__awOivLjlO76sGdHY7nQUjQ tyTuple__awOivLjlO76sGdHY7nQUjQ;
typedef struct tyObject_LockFileDep__PkUOL8vzIvRRmF9bLOPRlhg tyObject_LockFileDep__PkUOL8vzIvRRmF9bLOPRlhg;
typedef struct tyObject_Version__9bU0a4Oqtl9aJmGyzYi8ZnBA tyObject_Version__9bU0a4Oqtl9aJmGyzYi8ZnBA;
typedef struct tyObject_Sha1Hash__zQwLVDNef3gJr9bhL9bRloJw tyObject_Sha1Hash__zQwLVDNef3gJr9bhL9bRloJw;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_Checksums__aZcxVfkZCt9bd29bg29aMe9aaA tyObject_Checksums__aZcxVfkZCt9bd29bg29aMe9aaA;
typedef struct tyTuple__jq7X5k7hWG0tdTZTDkiyGQ tyTuple__jq7X5k7hWG0tdTZTDkiyGQ;
typedef struct tyTuple__UBKv1ckqvKAfuS0TS0t23Q tyTuple__UBKv1ckqvKAfuS0TS0t23Q;
typedef struct tyTuple__m8l9a4rYFktlUTIniXgnvog tyTuple__m8l9a4rYFktlUTIniXgnvog;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_Table__iakiVCWUfIuiHQqyxQaX8A {
tySequence__GuNIUy7Gsew6nZ4VQBHfFg* data;
NI counter;
};
typedef NU8 tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg;
struct tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg {
tySequence__MlAD6nAPq9bHKla9cWiIZP0g* data;
NI counter;
NI first;
NI last;
};
struct tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q {
NIM_BOOL isUnquoted;
tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg kind;
union{
struct {NimStringDesc* str;
} _kind_1;
struct {NI64 num;
} _kind_2;
struct {NF fnum;
} _kind_3;
struct {NIM_BOOL bval;
} _kind_4;
struct {tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg fields;
} _kind_6;
struct {tySequence__oLpBKXzW3hF9aCVMo5EymfQ* elems;
} _kind_7;
};
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
struct tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ {
tySequence__ZkxkVxJvB9aqet9cfVQmFTZw* data;
NI counter;
NI first;
NI last;
};
struct tyTuple__awOivLjlO76sGdHY7nQUjQ {
NI Field0;
NI Field1;
NimStringDesc* Field2;
tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* Field3;
};
struct tyObject_Version__9bU0a4Oqtl9aJmGyzYi8ZnBA {
NimStringDesc* version;
};
struct tyObject_Sha1Hash__zQwLVDNef3gJr9bhL9bRloJw {
NimStringDesc* hashValue;
};
typedef NU8 tyEnum_DownloadMethod__IqkMKe5PGkzDG0ayIWPJ6w;
struct tyObject_Checksums__aZcxVfkZCt9bd29bg29aMe9aaA {
tyObject_Sha1Hash__zQwLVDNef3gJr9bhL9bRloJw sha1;
};
struct tyObject_LockFileDep__PkUOL8vzIvRRmF9bLOPRlhg {
tyObject_Version__9bU0a4Oqtl9aJmGyzYi8ZnBA version;
tyObject_Sha1Hash__zQwLVDNef3gJr9bhL9bRloJw vcsRevision;
NimStringDesc* url;
tyEnum_DownloadMethod__IqkMKe5PGkzDG0ayIWPJ6w downloadMethod;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* dependencies;
tyObject_Checksums__aZcxVfkZCt9bd29bg29aMe9aaA checksums;
};
struct tyTuple__jq7X5k7hWG0tdTZTDkiyGQ {
NimStringDesc* Field0;
tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* Field1;
};
typedef tyTuple__jq7X5k7hWG0tdTZTDkiyGQ tyArray__rnBfBeuXQMeTae3dUyC1Bw[2];
struct tyTuple__UBKv1ckqvKAfuS0TS0t23Q {
NI Field0;
NimStringDesc* Field1;
tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ Field2;
};
struct tyTuple__m8l9a4rYFktlUTIniXgnvog {
NI Field0;
NI Field1;
NimStringDesc* Field2;
tyObject_LockFileDep__PkUOL8vzIvRRmF9bLOPRlhg Field3;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__GuNIUy7Gsew6nZ4VQBHfFg {
  TGenericSeq Sup;
  tyTuple__UBKv1ckqvKAfuS0TS0t23Q data[SEQ_DECL_SIZE];
};
struct tySequence__MlAD6nAPq9bHKla9cWiIZP0g {
  TGenericSeq Sup;
  tyTuple__awOivLjlO76sGdHY7nQUjQ data[SEQ_DECL_SIZE];
};
struct tySequence__oLpBKXzW3hF9aCVMo5EymfQ {
  TGenericSeq Sup;
  tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* data[SEQ_DECL_SIZE];
};
struct tySequence__ZkxkVxJvB9aqet9cfVQmFTZw {
  TGenericSeq Sup;
  tyTuple__m8l9a4rYFktlUTIniXgnvog data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosfileExists)(NimStringDesc* filename);
N_LIB_PRIVATE N_NIMCALL(void, readLockFile__nimblepkgZlockfile_1160)(NimStringDesc* filePath, tyObject_Table__iakiVCWUfIuiHQqyxQaX8A* Result);
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, parseFile__pureZjson_5301)(NimStringDesc* filename);
N_LIB_PRIVATE N_NIMCALL(void, X5BX5Deq___nimblepkgZlockfile_2950)(tyObject_Table__iakiVCWUfIuiHQqyxQaX8A* t, NimStringDesc* key, tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ* val);
N_LIB_PRIVATE N_NIMCALL(void, to__nimblepkgZlockfile_1172)(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* node, tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ* Result);
static N_INLINE(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, X5BX5D___pureZjson_3073)(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* node, NimStringDesc* name);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__systemZassertions_56)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q**, X5BX5D___pureZjson_2667)(tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg* t, NimStringDesc* key);
N_LIB_PRIVATE N_NOINLINE(void, raiseFieldError2)(NimStringDesc* f, NimStringDesc* discVal);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, reprDiscriminant)(NI e, TNimType* typ);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_2999)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__pureZjson_3248)(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* node, NimStringDesc* key);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, reprEnum)(NI e, TNimType* typ);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(NI, len__pureZjson_2169)(tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg* t);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(NIM_BOOL, isFilled__pureZcollectionsZtables_31)(NI hcode);
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, percent___pureZjson_1835)(tyTuple__jq7X5k7hWG0tdTZTDkiyGQ* keyVals, NI keyValsLen_0);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, percent___pureZjson_1816)(NI n);
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, percent___nimblepkgZlockfile_437)(tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ* table);
N_LIB_PRIVATE N_NIMCALL(void, X5BX5D___nimblepkgZlockfile_108)(tyObject_Table__iakiVCWUfIuiHQqyxQaX8A t, NimStringDesc* key, tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ* Result);
static N_INLINE(void, X5BX5Deq___pureZjson_1939)(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* obj, NimStringDesc* key, tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* val);
N_LIB_PRIVATE N_NIMCALL(void, X5BX5Deq___pureZjson_301)(tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg* t, NimStringDesc* key, tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* val);
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, newJObject__pureZjson_102)(void);
N_LIB_PRIVATE N_NIMCALL(NI, len__nimblepkgZlockfile_872)(tyObject_Table__iakiVCWUfIuiHQqyxQaX8A t);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, writeFile__systemZio_567)(NimStringDesc* filename, NimStringDesc* content);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, pretty__pureZjson_4518)(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* node, NI indent);
STRING_LITERAL(TM__yYbPsffrPiqDAGVCUD9bacA_2, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/json.nim(513, 9) `not isNil(node)` ", 97);
STRING_LITERAL(TM__yYbPsffrPiqDAGVCUD9bacA_3, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/json.nim(514, 9) `node.kind == JObject` ", 102);
STRING_LITERAL(TM__yYbPsffrPiqDAGVCUD9bacA_4, "field \'fields\' is not accessible for type \'JsonNodeObj\' using \'kind = ", 70);
extern TNimType NTIjsonnodekind__RUngo7nCHe6O8aBGIcrhtg_;
STRING_LITERAL(TM__yYbPsffrPiqDAGVCUD9bacA_5, "packages", 8);
STRING_LITERAL(TM__yYbPsffrPiqDAGVCUD9bacA_6, "tasks", 5);
STRING_LITERAL(TM__yYbPsffrPiqDAGVCUD9bacA_7, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/json.nim(837, 10) `node.kind == JObject` : pairs() can not iterate a JsonNode of kind ", 148);
STRING_LITERAL(TM__yYbPsffrPiqDAGVCUD9bacA_8, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim(1720, 11) `len(t) == L` the length of the table changed while iterating over it", 164);
STRING_LITERAL(TM__yYbPsffrPiqDAGVCUD9bacA_9, "-1", 2);
static NIM_CONST struct {
  TGenericSeq Sup;
  NimStringDesc* data[0];
} TM__yYbPsffrPiqDAGVCUD9bacA_10 = {{0, 0 | NIM_STRLIT_FLAG}};
N_LIB_PRIVATE NIM_CONST tyObject_LockFileDep__PkUOL8vzIvRRmF9bLOPRlhg notSetLockFileDep__nimblepkgZlockfile_36 = {{((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_9)}
, {((NimStringDesc*) NIM_NIL)}
, ((NimStringDesc*) NIM_NIL), ((tyEnum_DownloadMethod__IqkMKe5PGkzDG0ayIWPJ6w) 0), ((tySequence__sM4lkSb7zS6F7OVMvW9cffQ*)&TM__yYbPsffrPiqDAGVCUD9bacA_10), {{((NimStringDesc*) NIM_NIL)}
}
}
;
STRING_LITERAL(TM__yYbPsffrPiqDAGVCUD9bacA_11, "version", 7);
STRING_LITERAL(TM__yYbPsffrPiqDAGVCUD9bacA_12, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/json.nim(391, 9) `obj.kind == JObject` ", 101);
STRING_LITERAL(TM__yYbPsffrPiqDAGVCUD9bacA_13, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim(698, 13) `len(t) == L` the length of the table changed while iterating over it", 163);
extern TFrame* framePtr__system_2566;
extern TFrame* framePtr__system_2566;
extern TFrame* framePtr__system_2566;
extern TFrame* framePtr__system_2566;
extern TFrame* framePtr__system_2566;
extern TFrame* framePtr__system_2566;
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
static N_INLINE(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, X5BX5D___pureZjson_3073)(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* node, NimStringDesc* name) {
	tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* result;
	tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q** T9_;
	nimfr_("[]", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/json.nim");
	result = NIM_NIL;
	nimln_(513, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/json.nim");
	{
		if (!!(!((node == 0)))) goto LA3_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_2));
	}
	LA3_: ;
	nimln_(514, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/json.nim");
	{
		if (!!(((*node).kind == ((tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg) 5)))) goto LA7_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_3));
	}
	LA7_: ;
	nimln_(517, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/json.nim");
	if (!(((32 &((NU8)1<<((NU)((*node).kind)&7U)))!=0))) 	{ raiseFieldError2(((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_4), reprDiscriminant(((NI)(*node).kind) + (NI)IL64(0), (&NTIjsonnodekind__RUngo7nCHe6O8aBGIcrhtg_))); } 
	T9_ = (tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q**)0;
	T9_ = X5BX5D___pureZjson_2667((&(*node)._kind_6.fields), name);
	result = (*T9_);
	popFrame();
	return result;
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
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
static N_INLINE(NI, len__pureZjson_2169)(tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg* t) {
	NI result;
	nimfr_("len", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
	result = (NI)0;
	nimln_(1509, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
	result = (*t).counter;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, isFilled__pureZcollectionsZtables_31)(NI hcode) {
	NIM_BOOL result;
	nimfr_("isFilled", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/hashcommon.nim");
	result = (NIM_BOOL)0;
	nimln_(22, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/hashcommon.nim");
	result = !((hcode == ((NI) 0)));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, readLockFile__nimblepkgZlockfile_1160)(NimStringDesc* filePath, tyObject_Table__iakiVCWUfIuiHQqyxQaX8A* Result) {
	tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* data;
	tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* T1_;
	tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ T2_;
	nimfr_("readLockFile", "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
	unsureAsgnRef((void**)&(*Result).data, NIM_NIL);
	(*Result).counter = 0;
	nimln_(45, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
	data = parseFile__pureZjson_5301(filePath);
	nimln_(46, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
	T1_ = NIM_NIL;
	T1_ = X5BX5D___pureZjson_3073(data, ((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_5));
	nimZeroMem((void*)(&T2_), sizeof(tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ));
	to__nimblepkgZlockfile_1172(T1_, (&T2_));
	X5BX5Deq___nimblepkgZlockfile_2950(Result, ((NimStringDesc*) NIM_NIL), (&T2_));
	nimln_(47, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
	{
		NIM_BOOL T5_;
		T5_ = (NIM_BOOL)0;
		T5_ = contains__pureZjson_3248(data, ((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_6));
		if (!T5_) goto LA6_;
		{
			NimStringDesc* task;
			tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* deps;
			tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* colontmp_;
			task = NIM_NIL;
			deps = NIM_NIL;
			colontmp_ = NIM_NIL;
			nimln_(48, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
			colontmp_ = X5BX5D___pureZjson_3073(data, ((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_6));
			nimln_(837, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/json.nim");
			{
				NimStringDesc* T13_;
				if (!!(((*colontmp_).kind == ((tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg) 5)))) goto LA11_;
				T13_ = NIM_NIL;
				T13_ = rawNewString((reprEnum((NI)(*colontmp_).kind, (&NTIjsonnodekind__RUngo7nCHe6O8aBGIcrhtg_)) ? reprEnum((NI)(*colontmp_).kind, (&NTIjsonnodekind__RUngo7nCHe6O8aBGIcrhtg_))->Sup.len : 0) + 148);
appendString(T13_, ((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_7));
appendString(T13_, reprEnum((NI)(*colontmp_).kind, (&NTIjsonnodekind__RUngo7nCHe6O8aBGIcrhtg_)));
				failedAssertImpl__systemZassertions_56(T13_);
			}
			LA11_: ;
			{
				NimStringDesc* key;
				tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* val;
				tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg colontmp__2;
				NI L;
				key = NIM_NIL;
				val = NIM_NIL;
				nimZeroMem((void*)(&colontmp__2), sizeof(tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg));
				nimln_(838, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/json.nim");
				if (!(((32 &((NU8)1<<((NU)((*colontmp_).kind)&7U)))!=0))) 				{ raiseFieldError2(((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_4), reprDiscriminant(((NI)(*colontmp_).kind) + (NI)IL64(0), (&NTIjsonnodekind__RUngo7nCHe6O8aBGIcrhtg_))); } 
				colontmp__2.data = (*colontmp_)._kind_6.fields.data;
				colontmp__2.counter = (*colontmp_)._kind_6.fields.counter;
				colontmp__2.first = (*colontmp_)._kind_6.fields.first;
				colontmp__2.last = (*colontmp_)._kind_6.fields.last;
				nimln_(1717, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
				L = len__pureZjson_2169((&colontmp__2));
				nimln_(1718, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
				{
					NI h;
					nimln_(1298, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
					if (!(((NI) 0) < colontmp__2.counter)) goto LA17_;
					nimln_(1299, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
					h = colontmp__2.first;
					{
						nimln_(1300, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
						while (1) {
							NI nxt;
							if (!(((NI) 0) <= h)) goto LA20;
							nimln_(1301, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
							if (h < 0 || h >= (colontmp__2.data ? colontmp__2.data->Sup.len : 0)){ raiseIndexError2(h,(colontmp__2.data ? colontmp__2.data->Sup.len : 0)-1); }
							nxt = colontmp__2.data->data[h].Field1;
							nimln_(1302, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
							{
								NIM_BOOL T23_;
								tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ T26_;
								if (h < 0 || h >= (colontmp__2.data ? colontmp__2.data->Sup.len : 0)){ raiseIndexError2(h,(colontmp__2.data ? colontmp__2.data->Sup.len : 0)-1); }
								T23_ = (NIM_BOOL)0;
								T23_ = isFilled__pureZcollectionsZtables_31(colontmp__2.data->data[h].Field0);
								if (!T23_) goto LA24_;
								nimln_(838, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/json.nim");
								if (h < 0 || h >= (colontmp__2.data ? colontmp__2.data->Sup.len : 0)){ raiseIndexError2(h,(colontmp__2.data ? colontmp__2.data->Sup.len : 0)-1); }
								key = colontmp__2.data->data[h].Field2;
								if (h < 0 || h >= (colontmp__2.data ? colontmp__2.data->Sup.len : 0)){ raiseIndexError2(h,(colontmp__2.data ? colontmp__2.data->Sup.len : 0)-1); }
								val = colontmp__2.data->data[h].Field3;
								nimln_(48, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
								task = key;
								deps = val;
								nimZeroMem((void*)(&T26_), sizeof(tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ));
								to__nimblepkgZlockfile_1172(deps, (&T26_));
								X5BX5Deq___nimblepkgZlockfile_2950(Result, task, (&T26_));
								nimln_(1720, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
								{
									NI T29_;
									T29_ = (NI)0;
									T29_ = len__pureZjson_2169((&colontmp__2));
									if (!!((T29_ == L))) goto LA30_;
									failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_8));
								}
								LA30_: ;
							}
							LA24_: ;
							nimln_(1304, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
							h = nxt;
						} LA20: ;
					}
				}
				LA17_: ;
			}
		}
	}
	LA6_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, getLockedDependencies__nimblepkgZlockfile_4047)(NimStringDesc* lockFile, tyObject_Table__iakiVCWUfIuiHQqyxQaX8A* Result) {
	nimfr_("getLockedDependencies", "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
	unsureAsgnRef((void**)&(*Result).data, NIM_NIL);
	(*Result).counter = 0;
	nimln_(54, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nosfileExists(lockFile);
		if (!T3_) goto LA4_;
		nimln_(55, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
		readLockFile__nimblepkgZlockfile_1160(lockFile, Result);
	}
	LA4_: ;
	popFrame();
}
static N_INLINE(void, X5BX5Deq___pureZjson_1939)(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* obj, NimStringDesc* key, tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* val) {
	nimfr_("[]=", "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/json.nim");
	nimln_(391, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/json.nim");
	{
		if (!!(((*obj).kind == ((tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg) 5)))) goto LA3_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_12));
	}
	LA3_: ;
	nimln_(392, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/json.nim");
	if (!(((32 &((NU8)1<<((NU)((*obj).kind)&7U)))!=0))) 	{ raiseFieldError2(((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_4), reprDiscriminant(((NI)(*obj).kind) + (NI)IL64(0), (&NTIjsonnodekind__RUngo7nCHe6O8aBGIcrhtg_))); } 
	X5BX5Deq___pureZjson_301((&(*obj)._kind_6.fields), key, val);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, writeLockFile__nimblepkgZlockfile_46)(NimStringDesc* fileName, tyObject_Table__iakiVCWUfIuiHQqyxQaX8A packages) {
	tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* mainJsonNode;
	tyArray__rnBfBeuXQMeTae3dUyC1Bw T1_;
	tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ T2_;
	tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* T3_;
	NimStringDesc* T25_;
	nimfr_("writeLockFile", "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
	nimln_(30, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
	nimZeroMem((void*)T1_, sizeof(tyArray__rnBfBeuXQMeTae3dUyC1Bw));
	T1_[0].Field0 = copyString(((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_11));
	nimln_(31, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
	T1_[0].Field1 = percent___pureZjson_1816(((NI) 2));
	T1_[1].Field0 = copyString(((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_5));
	nimln_(32, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
	nimZeroMem((void*)(&T2_), sizeof(tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ));
	X5BX5D___nimblepkgZlockfile_108(packages, ((NimStringDesc*) NIM_NIL), (&T2_));
	T1_[1].Field1 = percent___nimblepkgZlockfile_437((&T2_));
	nimln_(30, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
	mainJsonNode = percent___pureZjson_1835(T1_, 2);
	nimln_(35, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
	T3_ = NIM_NIL;
	T3_ = newJObject__pureZjson_102();
	X5BX5Deq___pureZjson_1939(mainJsonNode, ((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_6), T3_);
	{
		NimStringDesc* task;
		tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ deps;
		NI L;
		task = NIM_NIL;
		nimZeroMem((void*)(&deps), sizeof(tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ));
		nimln_(694, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
		L = len__nimblepkgZlockfile_872(packages);
		{
			NI h;
			NI colontmp_;
			NI T6_;
			NI res;
			h = (NI)0;
			colontmp_ = (NI)0;
			nimln_(695, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
			T6_ = ((packages.data ? packages.data->Sup.len : 0)-1);
			colontmp_ = T6_;
			nimln_(90, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system/iterators_1.nim");
			res = ((NI) 0);
			{
				nimln_(91, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system/iterators_1.nim");
				while (1) {
					NI TM__yYbPsffrPiqDAGVCUD9bacA_14;
					if (!(res <= colontmp_)) goto LA8;
					nimln_(695, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
					h = res;
					{
						NIM_BOOL T11_;
						nimln_(696, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
						if (h < 0 || h >= (packages.data ? packages.data->Sup.len : 0)){ raiseIndexError2(h,(packages.data ? packages.data->Sup.len : 0)-1); }
						T11_ = (NIM_BOOL)0;
						T11_ = isFilled__pureZcollectionsZtables_31(packages.data->data[h].Field0);
						if (!T11_) goto LA12_;
						nimln_(36, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
						if (h < 0 || h >= (packages.data ? packages.data->Sup.len : 0)){ raiseIndexError2(h,(packages.data ? packages.data->Sup.len : 0)-1); }
						task = packages.data->data[h].Field1;
						if (h < 0 || h >= (packages.data ? packages.data->Sup.len : 0)){ raiseIndexError2(h,(packages.data ? packages.data->Sup.len : 0)-1); }
						deps.data = packages.data->data[h].Field2.data;
						deps.counter = packages.data->data[h].Field2.counter;
						deps.first = packages.data->data[h].Field2.first;
						deps.last = packages.data->data[h].Field2.last;
						{
							tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* T18_;
							tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* T19_;
							nimln_(37, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
							if (!!(((task ? task->Sup.len : 0) == 0))) goto LA16_;
							nimln_(38, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
							T18_ = NIM_NIL;
							T18_ = X5BX5D___pureZjson_3073(mainJsonNode, ((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_6));
							T19_ = NIM_NIL;
							T19_ = percent___nimblepkgZlockfile_437((&deps));
							X5BX5Deq___pureZjson_1939(T18_, task, T19_);
						}
						LA16_: ;
						nimln_(698, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/pure/collections/tables.nim");
						{
							NI T22_;
							T22_ = (NI)0;
							T22_ = len__nimblepkgZlockfile_872(packages);
							if (!!((T22_ == L))) goto LA23_;
							failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__yYbPsffrPiqDAGVCUD9bacA_13));
						}
						LA23_: ;
					}
					LA12_: ;
					nimln_(93, "/home/yyoncho/.choosenim/toolchains/nim-#version-1-6/lib/system/iterators_1.nim");
					if (nimAddInt(res, ((NI) 1), &TM__yYbPsffrPiqDAGVCUD9bacA_14)) { raiseOverflow(); };
					res = (NI)(TM__yYbPsffrPiqDAGVCUD9bacA_14);
				} LA8: ;
			}
		}
	}
	nimln_(40, "/home/yyoncho/Sources/nim/nimble/src/nimblepkg/lockfile.nim");
	T25_ = NIM_NIL;
	T25_ = pretty__pureZjson_4518(mainJsonNode, ((NI) 2));
	writeFile__systemZio_567(fileName, T25_);
	popFrame();
}
