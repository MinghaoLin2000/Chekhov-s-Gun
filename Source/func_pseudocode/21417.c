$s22localspeechrecognition10ClientInfoV11LoggingInfoVwcp
__int64 __fastcall initializeWithCopy for ClientInfo.LoggingInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x22
  void (__fastcall *v7)(__int64, __int64, __int64); // x23
  __int64 v8; // x8
  _QWORD *v9; // x9
  _QWORD *v10; // x8
  __int64 v11; // x0

  v6 = sub_100040F10(0LL);
  v7 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v6 - 8) + 16LL);
  v7(a1, a2, v6);
  v7(a1 + *(int *)(a3 + 20), a2 + *(int *)(a3 + 20), v6);
  v8 = *(int *)(a3 + 24);
  v9 = (_QWORD *)(a1 + v8);
  v10 = (_QWORD *)(a2 + v8);
  v11 = v10[1];
  *v9 = *v10;
  v9[1] = v11;
  swift_bridgeObjectRetain(v11);
  return a1;
}