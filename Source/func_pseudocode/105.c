$s9SPIHelper12SharingErrorOwta
__int64 *__fastcall assignWithTake for SharingError(__int64 *a1, __int64 a2)
{
  __int64 v3; // x9
  char v4; // w10
  __int64 v5; // x0
  __int64 v6; // x2
  __int64 v7; // x8
  __int64 v8; // x3
  __int64 v9; // x4
  __int128 v10; // q1
  __int64 v11; // x5

  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_BYTE *)(a2 + 40);
  v5 = *a1;
  v7 = a1[1];
  v6 = a1[2];
  v8 = a1[3];
  v9 = a1[4];
  v10 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = v10;
  a1[4] = v3;
  v11 = *((unsigned __int8 *)a1 + 40);
  *((_BYTE *)a1 + 40) = v4;
  sub_10000E6D8(v5, v7, v6, v8, v9, v11);
  return a1;
}