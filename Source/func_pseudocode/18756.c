$s27BackgroundReplacementHelper14MainWindowViewVwta
__int64 *__fastcall assignWithTake for MainWindowView(__int64 *a1, __int64 *a2)
{
  char v3; // w9
  __int64 v4; // x0

  v3 = *((_BYTE *)a2 + 8);
  v4 = *a1;
  *a1 = *a2;
  *((_BYTE *)a1 + 8) = v3;
  swift_release(v4);
  return a1;
}