$s9SPIHelper12ShareAddressOwca
__int64 *__fastcall assignWithCopy for ShareAddress(__int64 *a1, __int64 *a2)
{
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2

  v3 = *a2;
  v4 = a2[1];
  v5 = *((unsigned __int8 *)a2 + 16);
  sub_10004EA50(*a2, v4, v5);
  v6 = *a1;
  v7 = a1[1];
  v8 = *((unsigned __int8 *)a1 + 16);
  *a1 = v3;
  a1[1] = v4;
  *((_BYTE *)a1 + 16) = v5;
  sub_10004EA58(v6, v7, v8);
  return a1;
}