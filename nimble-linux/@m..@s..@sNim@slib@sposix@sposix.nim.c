/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/types.h>
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
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_3527)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(int, WTERMSIG__posixZposix_1054)(int s);
N_LIB_PRIVATE TNimType NTIpid__r9bTMVI8f19ah9b11jMgY4kPg_;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
extern NIM_THREADVAR TFrame* framePtr__system_3094;
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, WIFSIGNALED__posixZposix_1063)(int s) {
	NIM_BOOL result;
	NI TM__mJPr4mHlDfNAl9asG6X7NFA_2;
	nimfr_("WIFSIGNALED", "/home/yyoncho/Sources/nim/Nim/lib/posix/posix_linux_amd64.nim");
	result = (NIM_BOOL)0;
	nimln_(576, "/home/yyoncho/Sources/nim/Nim/lib/posix/posix_linux_amd64.nim");
	if (nimAddInt((NI32)(s & ((NI32) 127)), ((NI32) 1), &TM__mJPr4mHlDfNAl9asG6X7NFA_2)) { raiseOverflow(); };
	if (TM__mJPr4mHlDfNAl9asG6X7NFA_2 < (-2147483647 -1) || TM__mJPr4mHlDfNAl9asG6X7NFA_2 > 2147483647){ raiseOverflow(); }
	result = (((NI8) 0) < (NI8)((NI64)(((NI8) ((NI32)(TM__mJPr4mHlDfNAl9asG6X7NFA_2)))) >> (NU64)(((NI) 1))));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, WTERMSIG__posixZposix_1054)(int s) {
	int result;
	nimfr_("WTERMSIG", "/home/yyoncho/Sources/nim/Nim/lib/posix/posix_linux_amd64.nim");
	result = (int)0;
	nimln_(573, "/home/yyoncho/Sources/nim/Nim/lib/posix/posix_linux_amd64.nim");
	result = (NI32)(s & ((NI32) 127));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, WEXITSTATUS__posixZposix_1047)(int s) {
	int result;
	nimfr_("WEXITSTATUS", "/home/yyoncho/Sources/nim/Nim/lib/posix/posix_linux_amd64.nim");
	result = (int)0;
	nimln_(572, "/home/yyoncho/Sources/nim/Nim/lib/posix/posix_linux_amd64.nim");
	result = (NI32)((NI64)((NI32)(s & ((NI32) 65280))) >> (NU64)(((NI) 8)));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, WIFEXITED__posixZposix_1060)(int s) {
	NIM_BOOL result;
	int T1_;
	nimfr_("WIFEXITED", "/home/yyoncho/Sources/nim/Nim/lib/posix/posix_linux_amd64.nim");
	result = (NIM_BOOL)0;
	nimln_(575, "/home/yyoncho/Sources/nim/Nim/lib/posix/posix_linux_amd64.nim");
	T1_ = (int)0;
	T1_ = WTERMSIG__posixZposix_1054(s);
	result = (T1_ == ((NI32) 0));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsNimatslibatsposixatsposixdotnim_DatInit000)(void) {
NTIpid__r9bTMVI8f19ah9b11jMgY4kPg_.size = sizeof(pid_t);
NTIpid__r9bTMVI8f19ah9b11jMgY4kPg_.align = NIM_ALIGNOF(pid_t);
NTIpid__r9bTMVI8f19ah9b11jMgY4kPg_.kind = 34;
NTIpid__r9bTMVI8f19ah9b11jMgY4kPg_.base = 0;
NTIpid__r9bTMVI8f19ah9b11jMgY4kPg_.flags = 3;
}

