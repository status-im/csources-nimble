/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/types.h>
                          #include <pthread.h>
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
  typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tySequence__MFIxnpZlYyn0JQ9av9cKcm2Q tySequence__MFIxnpZlYyn0JQ9av9cKcm2Q;
typedef struct tyObject_PackageInfo__y9ahmwzrCcWrfsrJgR1q4lw tyObject_PackageInfo__y9ahmwzrCcWrfsrJgR1q4lw;
typedef struct tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg;
typedef struct tySequence__4eRCaZmrYLLw2k30GPTiMw tySequence__4eRCaZmrYLLw2k30GPTiMw;
typedef struct tySequence__kLwf9aGQcuduFr4gekUDa2w tySequence__kLwf9aGQcuduFr4gekUDa2w;
typedef struct tyObject_Table__Ji6x6JQ0gVMaFr8AIk18Ug tyObject_Table__Ji6x6JQ0gVMaFr8AIk18Ug;
typedef struct tySequence__SFipDZIkFtPcrLs0AGBBjQ tySequence__SFipDZIkFtPcrLs0AGBBjQ;
typedef struct tyTuple__BjxoJYFE5BulbiU15SM6nQ tyTuple__BjxoJYFE5BulbiU15SM6nQ;
typedef struct tyObject_Version__9bU0a4Oqtl9aJmGyzYi8ZnBA tyObject_Version__9bU0a4Oqtl9aJmGyzYi8ZnBA;
typedef struct tyObject_Sha1Hash__zQwLVDNef3gJr9bhL9bRloJw tyObject_Sha1Hash__zQwLVDNef3gJr9bhL9bRloJw;
typedef struct tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ;
typedef struct tySequence__ZkxkVxJvB9aqet9cfVQmFTZw tySequence__ZkxkVxJvB9aqet9cfVQmFTZw;
typedef struct tyObject_PackageMetaData__EO1rPizWROcibmAlVzA30w tyObject_PackageMetaData__EO1rPizWROcibmAlVzA30w;
typedef struct tyObject_HashSet__aCgx9aJWOlGNhL9b41LIC4Wg tyObject_HashSet__aCgx9aJWOlGNhL9b41LIC4Wg;
typedef struct tySequence__72hOjuY2LKiowAwLCg19a9bA tySequence__72hOjuY2LKiowAwLCg19a9bA;
typedef struct tyTuple__QeWl6B6ffS4pU6WWrtcrDw tyTuple__QeWl6B6ffS4pU6WWrtcrDw;
typedef struct tyTuple__gDWaEqPfhOauJWKMBm8bzg tyTuple__gDWaEqPfhOauJWKMBm8bzg;
typedef struct tyObject_VersionRangeObj__FrJQzed5Yezqp6gCbEyg0w tyObject_VersionRangeObj__FrJQzed5Yezqp6gCbEyg0w;
typedef struct tyTuple__8ZxhPt1NwfElsJs8zUSV9bg tyTuple__8ZxhPt1NwfElsJs8zUSV9bg;
typedef struct tyTuple__m8l9a4rYFktlUTIniXgnvog tyTuple__m8l9a4rYFktlUTIniXgnvog;
typedef struct tyObject_LockFileDep__PkUOL8vzIvRRmF9bLOPRlhg tyObject_LockFileDep__PkUOL8vzIvRRmF9bLOPRlhg;
typedef struct tyObject_Checksums__aZcxVfkZCt9bd29bg29aMe9aaA tyObject_Checksums__aZcxVfkZCt9bd29bg29aMe9aaA;
typedef struct tyTuple__r1NtfsBxxsYs1cV48P1DyA tyTuple__r1NtfsBxxsYs1cV48P1DyA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef long tyArray__xDUyu9aScDpt0JZLU6q9aEZQ[5];
struct tyObject_SharedList__JI9cx34TL8n3aOKF6tSMBUw {
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* head;
tyObject_SharedListNodecolonObjectType___KGw0YAw6W9aSz3Sr9aXGu7zg* tail;
pthread_mutex_t lock;
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
struct tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg {
tySequence__4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
};
struct tyObject_Table__Ji6x6JQ0gVMaFr8AIk18Ug {
tySequence__SFipDZIkFtPcrLs0AGBBjQ* data;
NI counter;
};
struct tyObject_Version__9bU0a4Oqtl9aJmGyzYi8ZnBA {
NimStringDesc* version;
};
struct tyObject_Sha1Hash__zQwLVDNef3gJr9bhL9bRloJw {
NimStringDesc* hashValue;
};
struct tyTuple__BjxoJYFE5BulbiU15SM6nQ {
NimStringDesc* Field0;
tyObject_Version__9bU0a4Oqtl9aJmGyzYi8ZnBA Field1;
tyObject_Sha1Hash__zQwLVDNef3gJr9bhL9bRloJw Field2;
};
struct tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ {
tySequence__ZkxkVxJvB9aqet9cfVQmFTZw* data;
NI counter;
NI first;
NI last;
};
typedef NU8 tyEnum_DownloadMethod__IqkMKe5PGkzDG0ayIWPJ6w;
struct tyObject_HashSet__aCgx9aJWOlGNhL9b41LIC4Wg {
tySequence__72hOjuY2LKiowAwLCg19a9bA* data;
NI counter;
};
struct tyObject_PackageMetaData__EO1rPizWROcibmAlVzA30w {
NimStringDesc* url;
tyEnum_DownloadMethod__IqkMKe5PGkzDG0ayIWPJ6w downloadMethod;
tyObject_Sha1Hash__zQwLVDNef3gJr9bhL9bRloJw vcsRevision;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* files;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* binaries;
tyObject_HashSet__aCgx9aJWOlGNhL9b41LIC4Wg specialVersions;
};
struct tyObject_PackageInfo__y9ahmwzrCcWrfsrJgR1q4lw {
NimStringDesc* myPath;
NIM_BOOL isNimScript;
NIM_BOOL isMinimal;
NIM_BOOL isInstalled;
tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg nimbleTasks;
tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg postHooks;
tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg preHooks;
NimStringDesc* author;
NimStringDesc* description;
NimStringDesc* license;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* skipDirs;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* skipFiles;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* skipExt;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* installDirs;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* installFiles;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* installExt;
tySequence__kLwf9aGQcuduFr4gekUDa2w* requires;
tyObject_Table__Ji6x6JQ0gVMaFr8AIk18Ug bin;
NimStringDesc* binDir;
NimStringDesc* srcDir;
NimStringDesc* backend;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* foreignDeps;
tyTuple__BjxoJYFE5BulbiU15SM6nQ basicInfo;
tyObject_OrderedTable__b2SAayIK9c6IoZnFt9cutJhQ lockedDeps;
tyObject_PackageMetaData__EO1rPizWROcibmAlVzA30w metaData;
NIM_BOOL isLink;
};
struct tyTuple__QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
};
struct tyTuple__gDWaEqPfhOauJWKMBm8bzg {
NimStringDesc* Field0;
tyObject_VersionRangeObj__FrJQzed5Yezqp6gCbEyg0w* Field1;
};
struct tyTuple__8ZxhPt1NwfElsJs8zUSV9bg {
NI Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
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
struct tyTuple__m8l9a4rYFktlUTIniXgnvog {
NI Field0;
NI Field1;
NimStringDesc* Field2;
tyObject_LockFileDep__PkUOL8vzIvRRmF9bLOPRlhg Field3;
};
struct tyTuple__r1NtfsBxxsYs1cV48P1DyA {
NI Field0;
tyObject_Version__9bU0a4Oqtl9aJmGyzYi8ZnBA Field1;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__MFIxnpZlYyn0JQ9av9cKcm2Q {
  TGenericSeq Sup;
  tyObject_PackageInfo__y9ahmwzrCcWrfsrJgR1q4lw data[SEQ_DECL_SIZE];
};
struct tySequence__4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  tyTuple__QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
struct tySequence__kLwf9aGQcuduFr4gekUDa2w {
  TGenericSeq Sup;
  tyTuple__gDWaEqPfhOauJWKMBm8bzg data[SEQ_DECL_SIZE];
};
struct tySequence__SFipDZIkFtPcrLs0AGBBjQ {
  TGenericSeq Sup;
  tyTuple__8ZxhPt1NwfElsJs8zUSV9bg data[SEQ_DECL_SIZE];
};
struct tySequence__ZkxkVxJvB9aqet9cfVQmFTZw {
  TGenericSeq Sup;
  tyTuple__m8l9a4rYFktlUTIniXgnvog data[SEQ_DECL_SIZE];
};
struct tySequence__72hOjuY2LKiowAwLCg19a9bA {
  TGenericSeq Sup;
  tyTuple__r1NtfsBxxsYs1cV48P1DyA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, setLengthSeqV2)(TGenericSeq* s, TNimType* typ, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__system_5898)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_3527)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5860)(void* usr);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(void, decRef__system_5905)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__system_5903)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__system_5854)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(void, genericAssign)(void* dest, void* src, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_56)(NimStringDesc* msg);
