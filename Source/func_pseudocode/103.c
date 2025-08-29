$s9SPIHelper12SharingErrorOwca
__int64 *__fastcall assignWithCopy for SharingError(__int64 *a1, __int64 *a2)
{
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x24
  __int64 v8; // x25
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  v7 = a2[4];
  v8 = *((unsigned __int8 *)a2 + 40);
  sub_100010754(*a2, v4, v5, v6, v7, v8);
  v9 = *a1;
  v10 = a1[1];
  v11 = a1[2];
  v12 = a1[3];
  v13 = a1[4];
  *a1 = v3;
  a1[1] = v4;
  a1[2] = v5;
  a1[3] = v6;
  a1[4] = v7;
  v14 = *((unsigned __int8 *)a1 + 40);
  *((_BYTE *)a1 + 40) = v8;
  sub_10000E6D8(v9, v10, v11, v12, v13, v14);
  return a1;
}