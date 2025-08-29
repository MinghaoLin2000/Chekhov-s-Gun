$s19ControlCenterHelper13AuthorizationVwCP
_QWORD *__fastcall initializeBufferWithCopyOfBuffer for Authorization(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v3; // x19
  int v4; // w8
  __int64 v5; // x20
  __int64 v6; // x8
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  void (__fastcall *v10)(__int64, __int64, __int64); // x24
  __int64 v11; // x0

  v3 = (_QWORD *)a1;
  v4 = *(_DWORD *)(*(_QWORD *)(a3 - 8) + 80LL);
  if ( (v4 & 0x20000) != 0 )
  {
    v11 = *a2;
    *v3 = *a2;
    v3 = (_QWORD *)(v11 + (((unsigned __int8)v4 + 16LL) & ~(unsigned __int64)(unsigned __int8)v4));
    swift_retain(v11);
  }
  else
  {
    v5 = a2[1];
    *(_QWORD *)a1 = *a2;
    *(_QWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 16) = *((_DWORD *)a2 + 4);
    v6 = *(int *)(a3 + 24);
    v7 = a1 + v6;
    v8 = (__int64)a2 + v6;
    v9 = sub_10006EE70(0LL);
    v10 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v9 - 8) + 16LL);
    swift_bridgeObjectRetain(v5);
    v10(v7, v8, v9);
  }
  return v3;
}