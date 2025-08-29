$s22localspeechrecognition10ClientInfoV11LoggingInfoVwtk
__int64 __fastcall initializeWithTake for ClientInfo.LoggingInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x22
  void (__fastcall *v7)(__int64, __int64, __int64); // x23

  v6 = sub_100040F10(0LL);
  v7 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v6 - 8) + 32LL);
  v7(a1, a2, v6);
  v7(a1 + *(int *)(a3 + 20), a2 + *(int *)(a3 + 20), v6);
  *(_OWORD *)(a1 + *(int *)(a3 + 24)) = *(_OWORD *)(a2 + *(int *)(a3 + 24));
  return a1;
}