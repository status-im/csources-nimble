/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <windows.h>
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
  typedef struct tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA;
typedef struct tyObject_Table__qagh2zcXAhSb9aRfetCb26g tyObject_Table__qagh2zcXAhSb9aRfetCb26g;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__JiteSJxrvz63iP2o9bcn2Sg tySequence__JiteSJxrvz63iP2o9bcn2Sg;
typedef struct tyTuple__g1w83cyyBYiVU9c8WEJWnjQ tyTuple__g1w83cyyBYiVU9c8WEJWnjQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw;
typedef struct tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg;
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
struct tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA {
tyObject_Table__qagh2zcXAhSb9aRfetCb26g* table;
NIM_BOOL isTitleCase;
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
struct tyObject_Table__qagh2zcXAhSb9aRfetCb26g {
tySequence__JiteSJxrvz63iP2o9bcn2Sg* data;
NI counter;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyTuple__g1w83cyyBYiVU9c8WEJWnjQ {
NI Field0;
NimStringDesc* Field1;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* Field2;
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
struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SPr7N6UKfuF549bNPiUvSRw[256];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SPr7N6UKfuF549bNPiUvSRw freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw {
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* head;
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* tail;
CRITICAL_SECTION lock;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw toDispose;
NI gcThreadId;
};
typedef NU8 tyEnum_HttpMethod__wfZHspwVKQPl9aWhkIcMrAA;
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__JiteSJxrvz63iP2o9bcn2Sg {
  TGenericSeq Sup;
  tyTuple__g1w83cyyBYiVU9c8WEJWnjQ data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__JiteSJxrvz63iP2o9bcn2Sg)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__jUGi19aimy3OEChVtuezLZg)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__FbZeO4trJhT2CCJ9aLxejqw)(void* p, NI op);
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_Table__qagh2zcXAhSb9aRfetCb26g*, newTable__pureZhttpcore_120)(NI initialSize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__system_5879)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_3455)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5841)(void* usr);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(void, decRef__system_5886)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__system_5884)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__system_5835)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasKey__pureZhttpcore_1718)(tyObject_Table__qagh2zcXAhSb9aRfetCb26g* t, NimStringDesc* key);
static N_INLINE(NimStringDesc*, toCaseInsensitive__pureZhttpcore_110)(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA* headers, NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toTitleCase__pureZhttpcore_101)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToUpperAsciiChar)(NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToLowerAsciiStr)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, X5BX5Deq___pureZhttpcore_2122)(tyObject_Table__qagh2zcXAhSb9aRfetCb26g* t, NimStringDesc* key, tySequence__sM4lkSb7zS6F7OVMvW9cffQ* val);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ**, X5BX5D___pureZhttpcore_1883)(tyObject_Table__qagh2zcXAhSb9aRfetCb26g* t, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, incrSeqV3)(TGenericSeq* s, TNimType* typ);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasKey__pureZhttpcore_4203)(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA* headers, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*, X5BX5D___pureZhttpcore_3069)(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA* headers, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(void, del__pureZhttpcore_3362)(tyObject_Table__qagh2zcXAhSb9aRfetCb26g* t, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__pureZhttpcore_1682)(tyObject_Table__qagh2zcXAhSb9aRfetCb26g* t, NimStringDesc* key);
N_LIB_PRIVATE TNimType NTIhttpheaders58objecttype__GM611pWlOrQ7hvMPcuAACA_;
N_LIB_PRIVATE TNimType NTItable__qagh2zcXAhSb9aRfetCb26g_;
N_LIB_PRIVATE TNimType NTIkeyvaluepair__g1w83cyyBYiVU9c8WEJWnjQ_;
extern TNimType NTIint__rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTIstring__77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_;
N_LIB_PRIVATE TNimType NTIkeyvaluepairseq__JiteSJxrvz63iP2o9bcn2Sg_;
N_LIB_PRIVATE TNimType NTItableref__jUGi19aimy3OEChVtuezLZg_;
extern TNimType NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_;
N_LIB_PRIVATE TNimType NTIhttpheaders__FbZeO4trJhT2CCJ9aLxejqw_;
N_LIB_PRIVATE TNimType NTIhttpmethod__wfZHspwVKQPl9aWhkIcMrAA_;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__system_5774;
static N_NIMCALL(void, Marker_tySequence__JiteSJxrvz63iP2o9bcn2Sg)(void* p, NI op) {
	tySequence__JiteSJxrvz63iP2o9bcn2Sg* a;
	NI T1_;
	a = (tySequence__JiteSJxrvz63iP2o9bcn2Sg*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].Field1, op);
	nimGCvisit((void*)a->data[T1_].Field2, op);
	}
}
static N_NIMCALL(void, Marker_tyRef__jUGi19aimy3OEChVtuezLZg)(void* p, NI op) {
	tyObject_Table__qagh2zcXAhSb9aRfetCb26g* a;
	a = (tyObject_Table__qagh2zcXAhSb9aRfetCb26g*)p;
	nimGCvisit((void*)(*a).data, op);
}
static N_NIMCALL(void, Marker_tyRef__FbZeO4trJhT2CCJ9aLxejqw)(void* p, NI op) {
	tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA* a;
	a = (tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA*)p;
	nimGCvisit((void*)(*a).table, op);
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
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y) {
	NI result;
	nimfr_("+%", "/home/yyoncho/Sources/nim/Nim/lib/system/arithmetics.nim");
	result = (NI)0;
	nimln_(403, "/home/yyoncho/Sources/nim/Nim/lib/system/arithmetics.nim");
	nimln_(407, "/home/yyoncho/Sources/nim/Nim/lib/system/arithmetics.nim");
	result = ((NI) ((NU)((NU64)(((NU) (x))) + (NU64)(((NU) (y))))));
	popFrame();
	return result;
}
static N_INLINE(void, incRef__system_5879)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	nimln_(231, "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	(*c).refcount = pluspercent___system_696((*c).refcount, ((NI) 8));
	popFrame();
}
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y) {
	NI result;
	nimfr_("-%", "/home/yyoncho/Sources/nim/Nim/lib/system/arithmetics.nim");
	result = (NI)0;
	nimln_(414, "/home/yyoncho/Sources/nim/Nim/lib/system/arithmetics.nim");
	nimln_(418, "/home/yyoncho/Sources/nim/Nim/lib/system/arithmetics.nim");
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	popFrame();
	return result;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5841)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	nimfr_("usrToCell", "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(177, "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	T1_ = (NI)0;
	T1_ = minuspercent___system_716(((NI) (ptrdiff_t) (usr)), ((NI) 16));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y) {
	NIM_BOOL result;
	nimfr_("<%", "/home/yyoncho/Sources/nim/Nim/lib/system/comparisons.nim");
	result = (NIM_BOOL)0;
	nimln_(186, "/home/yyoncho/Sources/nim/Nim/lib/system/comparisons.nim");
	nimln_(188, "/home/yyoncho/Sources/nim/Nim/lib/system/comparisons.nim");
	result = ((NU64)(((NU) (x))) < (NU64)(((NU) (y))));
	popFrame();
	return result;
}
static N_INLINE(void, rtlAddZCT__system_5884)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	nimln_(243, "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	addZCT__system_5835((&gch__system_5774.zct), c);
	popFrame();
}
static N_INLINE(void, decRef__system_5886)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	nimln_(248, "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	(*c).refcount = minuspercent___system_716((*c).refcount, ((NI) 8));
	nimln_(249, "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent___system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		nimln_(250, "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
		rtlAddZCT__system_5884(c);
	}
	LA4_: ;
	popFrame();
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	nimln_(286, "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__system_5841(src);
		incRef__system_5879(T5_);
	}
	LA3_: ;
	nimln_(287, "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__system_5841((*dest));
		decRef__system_5886(T10_);
	}
	LA8_: ;
	nimln_(288, "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	(*dest) = src;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA*, newHttpHeaders__pureZhttpcore_114)(NIM_BOOL titleCase) {
	tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA* result;
	nimfr_("newHttpHeaders", "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	result = NIM_NIL;
	nimln_(135, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	result = (tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA*) newObj((&NTIhttpheaders__FbZeO4trJhT2CCJ9aLxejqw_), sizeof(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA));
	nimln_(136, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	asgnRef((void**) (&(*result).table), newTable__pureZhttpcore_120(((NI) 32)));
	nimln_(137, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	(*result).isTitleCase = titleCase;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toTitleCase__pureZhttpcore_101)(NimStringDesc* s) {
	NimStringDesc* result;
	NIM_BOOL upper;
	nimfr_("toTitleCase", "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	result = NIM_NIL;
	nimln_(123, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	if (((s ? s->Sup.len : 0)) < ((NI) 0) || ((s ? s->Sup.len : 0)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((s ? s->Sup.len : 0), ((NI) 0), ((NI) IL64(9223372036854775807))); }
	result = mnewString(((NI) ((s ? s->Sup.len : 0))));
	nimln_(124, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	upper = NIM_TRUE;
	{
		NI i;
		NI colontmp_;
		NI TM__Evu9b2R1utZubyCikahWx1g_8;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(125, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
		if (nimSubInt((s ? s->Sup.len : 0), ((NI) 1), &TM__Evu9b2R1utZubyCikahWx1g_8)) { raiseOverflow(); };
		colontmp_ = (NI)(TM__Evu9b2R1utZubyCikahWx1g_8);
		nimln_(90, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators_1.nim");
		res = ((NI) 0);
		{
			nimln_(91, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators_1.nim");
			while (1) {
				NI TM__Evu9b2R1utZubyCikahWx1g_9;
				if (!(res <= colontmp_)) goto LA3;
				nimln_(125, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
				i = res;
				if (i < 0 || i >= (result ? result->Sup.len : 0)){ raiseIndexError2(i,(result ? result->Sup.len : 0)-1); }
				nimln_(126, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
				{
					if (!upper) goto LA6_;
					if (i < 0 || i >= (s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
					result->data[i] = nsuToUpperAsciiChar(s->data[i]);
				}
				goto LA4_;
				LA6_: ;
				{
					if (i < 0 || i >= (s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
					result->data[i] = nsuToLowerAsciiChar(s->data[i]);
				}
				LA4_: ;
				nimln_(127, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
				if (i < 0 || i >= (s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				upper = ((NU8)(s->data[i]) == (NU8)(45));
				nimln_(93, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators_1.nim");
				if (nimAddInt(res, ((NI) 1), &TM__Evu9b2R1utZubyCikahWx1g_9)) { raiseOverflow(); };
				res = (NI)(TM__Evu9b2R1utZubyCikahWx1g_9);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}
static N_INLINE(NimStringDesc*, toCaseInsensitive__pureZhttpcore_110)(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA* headers, NimStringDesc* s) {
	NimStringDesc* result;
	nimfr_("toCaseInsensitive", "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
{	result = NIM_NIL;
	nimln_(130, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	{
		if (!(*headers).isTitleCase) goto LA3_;
		result = toTitleCase__pureZhttpcore_101(s);
	}
	goto LA1_;
	LA3_: ;
	{
		result = nsuToLowerAsciiStr(s);
	}
	LA1_: ;
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasKey__pureZhttpcore_4203)(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA* headers, NimStringDesc* key) {
	NIM_BOOL result;
	NimStringDesc* T1_;
	nimfr_("hasKey", "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
{	result = (NIM_BOOL)0;
	nimln_(221, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	T1_ = NIM_NIL;
	T1_ = toCaseInsensitive__pureZhttpcore_110(headers, key);
	result = hasKey__pureZhttpcore_1718((*headers).table, T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	nimfr_("nimGCunrefNoCycle", "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	nimln_(276, "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__system_5841(p);
	decRef__system_5886(T1_);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, add__pureZhttpcore_3972)(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA* headers, NimStringDesc* key, NimStringDesc* value) {
	nimfr_("add", "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	nimln_(199, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	{
		NimStringDesc* T3_;
		NIM_BOOL T4_;
		NimStringDesc* T7_;
		tySequence__sM4lkSb7zS6F7OVMvW9cffQ* T8_;
		NimStringDesc* T9_;
		T3_ = NIM_NIL;
		T3_ = toCaseInsensitive__pureZhttpcore_110(headers, key);
		T4_ = (NIM_BOOL)0;
		T4_ = hasKey__pureZhttpcore_1718((*headers).table, T3_);
		if (!!(T4_)) goto LA5_;
		nimln_(200, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
		T7_ = NIM_NIL;
		T7_ = toCaseInsensitive__pureZhttpcore_110(headers, key);
		T8_ = NIM_NIL;
		T8_ = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_), 1);
		T9_ = NIM_NIL;
		T9_ = T8_->data[0]; T8_->data[0] = copyStringRC1(value);
		if (T9_) nimGCunrefNoCycle(T9_);
		X5BX5Deq___pureZhttpcore_2122((*headers).table, T7_, T8_);
	}
	goto LA1_;
	LA5_: ;
	{
		NimStringDesc* T11_;
		tySequence__sM4lkSb7zS6F7OVMvW9cffQ** T12_;
		NI T13_;
		NimStringDesc* T14_;
		nimln_(202, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
		T11_ = NIM_NIL;
		T11_ = toCaseInsensitive__pureZhttpcore_110(headers, key);
		T12_ = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ**)0;
		T12_ = X5BX5D___pureZhttpcore_1883((*headers).table, T11_);
		unsureAsgnRef((void**) (&(*T12_)), (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV3((TGenericSeq*)((*T12_)), (&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_)));
		T13_ = (*T12_)->Sup.len++;
		T14_ = NIM_NIL;
		T14_ = (*T12_)->data[T13_]; (*T12_)->data[T13_] = copyStringRC1(value);
		if (T14_) nimGCunrefNoCycle(T14_);
	}
	LA1_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toString__pureZhttpcore_3149)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* values) {
	NimStringDesc* result;
	nimfr_("toString", "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
{	result = NIM_NIL;
	nimln_(173, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	if (((NI) 0) < 0 || ((NI) 0) >= (values ? values->Sup.len : 0)){ raiseIndexError2(((NI) 0),(values ? values->Sup.len : 0)-1); }
	result = copyString(values->data[((NI) 0)]);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*, X5BX5D___pureZhttpcore_3069)(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA* headers, NimStringDesc* key) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* result;
	NimStringDesc* T1_;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ** T2_;
	nimfr_("[]", "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
{	result = NIM_NIL;
	nimln_(170, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	T1_ = NIM_NIL;
	T1_ = toCaseInsensitive__pureZhttpcore_110(headers, key);
	T2_ = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ**)0;
	T2_ = X5BX5D___pureZhttpcore_1883((*headers).table, T1_);
	genericSeqAssign((&result), (*T2_), (&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_));
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*, getOrDefault__pureZhttpcore_4252)(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA* headers, NimStringDesc* key, tySequence__sM4lkSb7zS6F7OVMvW9cffQ* default_0) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* result;
	nimfr_("getOrDefault", "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
{	result = NIM_NIL;
	nimln_(227, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = hasKey__pureZhttpcore_4203(headers, key);
		if (!T3_) goto LA4_;
		nimln_(228, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
		result = X5BX5D___pureZhttpcore_3069(headers, key);
		goto BeforeRet_;
	}
	goto LA1_;
	LA4_: ;
	{
		nimln_(230, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
		genericSeqAssign((&result), default_0, (&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_));
		goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, X5BX5Deq___pureZhttpcore_3215)(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA* headers, NimStringDesc* key, NimStringDesc* value) {
	NimStringDesc* T1_;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* T2_;
	NimStringDesc* T3_;
	nimfr_("[]=", "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	nimln_(185, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	T1_ = NIM_NIL;
	T1_ = toCaseInsensitive__pureZhttpcore_110(headers, key);
	T2_ = NIM_NIL;
	T2_ = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_), 1);
	T3_ = NIM_NIL;
	T3_ = T2_->data[0]; T2_->data[0] = copyStringRC1(value);
	if (T3_) nimGCunrefNoCycle(T3_);
	X5BX5Deq___pureZhttpcore_2122((*headers).table, T1_, T2_);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, X5BX5Deq___pureZhttpcore_3269)(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA* headers, NimStringDesc* key, tySequence__sM4lkSb7zS6F7OVMvW9cffQ* value) {
	nimfr_("[]=", "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	nimln_(191, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	{
		NI T3_;
		NimStringDesc* T6_;
		T3_ = (value ? value->Sup.len : 0);
		if (!(((NI) 0) < T3_)) goto LA4_;
		nimln_(192, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
		T6_ = NIM_NIL;
		T6_ = toCaseInsensitive__pureZhttpcore_110(headers, key);
		X5BX5Deq___pureZhttpcore_2122((*headers).table, T6_, value);
	}
	goto LA1_;
	LA4_: ;
	{
		NimStringDesc* T8_;
		nimln_(194, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
		T8_ = NIM_NIL;
		T8_ = toCaseInsensitive__pureZhttpcore_110(headers, key);
		del__pureZhttpcore_3362((*headers).table, T8_);
	}
	LA1_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, del__pureZhttpcore_4133)(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA* headers, NimStringDesc* key) {
	NimStringDesc* T1_;
	nimfr_("del", "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	nimln_(206, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	T1_ = NIM_NIL;
	T1_ = toCaseInsensitive__pureZhttpcore_110(headers, key);
	del__pureZhttpcore_3362((*headers).table, T1_);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA*, newHttpHeaders__pureZhttpcore_1618)(tyTuple__UV3llMMYFckfui8YMBuUZA* keyValuePairs, NI keyValuePairsLen_0, NIM_BOOL titleCase) {
	tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA* result;
	nimfr_("newHttpHeaders", "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	result = NIM_NIL;
	nimln_(143, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	result = (tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA*) newObj((&NTIhttpheaders__FbZeO4trJhT2CCJ9aLxejqw_), sizeof(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA));
	nimln_(144, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	asgnRef((void**) (&(*result).table), newTable__pureZhttpcore_120(((NI) 32)));
	nimln_(145, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
	(*result).isTitleCase = titleCase;
	{
		tyTuple__UV3llMMYFckfui8YMBuUZA* pair;
		NI i;
		pair = (tyTuple__UV3llMMYFckfui8YMBuUZA*)0;
		nimln_(11, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
		i = ((NI) 0);
		{
			nimln_(12, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
			while (1) {
				NimStringDesc* key;
				NI TM__Evu9b2R1utZubyCikahWx1g_10;
				if (!(i < keyValuePairsLen_0)) goto LA3;
				nimln_(147, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
				if (i < 0 || i >= keyValuePairsLen_0){ raiseIndexError2(i,keyValuePairsLen_0-1); }
				pair = (&keyValuePairs[i]);
				nimln_(148, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
				key = toCaseInsensitive__pureZhttpcore_110(result, (*pair).Field0);
				nimln_(150, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
				{
					NIM_BOOL T6_;
					tySequence__sM4lkSb7zS6F7OVMvW9cffQ** T9_;
					NI T10_;
					NimStringDesc* T11_;
					T6_ = (NIM_BOOL)0;
					T6_ = contains__pureZhttpcore_1682((*result).table, key);
					if (!T6_) goto LA7_;
					nimln_(151, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
					T9_ = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ**)0;
					T9_ = X5BX5D___pureZhttpcore_1883((*result).table, key);
					unsureAsgnRef((void**) (&(*T9_)), (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV3((TGenericSeq*)((*T9_)), (&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_)));
					T10_ = (*T9_)->Sup.len++;
					T11_ = NIM_NIL;
					T11_ = (*T9_)->data[T10_]; (*T9_)->data[T10_] = copyStringRC1((*pair).Field1);
					if (T11_) nimGCunrefNoCycle(T11_);
				}
				goto LA4_;
				LA7_: ;
				{
					tySequence__sM4lkSb7zS6F7OVMvW9cffQ* T13_;
					NimStringDesc* T14_;
					nimln_(153, "/home/yyoncho/Sources/nim/Nim/lib/pure/httpcore.nim");
					T13_ = NIM_NIL;
					T13_ = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_), 1);
					T14_ = NIM_NIL;
					T14_ = T13_->data[0]; T13_->data[0] = copyStringRC1((*pair).Field1);
					if (T14_) nimGCunrefNoCycle(T14_);
					X5BX5Deq___pureZhttpcore_2122((*result).table, key, T13_);
				}
				LA4_: ;
				nimln_(14, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
				if (nimAddInt(i, ((NI) 1), &TM__Evu9b2R1utZubyCikahWx1g_10)) { raiseOverflow(); };
				i = (NI)(TM__Evu9b2R1utZubyCikahWx1g_10);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsNimatslibatspureatshttpcoredotnim_DatInit000)(void) {
static TNimNode* TM__Evu9b2R1utZubyCikahWx1g_2_2[2];
static TNimNode* TM__Evu9b2R1utZubyCikahWx1g_3_2[2];
static TNimNode* TM__Evu9b2R1utZubyCikahWx1g_4_3[3];
static TNimNode* TM__Evu9b2R1utZubyCikahWx1g_5_9[9];
NI TM__Evu9b2R1utZubyCikahWx1g_7;
static char* NIM_CONST TM__Evu9b2R1utZubyCikahWx1g_6[9] = {
"HEAD", 
"GET", 
"POST", 
"PUT", 
"DELETE", 
"TRACE", 
"OPTIONS", 
"CONNECT", 
"PATCH"};
static TNimNode TM__Evu9b2R1utZubyCikahWx1g_0[20];
NTIhttpheaders58objecttype__GM611pWlOrQ7hvMPcuAACA_.size = sizeof(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA);
NTIhttpheaders58objecttype__GM611pWlOrQ7hvMPcuAACA_.align = NIM_ALIGNOF(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA);
NTIhttpheaders58objecttype__GM611pWlOrQ7hvMPcuAACA_.kind = 18;
NTIhttpheaders58objecttype__GM611pWlOrQ7hvMPcuAACA_.base = 0;
TM__Evu9b2R1utZubyCikahWx1g_2_2[0] = &TM__Evu9b2R1utZubyCikahWx1g_0[1];
NTItable__qagh2zcXAhSb9aRfetCb26g_.size = sizeof(tyObject_Table__qagh2zcXAhSb9aRfetCb26g);
NTItable__qagh2zcXAhSb9aRfetCb26g_.align = NIM_ALIGNOF(tyObject_Table__qagh2zcXAhSb9aRfetCb26g);
NTItable__qagh2zcXAhSb9aRfetCb26g_.kind = 18;
NTItable__qagh2zcXAhSb9aRfetCb26g_.base = 0;
TM__Evu9b2R1utZubyCikahWx1g_3_2[0] = &TM__Evu9b2R1utZubyCikahWx1g_0[3];
NTIkeyvaluepair__g1w83cyyBYiVU9c8WEJWnjQ_.size = sizeof(tyTuple__g1w83cyyBYiVU9c8WEJWnjQ);
NTIkeyvaluepair__g1w83cyyBYiVU9c8WEJWnjQ_.align = NIM_ALIGNOF(tyTuple__g1w83cyyBYiVU9c8WEJWnjQ);
NTIkeyvaluepair__g1w83cyyBYiVU9c8WEJWnjQ_.kind = 18;
NTIkeyvaluepair__g1w83cyyBYiVU9c8WEJWnjQ_.base = 0;
TM__Evu9b2R1utZubyCikahWx1g_4_3[0] = &TM__Evu9b2R1utZubyCikahWx1g_0[5];
TM__Evu9b2R1utZubyCikahWx1g_0[5].kind = 1;
TM__Evu9b2R1utZubyCikahWx1g_0[5].offset = offsetof(tyTuple__g1w83cyyBYiVU9c8WEJWnjQ, Field0);
TM__Evu9b2R1utZubyCikahWx1g_0[5].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__Evu9b2R1utZubyCikahWx1g_0[5].name = "Field0";
TM__Evu9b2R1utZubyCikahWx1g_4_3[1] = &TM__Evu9b2R1utZubyCikahWx1g_0[6];
TM__Evu9b2R1utZubyCikahWx1g_0[6].kind = 1;
TM__Evu9b2R1utZubyCikahWx1g_0[6].offset = offsetof(tyTuple__g1w83cyyBYiVU9c8WEJWnjQ, Field1);
TM__Evu9b2R1utZubyCikahWx1g_0[6].typ = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
TM__Evu9b2R1utZubyCikahWx1g_0[6].name = "Field1";
TM__Evu9b2R1utZubyCikahWx1g_4_3[2] = &TM__Evu9b2R1utZubyCikahWx1g_0[7];
TM__Evu9b2R1utZubyCikahWx1g_0[7].kind = 1;
TM__Evu9b2R1utZubyCikahWx1g_0[7].offset = offsetof(tyTuple__g1w83cyyBYiVU9c8WEJWnjQ, Field2);
TM__Evu9b2R1utZubyCikahWx1g_0[7].typ = (&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_);
TM__Evu9b2R1utZubyCikahWx1g_0[7].name = "Field2";
TM__Evu9b2R1utZubyCikahWx1g_0[4].len = 3; TM__Evu9b2R1utZubyCikahWx1g_0[4].kind = 2; TM__Evu9b2R1utZubyCikahWx1g_0[4].sons = &TM__Evu9b2R1utZubyCikahWx1g_4_3[0];
NTIkeyvaluepair__g1w83cyyBYiVU9c8WEJWnjQ_.node = &TM__Evu9b2R1utZubyCikahWx1g_0[4];
NTIkeyvaluepairseq__JiteSJxrvz63iP2o9bcn2Sg_.size = sizeof(tySequence__JiteSJxrvz63iP2o9bcn2Sg*);
NTIkeyvaluepairseq__JiteSJxrvz63iP2o9bcn2Sg_.align = NIM_ALIGNOF(tySequence__JiteSJxrvz63iP2o9bcn2Sg*);
NTIkeyvaluepairseq__JiteSJxrvz63iP2o9bcn2Sg_.kind = 24;
NTIkeyvaluepairseq__JiteSJxrvz63iP2o9bcn2Sg_.base = (&NTIkeyvaluepair__g1w83cyyBYiVU9c8WEJWnjQ_);
NTIkeyvaluepairseq__JiteSJxrvz63iP2o9bcn2Sg_.marker = Marker_tySequence__JiteSJxrvz63iP2o9bcn2Sg;
TM__Evu9b2R1utZubyCikahWx1g_0[3].kind = 1;
TM__Evu9b2R1utZubyCikahWx1g_0[3].offset = offsetof(tyObject_Table__qagh2zcXAhSb9aRfetCb26g, data);
TM__Evu9b2R1utZubyCikahWx1g_0[3].typ = (&NTIkeyvaluepairseq__JiteSJxrvz63iP2o9bcn2Sg_);
TM__Evu9b2R1utZubyCikahWx1g_0[3].name = "data";
TM__Evu9b2R1utZubyCikahWx1g_3_2[1] = &TM__Evu9b2R1utZubyCikahWx1g_0[8];
TM__Evu9b2R1utZubyCikahWx1g_0[8].kind = 1;
TM__Evu9b2R1utZubyCikahWx1g_0[8].offset = offsetof(tyObject_Table__qagh2zcXAhSb9aRfetCb26g, counter);
TM__Evu9b2R1utZubyCikahWx1g_0[8].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__Evu9b2R1utZubyCikahWx1g_0[8].name = "counter";
TM__Evu9b2R1utZubyCikahWx1g_0[2].len = 2; TM__Evu9b2R1utZubyCikahWx1g_0[2].kind = 2; TM__Evu9b2R1utZubyCikahWx1g_0[2].sons = &TM__Evu9b2R1utZubyCikahWx1g_3_2[0];
NTItable__qagh2zcXAhSb9aRfetCb26g_.node = &TM__Evu9b2R1utZubyCikahWx1g_0[2];
NTItableref__jUGi19aimy3OEChVtuezLZg_.size = sizeof(tyObject_Table__qagh2zcXAhSb9aRfetCb26g*);
NTItableref__jUGi19aimy3OEChVtuezLZg_.align = NIM_ALIGNOF(tyObject_Table__qagh2zcXAhSb9aRfetCb26g*);
NTItableref__jUGi19aimy3OEChVtuezLZg_.kind = 22;
NTItableref__jUGi19aimy3OEChVtuezLZg_.base = (&NTItable__qagh2zcXAhSb9aRfetCb26g_);
NTItableref__jUGi19aimy3OEChVtuezLZg_.marker = Marker_tyRef__jUGi19aimy3OEChVtuezLZg;
TM__Evu9b2R1utZubyCikahWx1g_0[1].kind = 1;
TM__Evu9b2R1utZubyCikahWx1g_0[1].offset = offsetof(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA, table);
TM__Evu9b2R1utZubyCikahWx1g_0[1].typ = (&NTItableref__jUGi19aimy3OEChVtuezLZg_);
TM__Evu9b2R1utZubyCikahWx1g_0[1].name = "table";
TM__Evu9b2R1utZubyCikahWx1g_2_2[1] = &TM__Evu9b2R1utZubyCikahWx1g_0[9];
TM__Evu9b2R1utZubyCikahWx1g_0[9].kind = 1;
TM__Evu9b2R1utZubyCikahWx1g_0[9].offset = offsetof(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA, isTitleCase);
TM__Evu9b2R1utZubyCikahWx1g_0[9].typ = (&NTIbool__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__Evu9b2R1utZubyCikahWx1g_0[9].name = "isTitleCase";
TM__Evu9b2R1utZubyCikahWx1g_0[0].len = 2; TM__Evu9b2R1utZubyCikahWx1g_0[0].kind = 2; TM__Evu9b2R1utZubyCikahWx1g_0[0].sons = &TM__Evu9b2R1utZubyCikahWx1g_2_2[0];
NTIhttpheaders58objecttype__GM611pWlOrQ7hvMPcuAACA_.node = &TM__Evu9b2R1utZubyCikahWx1g_0[0];
NTIhttpheaders__FbZeO4trJhT2CCJ9aLxejqw_.size = sizeof(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA*);
NTIhttpheaders__FbZeO4trJhT2CCJ9aLxejqw_.align = NIM_ALIGNOF(tyObject_HttpHeaderscolonObjectType___GM611pWlOrQ7hvMPcuAACA*);
NTIhttpheaders__FbZeO4trJhT2CCJ9aLxejqw_.kind = 22;
NTIhttpheaders__FbZeO4trJhT2CCJ9aLxejqw_.base = (&NTIhttpheaders58objecttype__GM611pWlOrQ7hvMPcuAACA_);
NTIhttpheaders__FbZeO4trJhT2CCJ9aLxejqw_.marker = Marker_tyRef__FbZeO4trJhT2CCJ9aLxejqw;
NTIhttpmethod__wfZHspwVKQPl9aWhkIcMrAA_.size = sizeof(tyEnum_HttpMethod__wfZHspwVKQPl9aWhkIcMrAA);
NTIhttpmethod__wfZHspwVKQPl9aWhkIcMrAA_.align = NIM_ALIGNOF(tyEnum_HttpMethod__wfZHspwVKQPl9aWhkIcMrAA);
NTIhttpmethod__wfZHspwVKQPl9aWhkIcMrAA_.kind = 14;
NTIhttpmethod__wfZHspwVKQPl9aWhkIcMrAA_.base = 0;
NTIhttpmethod__wfZHspwVKQPl9aWhkIcMrAA_.flags = 3;
for (TM__Evu9b2R1utZubyCikahWx1g_7 = 0; TM__Evu9b2R1utZubyCikahWx1g_7 < 9; TM__Evu9b2R1utZubyCikahWx1g_7++) {
TM__Evu9b2R1utZubyCikahWx1g_0[TM__Evu9b2R1utZubyCikahWx1g_7+10].kind = 1;
TM__Evu9b2R1utZubyCikahWx1g_0[TM__Evu9b2R1utZubyCikahWx1g_7+10].offset = TM__Evu9b2R1utZubyCikahWx1g_7;
TM__Evu9b2R1utZubyCikahWx1g_0[TM__Evu9b2R1utZubyCikahWx1g_7+10].name = TM__Evu9b2R1utZubyCikahWx1g_6[TM__Evu9b2R1utZubyCikahWx1g_7];
TM__Evu9b2R1utZubyCikahWx1g_5_9[TM__Evu9b2R1utZubyCikahWx1g_7] = &TM__Evu9b2R1utZubyCikahWx1g_0[TM__Evu9b2R1utZubyCikahWx1g_7+10];
}
TM__Evu9b2R1utZubyCikahWx1g_0[19].len = 9; TM__Evu9b2R1utZubyCikahWx1g_0[19].kind = 2; TM__Evu9b2R1utZubyCikahWx1g_0[19].sons = &TM__Evu9b2R1utZubyCikahWx1g_5_9[0];
NTIhttpmethod__wfZHspwVKQPl9aWhkIcMrAA_.node = &TM__Evu9b2R1utZubyCikahWx1g_0[19];
}

