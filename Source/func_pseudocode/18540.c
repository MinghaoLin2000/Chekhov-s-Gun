$s19ControlCenterHelper13AuthorizationVwca
__int64 __fastcall assignWithCopy for Authorization(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  __int64 v7; // x22
  __int64 v8; // x8
  __int64 v9; // x19
  __int64 v10; // x20
  __int64 v11; // x0

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v6;
  swift_bridgeObjectRetain(v6);
  swift_bridgeObjectRelease(v7);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  v8 = *(int *)(a3 + 24);
  v9 = a1 + v8;
  v10 = a2 + v8;
  v11 = sub_10006EE70(0LL);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v11 - 8) + 24LL))(v9, v10, v11);
  return a1;
}