$s19ControlCenterHelper13AuthorizationVwtk
__int64 __fastcall initializeWithTake for Authorization(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  v4 = *(int *)(a3 + 24);
  v5 = a1 + v4;
  v6 = a2 + v4;
  v7 = sub_10006EE70(0LL);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v7 - 8) + 32LL))(v5, v6, v7);
  return a1;
}