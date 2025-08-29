$s27BackgroundReplacementHelper14MainWindowViewVwCP
__int64 __fastcall initializeBufferWithCopyOfBuffer for MainWindowView(__int64 a1, __int64 *a2)
{
  __int64 v3; // x0
  char v4; // w8

  v3 = *a2;
  v4 = *((_BYTE *)a2 + 8);
  *(_QWORD *)a1 = *a2;
  *(_BYTE *)(a1 + 8) = v4;
  swift_retain(v3);
  return a1;
}