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
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 tyEnum_Event__nI40bZzTyYVrl763dZ9aHDg;
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
typedef NU32 tySet_tyEnum_Event__nI40bZzTyYVrl763dZ9aHDg;
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_LIB_PRIVATE TNimType NTIevent__nI40bZzTyYVrl763dZ9aHDg_;
N_LIB_PRIVATE TNimType NTIsetLeventT__YIRsZrDT89buh37M5yeUgng_;
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminusathversionminus1minus6atslibatspureatsselectorsdotnim_DatInit000)(void) {
static TNimNode* TM__ln5vuDpFyDrAqQbYD2g52Q_2_17[17];
NI TM__ln5vuDpFyDrAqQbYD2g52Q_4;
static char* NIM_CONST TM__ln5vuDpFyDrAqQbYD2g52Q_3[17] = {
"Read", 
"Write", 
"Timer", 
"Signal", 
"Process", 
"Vnode", 
"User", 
"Error", 
"Oneshot", 
"Finished", 
"VnodeWrite", 
"VnodeDelete", 
"VnodeExtend", 
"VnodeAttrib", 
"VnodeLink", 
"VnodeRename", 
"VnodeRevoke"};
static TNimNode TM__ln5vuDpFyDrAqQbYD2g52Q_0[19];
NTIevent__nI40bZzTyYVrl763dZ9aHDg_.size = sizeof(tyEnum_Event__nI40bZzTyYVrl763dZ9aHDg);
NTIevent__nI40bZzTyYVrl763dZ9aHDg_.align = NIM_ALIGNOF(tyEnum_Event__nI40bZzTyYVrl763dZ9aHDg);
NTIevent__nI40bZzTyYVrl763dZ9aHDg_.kind = 14;
NTIevent__nI40bZzTyYVrl763dZ9aHDg_.base = 0;
NTIevent__nI40bZzTyYVrl763dZ9aHDg_.flags = 3;
for (TM__ln5vuDpFyDrAqQbYD2g52Q_4 = 0; TM__ln5vuDpFyDrAqQbYD2g52Q_4 < 17; TM__ln5vuDpFyDrAqQbYD2g52Q_4++) {
TM__ln5vuDpFyDrAqQbYD2g52Q_0[TM__ln5vuDpFyDrAqQbYD2g52Q_4+0].kind = 1;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[TM__ln5vuDpFyDrAqQbYD2g52Q_4+0].offset = TM__ln5vuDpFyDrAqQbYD2g52Q_4;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[TM__ln5vuDpFyDrAqQbYD2g52Q_4+0].name = TM__ln5vuDpFyDrAqQbYD2g52Q_3[TM__ln5vuDpFyDrAqQbYD2g52Q_4];
TM__ln5vuDpFyDrAqQbYD2g52Q_2_17[TM__ln5vuDpFyDrAqQbYD2g52Q_4] = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[TM__ln5vuDpFyDrAqQbYD2g52Q_4+0];
}
TM__ln5vuDpFyDrAqQbYD2g52Q_0[17].len = 17; TM__ln5vuDpFyDrAqQbYD2g52Q_0[17].kind = 2; TM__ln5vuDpFyDrAqQbYD2g52Q_0[17].sons = &TM__ln5vuDpFyDrAqQbYD2g52Q_2_17[0];
NTIevent__nI40bZzTyYVrl763dZ9aHDg_.node = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[17];
NTIsetLeventT__YIRsZrDT89buh37M5yeUgng_.size = sizeof(tySet_tyEnum_Event__nI40bZzTyYVrl763dZ9aHDg);
NTIsetLeventT__YIRsZrDT89buh37M5yeUgng_.align = NIM_ALIGNOF(tySet_tyEnum_Event__nI40bZzTyYVrl763dZ9aHDg);
NTIsetLeventT__YIRsZrDT89buh37M5yeUgng_.kind = 19;
NTIsetLeventT__YIRsZrDT89buh37M5yeUgng_.base = (&NTIevent__nI40bZzTyYVrl763dZ9aHDg_);
NTIsetLeventT__YIRsZrDT89buh37M5yeUgng_.flags = 3;
TM__ln5vuDpFyDrAqQbYD2g52Q_0[18].len = 0; TM__ln5vuDpFyDrAqQbYD2g52Q_0[18].kind = 0;
NTIsetLeventT__YIRsZrDT89buh37M5yeUgng_.node = &TM__ln5vuDpFyDrAqQbYD2g52Q_0[18];
}

