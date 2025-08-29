$s9SPIHelper12ShareAddressOwta
__int64 *__fastcall assignWithTake for ShareAddress(__int64 *a1, __int64 a2)
{
  char v3; // w9
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x2

  v3 = *(_BYTE *)(a2 + 16);
  v4 = *a1;
  v5 = a1[1];
  v6 = *((unsigned __int8 *)a1 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_BYTE *)a1 + 16) = v3;
  sub_10004EA58(v4, v5, v6);
  return a1;
}