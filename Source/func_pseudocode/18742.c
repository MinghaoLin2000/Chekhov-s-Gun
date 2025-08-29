$s27BackgroundReplacementHelper15BackgroundsGridVwca
__int64 *__fastcall assignWithCopy for BackgroundsGrid(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x0
  char v5; // w8
  __int64 v6; // x21
  __int64 v7; // x21
  __int64 v8; // x0

  v4 = *a2;
  v5 = *((_BYTE *)a2 + 8);
  v6 = *a1;
  *a1 = *a2;
  *((_BYTE *)a1 + 8) = v5;
  swift_retain(v4);
  swift_release(v6);
  *((_BYTE *)a1 + 16) = *((_BYTE *)a2 + 16);
  v7 = a1[3];
  v8 = a2[3];
  a1[3] = v8;
  swift_retain(v8);
  swift_release(v7);
  *((_BYTE *)a1 + 32) = *((_BYTE *)a2 + 32);
  return a1;
}