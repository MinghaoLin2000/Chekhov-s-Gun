$s19ControlCenterHelper13AuthorizationVwcp
__int64 __fastcall initializeWithCopy for Authorization(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // x20
  __int64 v5; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  void (__fastcall *v9)(__int64, __int64, __int64); // x24

  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  v5 = *(int *)(a3 + 24);
  v6 = a1 + v5;
  v7 = a2 + v5;
  v8 = sub_10006EE70(0LL);
  v9 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v8 - 8) + 16LL);
  swift_bridgeObjectRetain(v4);
  v9(v6, v7, v8);
  return a1;
}