extern TNimType NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_;
extern TNimType NTIseqLpackageinfoT__MFIxnpZlYyn0JQ9av9cKcm2Q_;
extern TNimType NTIpackageinfo__y9ahmwzrCcWrfsrJgR1q4lw_;
STRING_LITERAL(TM__77ITQxrABVT9b2GcbWeV4SQ_14, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim(243, 11) `len(a) == L` the length of the seq changed while iterating over it", 131);
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__system_5793;
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
static N_INLINE(void, incRef__system_5898)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
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
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5860)(void* usr) {
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
static N_INLINE(void, rtlAddZCT__system_5903)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	nimln_(243, "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	addZCT__system_5854((&gch__system_5793.zct), c);
	popFrame();
}
static N_INLINE(void, decRef__system_5905)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
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
		rtlAddZCT__system_5903(c);
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
		T5_ = usrToCell__system_5860(src);
		incRef__system_5898(T5_);
	}
	LA3_: ;
	nimln_(287, "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__system_5860((*dest));
		decRef__system_5905(T10_);
	}
	LA8_: ;
	nimln_(288, "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	(*dest) = src;
	popFrame();
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	nimfr_("nimGCunrefNoCycle", "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	nimln_(276, "/home/yyoncho/Sources/nim/Nim/lib/system/gc.nim");
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__system_5860(p);
	decRef__system_5905(T1_);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, insert__nimblepkgZoptions_2007)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ** dest, NimStringDesc** src, NI srcLen_0, NI pos) {
	NI j;
	NI T1_;
	NI TM__77ITQxrABVT9b2GcbWeV4SQ_2;
	NI i;
	NI TM__77ITQxrABVT9b2GcbWeV4SQ_3;
	NI TM__77ITQxrABVT9b2GcbWeV4SQ_4;
	NI TM__77ITQxrABVT9b2GcbWeV4SQ_7;
	nimfr_("insert", "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
{	nimln_(599, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
	T1_ = ((*dest) ? (*dest)->Sup.len : 0);
	if (nimSubInt(T1_, ((NI) 1), &TM__77ITQxrABVT9b2GcbWeV4SQ_2)) { raiseOverflow(); };
	j = (NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_2);
	nimln_(600, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
	if (nimAddInt(j, srcLen_0, &TM__77ITQxrABVT9b2GcbWeV4SQ_3)) { raiseOverflow(); };
	i = (NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_3);
	nimln_(601, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
	{
		if (!(i == j)) goto LA4_;
		goto BeforeRet_;
	}
	LA4_: ;
	nimln_(602, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
	if (nimAddInt(i, ((NI) 1), &TM__77ITQxrABVT9b2GcbWeV4SQ_4)) { raiseOverflow(); };
	if (((NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_4)) < ((NI) 0) || ((NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_4)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_4), ((NI) 0), ((NI) IL64(9223372036854775807))); }
	unsureAsgnRef((void**) (&(*dest)), (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) setLengthSeqV2(&((*dest))->Sup, (&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_), ((NI) ((NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_4)))));
	{
		nimln_(605, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
		while (1) {
			NI TM__77ITQxrABVT9b2GcbWeV4SQ_5;
			NI TM__77ITQxrABVT9b2GcbWeV4SQ_6;
			if (!(pos <= j)) goto LA7;
			if (i < 0 || i >= ((*dest) ? (*dest)->Sup.len : 0)){ raiseIndexError2(i,((*dest) ? (*dest)->Sup.len : 0)-1); }
			nimln_(609, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
			if (j < 0 || j >= ((*dest) ? (*dest)->Sup.len : 0)){ raiseIndexError2(j,((*dest) ? (*dest)->Sup.len : 0)-1); }
			asgnRef((void**) (&(*dest)->data[i]), (*dest)->data[j]);
			nimln_(610, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
			if (nimSubInt(i, ((NI) 1), &TM__77ITQxrABVT9b2GcbWeV4SQ_5)) { raiseOverflow(); };
			i = (NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_5);
			nimln_(611, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
			if (nimSubInt(j, ((NI) 1), &TM__77ITQxrABVT9b2GcbWeV4SQ_6)) { raiseOverflow(); };
			j = (NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_6);
		} LA7: ;
	}
	nimln_(613, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
	if (nimAddInt(j, ((NI) 1), &TM__77ITQxrABVT9b2GcbWeV4SQ_7)) { raiseOverflow(); };
	j = (NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_7);
	{
		NimStringDesc** item;
		NI i_2;
		item = (NimStringDesc**)0;
		nimln_(11, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
		i_2 = ((NI) 0);
		{
			nimln_(12, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
			while (1) {
				NimStringDesc* T11_;
				NI TM__77ITQxrABVT9b2GcbWeV4SQ_8;
				NI TM__77ITQxrABVT9b2GcbWeV4SQ_9;
				if (!(i_2 < srcLen_0)) goto LA10;
				nimln_(614, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
				if (i_2 < 0 || i_2 >= srcLen_0){ raiseIndexError2(i_2,srcLen_0-1); }
				item = (&src[i_2]);
				if (j < 0 || j >= ((*dest) ? (*dest)->Sup.len : 0)){ raiseIndexError2(j,((*dest) ? (*dest)->Sup.len : 0)-1); }
				nimln_(615, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
				T11_ = NIM_NIL;
				T11_ = (*dest)->data[j]; (*dest)->data[j] = copyStringRC1((*item));
				if (T11_) nimGCunrefNoCycle(T11_);
				nimln_(614, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
				if (nimAddInt(j, ((NI) 1), &TM__77ITQxrABVT9b2GcbWeV4SQ_8)) { raiseOverflow(); };
				j = (NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_8);
				nimln_(14, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
				if (nimAddInt(i_2, ((NI) 1), &TM__77ITQxrABVT9b2GcbWeV4SQ_9)) { raiseOverflow(); };
				i_2 = (NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_9);
			} LA10: ;
		}
	}
	}BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(tySequence__MFIxnpZlYyn0JQ9av9cKcm2Q*, concat__nimble_276)(tySequence__MFIxnpZlYyn0JQ9av9cKcm2Q** seqs, NI seqsLen_0) {
	tySequence__MFIxnpZlYyn0JQ9av9cKcm2Q* result;
	NI L;
	NI i_2;
	nimfr_("concat", "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
	result = NIM_NIL;
	nimln_(134, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
	L = ((NI) 0);
	{
		tySequence__MFIxnpZlYyn0JQ9av9cKcm2Q** seqitm;
		NI i;
		seqitm = (tySequence__MFIxnpZlYyn0JQ9av9cKcm2Q**)0;
		nimln_(11, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
		i = ((NI) 0);
		{
			nimln_(12, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
			while (1) {
				NI T4_;
				NI TM__77ITQxrABVT9b2GcbWeV4SQ_10;
				NI TM__77ITQxrABVT9b2GcbWeV4SQ_11;
				if (!(i < seqsLen_0)) goto LA3;
				nimln_(135, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
				if (i < 0 || i >= seqsLen_0){ raiseIndexError2(i,seqsLen_0-1); }
				seqitm = (&seqs[i]);
				T4_ = ((*seqitm) ? (*seqitm)->Sup.len : 0);
				if (nimAddInt(L, T4_, &TM__77ITQxrABVT9b2GcbWeV4SQ_10)) { raiseOverflow(); };
				L = (NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_10);
				nimln_(14, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
				if (nimAddInt(i, ((NI) 1), &TM__77ITQxrABVT9b2GcbWeV4SQ_11)) { raiseOverflow(); };
				i = (NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_11);
			} LA3: ;
		}
	}
	nimln_(136, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
	if ((L) < ((NI) 0) || (L) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(L, ((NI) 0), ((NI) IL64(9223372036854775807))); }
	result = (tySequence__MFIxnpZlYyn0JQ9av9cKcm2Q*) newSeq((&NTIseqLpackageinfoT__MFIxnpZlYyn0JQ9av9cKcm2Q_), ((NI) (L)));
	nimln_(137, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
	i_2 = ((NI) 0);
	{
		tySequence__MFIxnpZlYyn0JQ9av9cKcm2Q** s;
		NI i_3;
		s = (tySequence__MFIxnpZlYyn0JQ9av9cKcm2Q**)0;
		nimln_(11, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
		i_3 = ((NI) 0);
		{
			nimln_(12, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
			while (1) {
				NI TM__77ITQxrABVT9b2GcbWeV4SQ_15;
				if (!(i_3 < seqsLen_0)) goto LA7;
				nimln_(138, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
				if (i_3 < 0 || i_3 >= seqsLen_0){ raiseIndexError2(i_3,seqsLen_0-1); }
				s = (&seqs[i_3]);
				{
					tyObject_PackageInfo__y9ahmwzrCcWrfsrJgR1q4lw* itm;
					NI i_4;
					NI L_2;
					NI T9_;
					itm = (tyObject_PackageInfo__y9ahmwzrCcWrfsrJgR1q4lw*)0;
					nimln_(238, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
					i_4 = ((NI) 0);
					nimln_(239, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
					T9_ = ((*s) ? (*s)->Sup.len : 0);
					L_2 = T9_;
					{
						nimln_(240, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
						while (1) {
							NI TM__77ITQxrABVT9b2GcbWeV4SQ_12;
							NI TM__77ITQxrABVT9b2GcbWeV4SQ_13;
							if (!(i_4 < L_2)) goto LA11;
							nimln_(139, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
							if (i_4 < 0 || i_4 >= ((*s) ? (*s)->Sup.len : 0)){ raiseIndexError2(i_4,((*s) ? (*s)->Sup.len : 0)-1); }
							itm = (&(*s)->data[i_4]);
							if (i_2 < 0 || i_2 >= (result ? result->Sup.len : 0)){ raiseIndexError2(i_2,(result ? result->Sup.len : 0)-1); }
							nimln_(140, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
							genericAssign((void*)(&result->data[i_2]), (void*)(&(*itm)), (&NTIpackageinfo__y9ahmwzrCcWrfsrJgR1q4lw_));
							nimln_(139, "/home/yyoncho/Sources/nim/Nim/lib/pure/collections/sequtils.nim");
							if (nimAddInt(i_2, ((NI) 1), &TM__77ITQxrABVT9b2GcbWeV4SQ_12)) { raiseOverflow(); };
							i_2 = (NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_12);
							nimln_(242, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
							if (nimAddInt(i_4, ((NI) 1), &TM__77ITQxrABVT9b2GcbWeV4SQ_13)) { raiseOverflow(); };
							i_4 = (NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_13);
							nimln_(243, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
							{
								NI T14_;
								T14_ = ((*s) ? (*s)->Sup.len : 0);
								if (!!((T14_ == L_2))) goto LA15_;
								failedAssertImpl__stdZassertions_56(((NimStringDesc*) &TM__77ITQxrABVT9b2GcbWeV4SQ_14));
							}
							LA15_: ;
						} LA11: ;
					}
				}
				nimln_(14, "/home/yyoncho/Sources/nim/Nim/lib/system/iterators.nim");
				if (nimAddInt(i_3, ((NI) 1), &TM__77ITQxrABVT9b2GcbWeV4SQ_15)) { raiseOverflow(); };
				i_3 = (NI)(TM__77ITQxrABVT9b2GcbWeV4SQ_15);
			} LA7: ;
		}
	}
	popFrame();
	return result;
}
