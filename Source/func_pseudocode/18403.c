_$s19ControlCenterHelper04WiFiC0C13authorization33_F14D4C22208E7A416F4CC2A655BC16A0LLAA13AuthorizationVvpfi
__int64 __usercall variable initialization expression of WiFiHelper.authorization@<X0>(__int64 a1@<X8>)
{
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 v4; // x0
  __int64 result; // x0

  if ( qword_1000939D8 != -1 )
    swift_once(&qword_1000939D8, sub_1000159B4);
  v2 = sub_10006EE70(0LL);
  v3 = sub_10000677C(v2, &unk_1000976F0);
  v4 = type metadata accessor for Authorization(0LL);
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v2 - 8) + 16LL))(
             a1 + *(int *)(v4 + 24),
             v3,
             v2);
  strcpy((char *)a1, "com.apple.wifi");
  *(_BYTE *)(a1 + 15) = -18;
  *(_DWORD *)(a1 + 16) = 3;
  return result;
}