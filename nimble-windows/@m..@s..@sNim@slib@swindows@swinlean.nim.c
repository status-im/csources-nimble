/* Generated by Nim Compiler v1.7.1 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include "winsock2.h"
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
  typedef struct tyObject_GUID__J2WQBMgezjwf6Trblkflgg tyObject_GUID__J2WQBMgezjwf6Trblkflgg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_OVERLAPPED__9ayhTq9cybD7eA9aZA09akSNXg tyObject_OVERLAPPED__9ayhTq9cybD7eA9aZA09akSNXg;
typedef struct tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA;
typedef struct tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ;
typedef struct tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog;
typedef struct tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA;
typedef struct tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw;
typedef struct tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw;
typedef struct tyObject_STARTUPINFO__WGlpKvY9cdd69bAwMQMNLYoQ tyObject_STARTUPINFO__WGlpKvY9cdd69bAwMQMNLYoQ;
typedef struct tyObject_PROCESS_INFORMATION__rpgAdaffN9b79bo2kEQiFsMg tyObject_PROCESS_INFORMATION__rpgAdaffN9b79bo2kEQiFsMg;
typedef struct tyObject_BY_HANDLE_FILE_INFORMATION__49aFvsJR4kDeMwx9cbYIqPzg tyObject_BY_HANDLE_FILE_INFORMATION__49aFvsJR4kDeMwx9cbYIqPzg;
typedef NI8 tyArray__9cWG514ToTTjfTPLhXXV0IQ[8];
struct tyObject_GUID__J2WQBMgezjwf6Trblkflgg {
NI32 D1;
NI16 D2;
NI16 D3;
tyArray__9cWG514ToTTjfTPLhXXV0IQ D4;
};
typedef N_STDCALL_PTR(NCSTRING, tyProc__5ctyytqoGFQ0BA1imFGbVw) (int family, void* paddr, NCSTRING pStringBuffer, NI32 stringBufSize);
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(int, tyProc__As5z9bYt859cLKWaorPRgQYA) (NI16 wVersionRequired, WSADATA* WSData);
typedef N_STDCALL_PTR(NI32, tyProc__aO673xGTLLxou7P7GxoCXA) (NI32 dwFlags, void* lpSource, NI32 dwMessageId, NI32 dwLanguageId, void* lpBuffer, NI32 nSize, void* arguments);
typedef N_STDCALL_PTR(void, tyProc__im9buRnIvptJfzdASYMEbBA) (void* p);
typedef N_STDCALL_PTR(NI32, tyProc__9bXer9a4ps9aSGctILcxWReVw) (void);
typedef N_STDCALL_PTR(NI, tyProc__9aO2cP4IgwjXF8JfUR57CHQ) (int af, int typ, int protocol);
typedef N_STDCALL_PTR(int, tyProc__IQbFr9cLT9bipWCXYfwYwjOw) (NI s);
typedef N_STDCALL_PTR(void, tyProc__X0Q3cs1Ai9bfe54O0LJQ1fQ) (NI32 para1, NI32 para2, tyObject_OVERLAPPED__9ayhTq9cybD7eA9aZA09akSNXg* para3);
typedef N_STDCALL_PTR(int, tyProc__m8OtNuKklv1X2vQjXQkzSA) (NI s, NI32 dwIoControlCode, void* lpvInBuffer, NI32 cbInBuffer, void* lpvOutBuffer, NI32 cbOutBuffer, NI32* lpcbBytesReturned, tyObject_OVERLAPPED__9ayhTq9cybD7eA9aZA09akSNXg* lpOverlapped, tyProc__X0Q3cs1Ai9bfe54O0LJQ1fQ lpCompletionRoutine);
typedef N_STDCALL_PTR(NI, tyProc__zP2zGemcuVRvOUE82f9a0Pw) (NI32 nStdHandle);
typedef N_STDCALL_PTR(NI32, tyProc__upTK7viB3ItEbrKv1N4qcg) (NI32 nBufferLength, NI16* lpBuffer);
typedef N_STDCALL_PTR(NI16*, tyProc__dQrdVesp1gLEVufnwKAlGA) (void);
typedef N_STDCALL_PTR(NI32, tyProc__2Dt6vzy4xOVEtn3qjtrTDQ) (NI16* lpFileName);
typedef N_STDCALL_PTR(NI32, tyProc__OOyWBIidJm2ts1p9ci5TMxQ) (NI16* pathName, void* security);
typedef N_STDCALL_PTR(NI, tyProc__lLim4ugM6CVjiaTaa7eXVA) (NI16* lpFileName, tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* lpFindFileData);
typedef N_STDCALL_PTR(void, tyProc__ofoySXaAAlxxs9bQS9a1etlg) (NI hFindFile);
typedef N_STDCALL_PTR(NI32, tyProc__jwEWAkul5J6p6K0UfXa1tw) (NI hFindFile, tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* lpFindFileData);
typedef N_STDCALL_PTR(NI32, tyProc__LGDJfXC77WFm4ami8tbVyg) (NI handle, NI16* buf, NI32 size);
typedef N_STDCALL_PTR(int, tyProc__MvjKU9c5nvs0N3IrS4vNgSw) (NCSTRING nodename, NCSTRING servname, tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ* hints, tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ** res);
typedef N_STDCALL_PTR(void, tyProc__IV3cwg4tBg3JP8ITSKt7oQ) (tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ* ai);
typedef N_STDCALL_PTR(int, tyProc__T129bsPZ4FvuSF4rGFSBKkg) (NI s, SOCKADDR* name, unsigned int namelen);
typedef N_STDCALL_PTR(int, tyProc__4YBDaTH9b4xNNXSV9ahdJZ8w) (NI s, void* buf, int len, int flags);
typedef NI tyArray__SLBTEB08vk46ttuRaTxAYw[64];
struct tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog {
int fd_count;
tyArray__SLBTEB08vk46ttuRaTxAYw fd_array;
};
typedef N_STDCALL_PTR(int, tyProc__rWrG4X5lbcXQyLNkF9aNWhQ) (int nfds, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* readfds, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* writefds, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* exceptfds, tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA* timeout);
typedef N_STDCALL_PTR(NIM_BOOL, tyProc__8Py1tJvU9bm83KdBcpIBjeQ) (NI s, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* set);
struct tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw {
NI32 dwLowDateTime;
NI32 dwHighDateTime;
};
typedef NI16 tyArray__EKfNt9b8uxndgFbu2Ky3XAQ[260];
typedef NI16 tyArray__Get9cpRTS5VjGKP6CDsI9bYA[14];
struct tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA {
NI32 dwFileAttributes;
tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw ftCreationTime;
tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw ftLastAccessTime;
tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw ftLastWriteTime;
NI32 nFileSizeHigh;
NI32 nFileSizeLow;
NI32 dwReserved0;
NI32 dwReserved1;
tyArray__EKfNt9b8uxndgFbu2Ky3XAQ cFileName;
tyArray__Get9cpRTS5VjGKP6CDsI9bYA cAlternateFileName;
};
typedef N_STDCALL_PTR(NI32, tyProc__9cfAa2qMwRsugQ9bZaJfhIcQ) (NI16* lpExistingFileName, NI16* lpNewFileName, NI32 bFailIfExists);
typedef N_STDCALL_PTR(NI32, tyProc__HH5OcpN6GzcD9cRu6eeMBGw) (NI16* lpFileName, NI32 dwFileAttributes);
typedef N_STDCALL_PTR(NI32, tyProc__hHrNIgHA5HNxhRfMx6QeWg) (NI16* lpApplicationName, NI16* lpCommandLine, tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw* lpProcessAttributes, tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw* lpThreadAttributes, NI32 bInheritHandles, NI32 dwCreationFlags, NI16* lpEnvironment, NI16* lpCurrentDirectory, tyObject_STARTUPINFO__WGlpKvY9cdd69bAwMQMNLYoQ* lpStartupInfo, tyObject_PROCESS_INFORMATION__rpgAdaffN9b79bo2kEQiFsMg* lpProcessInformation);
typedef N_STDCALL_PTR(NI32, tyProc__P13srMBg9b3d3yEV9aW4NCoA) (NI hObject);
typedef N_STDCALL_PTR(NI32, tyProc__FprzxJFfqQdWyyGxiUsmeQ) (NI hHandle, NI32 dwMilliseconds);
typedef N_STDCALL_PTR(NI32, tyProc__KxeGXN001TReCr89ca9c5bng) (NI hProcess, NI32* lpExitCode);
typedef N_STDCALL_PTR(NI32, tyProc__C5kM33gEhlSKPXwfDNHofQ) (NI* hReadPipe, NI* hWritePipe, tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw* lpPipeAttributes, NI32 nSize);
typedef N_STDCALL_PTR(NI32, tyProc__mBVOPXmpGfUrrbA9a5K9cMbQ) (NI hObject, NI32 dwMask, NI32 dwFlags);
typedef N_STDCALL_PTR(NI, tyProc__ox3t5iM0vxm1voo9c2CrxLQ) (NI16* lpName, NI32 dwOpenMode, NI32 dwPipeMode, NI32 nMaxInstances, NI32 nOutBufferSize, NI32 nInBufferSize, NI32 nDefaultTimeOut, tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw* lpSecurityAttributes);
typedef N_STDCALL_PTR(NI, tyProc__A2Q4AG9aesAd2D8S5BP4y2g) (NI16* lpFileName, NI32 dwDesiredAccess, NI32 dwShareMode, void* lpSecurityAttributes, NI32 dwCreationDisposition, NI32 dwFlagsAndAttributes, NI hTemplateFile);
typedef N_STDCALL_PTR(NI, tyProc__uryidYWkntM7ddjZSyxvyQ) (void);
typedef N_STDCALL_PTR(NI32, tyProc__oew1DfaGl5XhHmnBK0HYXQ) (NI hSourceProcessHandle, NI hSourceHandle, NI hTargetProcessHandle, NI* lpTargetHandle, NI32 dwDesiredAccess, NI32 bInheritHandle, NI32 dwOptions);
typedef N_STDCALL_PTR(NI32, tyProc__9ajZYMGL5GqiRFqiCC367oA) (NI hFile, void* buffer, NI32 nNumberOfBytesToRead, NI32* lpNumberOfBytesRead, void* lpOverlapped);
typedef N_STDCALL_PTR(NI32, tyProc__Fy3maWJHyCtUWvrB9bSdkUw) (NI16* lpFileName, NI32 nBufferLength, NI16* lpBuffer, NI16** lpFilePart);
typedef N_STDCALL_PTR(NI32, tyProc__FN3T2Ayq25KKUPXpk9acG1g) (NI hFile, tyObject_BY_HANDLE_FILE_INFORMATION__49aFvsJR4kDeMwx9cbYIqPzg* lpFileInformation);
typedef N_STDCALL_PTR(int, tyProc__XG9bMafAwcENm7BYV2xEMUg) (NI hConsoleInput, void* lpBuffer, int nLength, int* lpNumberOfEventsRead);
typedef N_STDCALL_PTR(void, tyProc__Tjolzh1w2dIIpj3oCDGPFw) (NI32 dwMilliseconds);
typedef N_STDCALL_PTR(NI, tyProc__zKRRdAZhB37HYjlJgTxZRg) (NI hwnd, NI16* lpOperation, NI16* lpFile, NI16* lpParameters, NI16* lpDirectory, NI32 nShowCmd);
typedef N_STDCALL_PTR(void, tyProc__9bc9cLDdaqTE6n5J78feKRYg) (tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw* lpSystemTimeAsFileTime);
typedef NIM_CHAR tyArray__EWK8XzFKXCg2WflN3ijhqA[257];
typedef NIM_CHAR tyArray__4249al09aeC68W9cvqMnjIYOA[129];
typedef NIM_CHAR tyArray__NSMq3FMCIrS8gSbyinBZ8w[14];
N_LIB_PRIVATE N_NIMCALL(void*, loadLib__pureZdynlib_3)(NimStringDesc* path, NIM_BOOL globalSymbols);
N_LIB_PRIVATE N_NIMCALL(void*, symAddr__pureZdynlib_30)(void* lib, NCSTRING name);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_3455)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NI64, ze64__system_292)(NI32 x);
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_2, "Ws2_32.dll", 10);
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_5, "Ws2_32.dll", 10);
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_10, "kernel32", 8);
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_11, "kernel32", 8);
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_101, "shell32.dll", 11);
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_102, "shell32.dll", 11);
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_CONNECTEX__windowsZwinlean_712 = {((NI32) 631375801), ((NI16) -8717), ((NI16) 18016), {((NI8) -114),
((NI8) -23),
((NI8) 118),
((NI8) -27),
((NI8) -116),
((NI8) 116),
((NI8) 6),
((NI8) 62)}
}
;
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_ACCEPTEX__windowsZwinlean_713 = {((NI32) -1254720015), ((NI16) -13396), ((NI16) 4559), {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
}
;
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_GETACCEPTEXSOCKADDRS__windowsZwinlean_714 = {((NI32) -1254720014), ((NI16) -13396), ((NI16) 4559), {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
}
;
N_LIB_PRIVATE tyProc__5ctyytqoGFQ0BA1imFGbVw inet_ntop_real__windowsZwinlean_803 = NIM_NIL;
N_LIB_PRIVATE void* ws2__windowsZwinlean_804;
static void* TM__k6kyf4Co79a84IkK9blFuQVA_3;
tyProc__As5z9bYt859cLKWaorPRgQYA Dl_1392509457_;
static void* TM__k6kyf4Co79a84IkK9blFuQVA_8;
tyProc__aO673xGTLLxou7P7GxoCXA Dl_1392509101_;
tyProc__im9buRnIvptJfzdASYMEbBA Dl_1392509109_;
tyProc__9bXer9a4ps9aSGctILcxWReVw Dl_1392509098_;
tyProc__9aO2cP4IgwjXF8JfUR57CHQ Dl_1392509357_;
tyProc__IQbFr9cLT9bipWCXYfwYwjOw Dl_1392509361_;
tyProc__m8OtNuKklv1X2vQjXQkzSA Dl_1392509661_;
tyProc__zP2zGemcuVRvOUE82f9a0Pw Dl_1392509091_;
tyProc__upTK7viB3ItEbrKv1N4qcg Dl_1392509111_;
tyProc__dQrdVesp1gLEVufnwKAlGA Dl_1392509210_;
tyProc__2Dt6vzy4xOVEtn3qjtrTDQ Dl_1392509191_;
tyProc__OOyWBIidJm2ts1p9ci5TMxQ Dl_1392509116_;
tyProc__lLim4ugM6CVjiaTaa7eXVA Dl_1392509178_;
tyProc__ofoySXaAAlxxs9bQS9a1etlg Dl_1392509184_;
tyProc__jwEWAkul5J6p6K0UfXa1tw Dl_1392509181_;
tyProc__LGDJfXC77WFm4ami8tbVyg Dl_1392509124_;
tyProc__MvjKU9c5nvs0N3IrS4vNgSw Dl_1392509460_;
tyProc__IV3cwg4tBg3JP8ITSKt7oQ Dl_1392509465_;
tyProc__T129bsPZ4FvuSF4rGFSBKkg Dl_1392509371_;
tyProc__4YBDaTH9b4xNNXSV9ahdJZ8w Dl_1392509416_;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
extern NIM_THREADVAR TFrame* framePtr__system_3022;
tyProc__rWrG4X5lbcXQyLNkF9aNWhQ Dl_1392509410_;
tyProc__8Py1tJvU9bm83KdBcpIBjeQ Dl_1392509441_;
tyProc__4YBDaTH9b4xNNXSV9ahdJZ8w Dl_1392509398_;
tyProc__9cfAa2qMwRsugQ9bZaJfhIcQ Dl_1392509196_;
tyProc__2Dt6vzy4xOVEtn3qjtrTDQ Dl_1392509114_;
tyProc__2Dt6vzy4xOVEtn3qjtrTDQ Dl_1392509534_;
tyProc__HH5OcpN6GzcD9cRu6eeMBGw Dl_1392509193_;
tyProc__hHrNIgHA5HNxhRfMx6QeWg Dl_1392509067_;
tyProc__P13srMBg9b3d3yEV9aW4NCoA Dl_1392509032_;
tyProc__FprzxJFfqQdWyyGxiUsmeQ Dl_1392509082_;
tyProc__KxeGXN001TReCr89ca9c5bng Dl_1392509088_;
tyProc__C5kM33gEhlSKPXwfDNHofQ Dl_1392509046_;
tyProc__mBVOPXmpGfUrrbA9a5K9cMbQ Dl_1392509521_;
tyProc__ox3t5iM0vxm1voo9c2CrxLQ Dl_1392509051_;
tyProc__A2Q4AG9aesAd2D8S5BP4y2g Dl_1392509526_;
tyProc__uryidYWkntM7ddjZSyxvyQ Dl_1392509525_;
tyProc__oew1DfaGl5XhHmnBK0HYXQ Dl_1392509510_;
tyProc__9ajZYMGL5GqiRFqiCC367oA Dl_1392509034_;
tyProc__9ajZYMGL5GqiRFqiCC367oA Dl_1392509040_;
tyProc__Fy3maWJHyCtUWvrB9bSdkUw Dl_1392509186_;
tyProc__2Dt6vzy4xOVEtn3qjtrTDQ Dl_1392509119_;
tyProc__FN3T2Ayq25KKUPXpk9acG1g Dl_1392509236_;
tyProc__XG9bMafAwcENm7BYV2xEMUg Dl_1392509985_;
tyProc__Tjolzh1w2dIIpj3oCDGPFw Dl_1392509227_;
static void* TM__k6kyf4Co79a84IkK9blFuQVA_99;
tyProc__zKRRdAZhB37HYjlJgTxZRg Dl_1392509229_;
tyProc__9bc9cLDdaqTE6n5J78feKRYg Dl_1392509225_;
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
N_LIB_PRIVATE N_NIMCALL(void, FD_ZERO__windowsZwinlean_527)(tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* s) {
	nimfr_("FD_ZERO", "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
	nimln_(664, "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
	(*s).fd_count = ((int) 0);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, FD_SET__windowsZwinlean_520)(NI socket_0, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* s) {
	nimfr_("FD_SET", "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
	nimln_(659, "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
	{
		NI TM__k6kyf4Co79a84IkK9blFuQVA_50;
		if (!((*s).fd_count < ((NI32) 64))) goto LA3_;
		if ((NU)(((NI) ((*s).fd_count))) > (NU)(63)){ raiseIndexError2(((NI) ((*s).fd_count)), 63); }
		nimln_(660, "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
		(*s).fd_array[(((NI) ((*s).fd_count)))- 0] = socket_0;
		nimln_(661, "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
		if (nimAddInt((*s).fd_count, ((NI) 1), &TM__k6kyf4Co79a84IkK9blFuQVA_50)) { raiseOverflow(); };
		if (TM__k6kyf4Co79a84IkK9blFuQVA_50 < (-2147483647 -1) || TM__k6kyf4Co79a84IkK9blFuQVA_50 > 2147483647){ raiseOverflow(); }
		(*s).fd_count = (int)(TM__k6kyf4Co79a84IkK9blFuQVA_50);
	}
	LA3_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(int, FD_ISSET__windowsZwinlean_516)(NI socket_0, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* set) {
	int result;
	nimfr_("FD_ISSET", "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
	result = (int)0;
	nimln_(656, "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = Dl_1392509441_(socket_0, set);
		if (!T3_) goto LA4_;
		result = ((int) 1);
	}
	goto LA1_;
	LA4_: ;
	{
		result = ((int) 0);
	}
	LA1_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, rdFileSize__windowsZwinlean_290)(tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* f) {
	NI64 result;
	NI64 T1_;
	NI64 T2_;
	nimfr_("rdFileSize", "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
	result = (NI64)0;
	nimln_(428, "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
	T1_ = (NI64)0;
	T1_ = ze64__system_292((*f).nFileSizeLow);
	T2_ = (NI64)0;
	T2_ = ze64__system_292((*f).nFileSizeHigh);
	result = (NI64)(T1_ | (NI64)((NU64)(T2_) << (NU64)(((NI) 32))));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, rdFileTime__windowsZwinlean_283)(tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw f) {
	NI64 result;
	NI64 T1_;
	NI64 T2_;
	nimfr_("rdFileTime", "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
	result = (NI64)0;
	nimln_(425, "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
	T1_ = (NI64)0;
	T1_ = ze64__system_292(f.dwLowDateTime);
	T2_ = (NI64)0;
	T2_ = ze64__system_292(f.dwHighDateTime);
	result = (NI64)(T1_ | (NI64)((NU64)(T2_) << (NU64)(((NI) 32))));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsNimatslibatswindowsatswinleandotnim_Init000)(void) {
{
	nimfr_("winlean", "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
	nimln_(942, "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
	ws2__windowsZwinlean_804 = loadLib__pureZdynlib_3(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_2), NIM_FALSE);
	nimln_(943, "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
	{
		void* T5_;
		if (!!((ws2__windowsZwinlean_804 == NIM_NIL))) goto LA3_;
		nimln_(944, "/home/yyoncho/Sources/nim/Nim/lib/windows/winlean.nim");
		T5_ = (void*)0;
		T5_ = symAddr__pureZdynlib_30(ws2__windowsZwinlean_804, "inet_ntop");
		inet_ntop_real__windowsZwinlean_803 = ((tyProc__5ctyytqoGFQ0BA1imFGbVw) (T5_));
	}
	LA3_: ;
	popFrame();
}
}

N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsNimatslibatswindowsatswinleandotnim_DatInit000)(void) {
if (!((TM__k6kyf4Co79a84IkK9blFuQVA_3 = nimLoadLibrary(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_5)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_2));
	Dl_1392509457_ = (tyProc__As5z9bYt859cLKWaorPRgQYA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "WSAStartup");
if (!((TM__k6kyf4Co79a84IkK9blFuQVA_8 = nimLoadLibrary(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_10)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_11));
	Dl_1392509101_ = (tyProc__aO673xGTLLxou7P7GxoCXA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "FormatMessageW");
	Dl_1392509109_ = (tyProc__im9buRnIvptJfzdASYMEbBA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "LocalFree");
	Dl_1392509098_ = (tyProc__9bXer9a4ps9aSGctILcxWReVw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "GetLastError");
	Dl_1392509357_ = (tyProc__9aO2cP4IgwjXF8JfUR57CHQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "socket");
	Dl_1392509361_ = (tyProc__IQbFr9cLT9bipWCXYfwYwjOw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "closesocket");
	Dl_1392509661_ = (tyProc__m8OtNuKklv1X2vQjXQkzSA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "WSAIoctl");
	Dl_1392509091_ = (tyProc__zP2zGemcuVRvOUE82f9a0Pw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "GetStdHandle");
	Dl_1392509111_ = (tyProc__upTK7viB3ItEbrKv1N4qcg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "GetCurrentDirectoryW");
	Dl_1392509210_ = (tyProc__dQrdVesp1gLEVufnwKAlGA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "GetCommandLineW");
	Dl_1392509191_ = (tyProc__2Dt6vzy4xOVEtn3qjtrTDQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "GetFileAttributesW");
	Dl_1392509116_ = (tyProc__OOyWBIidJm2ts1p9ci5TMxQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "CreateDirectoryW");
	Dl_1392509178_ = (tyProc__lLim4ugM6CVjiaTaa7eXVA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "FindFirstFileW");
	Dl_1392509184_ = (tyProc__ofoySXaAAlxxs9bQS9a1etlg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "FindClose");
	Dl_1392509181_ = (tyProc__jwEWAkul5J6p6K0UfXa1tw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "FindNextFileW");
	Dl_1392509124_ = (tyProc__LGDJfXC77WFm4ami8tbVyg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "GetModuleFileNameW");
	Dl_1392509460_ = (tyProc__MvjKU9c5nvs0N3IrS4vNgSw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "getaddrinfo");
	Dl_1392509465_ = (tyProc__IV3cwg4tBg3JP8ITSKt7oQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "freeaddrinfo");
	Dl_1392509371_ = (tyProc__T129bsPZ4FvuSF4rGFSBKkg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "connect");
	Dl_1392509416_ = (tyProc__4YBDaTH9b4xNNXSV9ahdJZ8w) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "send");
	Dl_1392509410_ = (tyProc__rWrG4X5lbcXQyLNkF9aNWhQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "select");
	Dl_1392509441_ = (tyProc__8Py1tJvU9bm83KdBcpIBjeQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "__WSAFDIsSet");
	Dl_1392509398_ = (tyProc__4YBDaTH9b4xNNXSV9ahdJZ8w) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "recv");
	Dl_1392509196_ = (tyProc__9cfAa2qMwRsugQ9bZaJfhIcQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "CopyFileW");
	Dl_1392509114_ = (tyProc__2Dt6vzy4xOVEtn3qjtrTDQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "SetCurrentDirectoryW");
	Dl_1392509534_ = (tyProc__2Dt6vzy4xOVEtn3qjtrTDQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "DeleteFileW");
	Dl_1392509193_ = (tyProc__HH5OcpN6GzcD9cRu6eeMBGw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "SetFileAttributesW");
	Dl_1392509067_ = (tyProc__hHrNIgHA5HNxhRfMx6QeWg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "CreateProcessW");
	Dl_1392509032_ = (tyProc__P13srMBg9b3d3yEV9aW4NCoA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "CloseHandle");
	Dl_1392509082_ = (tyProc__FprzxJFfqQdWyyGxiUsmeQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "WaitForSingleObject");
	Dl_1392509088_ = (tyProc__KxeGXN001TReCr89ca9c5bng) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "GetExitCodeProcess");
	Dl_1392509046_ = (tyProc__C5kM33gEhlSKPXwfDNHofQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "CreatePipe");
	Dl_1392509521_ = (tyProc__mBVOPXmpGfUrrbA9a5K9cMbQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "SetHandleInformation");
	Dl_1392509051_ = (tyProc__ox3t5iM0vxm1voo9c2CrxLQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "CreateNamedPipeW");
	Dl_1392509526_ = (tyProc__A2Q4AG9aesAd2D8S5BP4y2g) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "CreateFileW");
	Dl_1392509525_ = (tyProc__uryidYWkntM7ddjZSyxvyQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "GetCurrentProcess");
	Dl_1392509510_ = (tyProc__oew1DfaGl5XhHmnBK0HYXQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "DuplicateHandle");
	Dl_1392509034_ = (tyProc__9ajZYMGL5GqiRFqiCC367oA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "ReadFile");
	Dl_1392509040_ = (tyProc__9ajZYMGL5GqiRFqiCC367oA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "WriteFile");
	Dl_1392509186_ = (tyProc__Fy3maWJHyCtUWvrB9bSdkUw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "GetFullPathNameW");
	Dl_1392509119_ = (tyProc__2Dt6vzy4xOVEtn3qjtrTDQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "RemoveDirectoryW");
	Dl_1392509236_ = (tyProc__FN3T2Ayq25KKUPXpk9acG1g) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "GetFileInformationByHandle");
	Dl_1392509985_ = (tyProc__XG9bMafAwcENm7BYV2xEMUg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "ReadConsoleInputW");
	Dl_1392509227_ = (tyProc__Tjolzh1w2dIIpj3oCDGPFw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "Sleep");
if (!((TM__k6kyf4Co79a84IkK9blFuQVA_99 = nimLoadLibrary(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_101)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_102));
	Dl_1392509229_ = (tyProc__zKRRdAZhB37HYjlJgTxZRg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_99, "ShellExecuteW");
	Dl_1392509225_ = (tyProc__9bc9cLDdaqTE6n5J78feKRYg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_8, "GetSystemTimeAsFileTime");
}

