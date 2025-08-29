_UARPLayer2VendorSpecificRecvMessage
__int64 __fastcall UARPLayer2VendorSpecificRecvMessage(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // x6
  __int64 (*v4)(void); // x6

  v2 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1[60];
  if ( v2 )
    return v2(a1[68], *(_QWORD *)(a2 + 40));
  v4 = (__int64 (*)(void))a1[74];
  if ( v4 )
    return v4();
  else
    return 14LL;
}