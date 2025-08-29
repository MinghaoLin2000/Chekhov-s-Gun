$s27BackgroundReplacementHelper14MainWindowViewVwca
__int64 *__fastcall assignWithCopy for MainWindowView(__int64 *a1, __int64 *a2)
{
  __int64 v3; // x0
  char v4; // w8
  __int64 v5; // x20

  v3 = *a2;
  v4 = *((_BYTE *)a2 + 8);
  v5 = *a1;
  *a1 = *a2;
  *((_BYTE *)a1 + 8) = v4;
  swift_retain(v3);
  swift_release(v5);
  return a1;
}