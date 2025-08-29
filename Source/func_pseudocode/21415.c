$s22localspeechrecognition10ClientInfoV11LoggingInfoVwCP
__int64 *__fastcall initializeBufferWithCopyOfBuffer for ClientInfo.LoggingInfo(__int64 *a1, __int64 *a2, __int64 a3)
{
  int v5; // w8
  __int64 v7; // x22
  void (__fastcall *v8)(__int64 *, __int64 *, __int64); // x23
  __int64 v9; // x8
  _QWORD *v10; // x9
  _QWORD *v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  v5 = *(_DWORD *)(*(_QWORD *)(a3 - 8) + 80LL);
  if ( (v5 & 0x20000) != 0 )
  {
    v13 = *a2;
    *a1 = *a2;
    a1 = (__int64 *)(v13 + (((unsigned __int8)v5 + 16LL) & ~(unsigned __int64)(unsigned __int8)v5));
    swift_retain();
  }
  else
  {
    v7 = sub_100040F10(0LL);
    v8 = *(void (__fastcall **)(__int64 *, __int64 *, __int64))(*(_QWORD *)(v7 - 8) + 16LL);
    v8(a1, a2, v7);
    v8((__int64 *)((char *)a1 + *(int *)(a3 + 20)), (__int64 *)((char *)a2 + *(int *)(a3 + 20)), v7);
    v9 = *(int *)(a3 + 24);
    v10 = (__int64 *)((char *)a1 + v9);
    v11 = (__int64 *)((char *)a2 + v9);
    v12 = v11[1];
    *v10 = *v11;
    v10[1] = v12;
    swift_bridgeObjectRetain(v12);
  }
  return a1;
}