$s9SPIHelper12ShareAddressOwCP_0
__int64 __fastcall _s9SPIHelper12ShareAddressOwCP_0(__int64 a1, __int64 *a2)
{
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x22

  v3 = *a2;
  v4 = a2[1];
  v5 = *((unsigned __int8 *)a2 + 16);
  sub_10004EA50(*a2, v4, v5);
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 8) = v4;
  *(_BYTE *)(a1 + 16) = v5;
  return a1;
}