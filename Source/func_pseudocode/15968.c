_uarpPrintDataResponseDetails
__int64 __fastcall uarpPrintDataResponseDetails(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  void (*v12)(__int64, __int64, const char *, ...); // x25
  __int64 v13; // x24
  __int64 v14; // x8
  const char *v15; // x26
  const char *v16; // x0
  __int64 (*v17)(_QWORD, __int64, const char *, ...); // x8
  __int64 v18; // x9
  const char *v19; // x9
  const char *v20; // x10

  v12 = *(void (**)(__int64, __int64, const char *, ...))(a1 + 408);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 544);
    v14 = *(int *)(a1 + 552);
    if ( (unsigned int)v14 > 2 )
      v15 = "<unknown>";
    else
      v15 = (&off_1000247C0)[v14];
    v16 = uarpStatusCodeToString(a4);
    v12(
      v13,
      1LL,
      "<ROLE=%s> UARP.LAYER2.DATA.RESP status=<%s>, offset=0x%08x, requestedlength=%u, respondedlength=%u",
      v15,
      v16,
      a5,
      a6,
      a7);
  }
  else
  {
    uarpStatusCodeToString(a4);
    uarpLogInfo(1, "<ROLE=%s> UARP.LAYER2.DATA.RESP status=<%s>, offset=0x%08x, requestedlength=%u, respondedlength=%u");
  }
  v17 = *(__int64 (**)(_QWORD, __int64, const char *, ...))(a1 + 408);
  if ( !v17 )
    return uarpLogInfo(
             1,
             "<ROLE=%s> UARP.LAYER2.DATA.RESP Outstanding Data Request <%s>, offset=0x%08x, requestedlength=%u");
  v18 = *(int *)(a1 + 552);
  if ( (unsigned int)v18 > 2 )
    v19 = "<unknown>";
  else
    v19 = (&off_1000247C0)[v18];
  if ( *(_BYTE *)(a3 + 80) == 1 )
    v20 = "YES";
  else
    v20 = "NO";
  return v17(
           *(_QWORD *)(a1 + 544),
           1LL,
           "<ROLE=%s> UARP.LAYER2.DATA.RESP Outstanding Data Request <%s>, offset=0x%08x, requestedlength=%u",
           v19,
           v20,
           *(_DWORD *)(a3 + 92),
           *(_DWORD *)(a3 + 96));
}