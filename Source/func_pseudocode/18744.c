$s27BackgroundReplacementHelper15BackgroundsGridVwta
__int64 *__fastcall assignWithTake for BackgroundsGrid(__int64 *a1, __int64 *a2)
{
  char v4; // w9
  __int64 v5; // x0
  __int64 v6; // x0

  v4 = *((_BYTE *)a2 + 8);
  v5 = *a1;
  *a1 = *a2;
  *((_BYTE *)a1 + 8) = v4;
  swift_release(v5);
  *((_BYTE *)a1 + 16) = *((_BYTE *)a2 + 16);
  v6 = a1[3];
  a1[3] = a2[3];
  swift_release(v6);
  *((_BYTE *)a1 + 32) = *((_BYTE *)a2 + 32);
  return a1;
}