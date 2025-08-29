$s27BackgroundReplacementHelper15BackgroundsGridVwcp
__int64 __fastcall initializeWithCopy for BackgroundsGrid(__int64 a1, __int64 *a2)
{
  __int64 v3; // x0
  char v4; // w8
  __int64 v5; // x20

  v3 = *a2;
  v4 = *((_BYTE *)a2 + 8);
  *(_QWORD *)a1 = *a2;
  *(_BYTE *)(a1 + 8) = v4;
  *(_BYTE *)(a1 + 16) = *((_BYTE *)a2 + 16);
  v5 = a2[3];
  *(_QWORD *)(a1 + 24) = v5;
  *(_BYTE *)(a1 + 32) = *((_BYTE *)a2 + 32);
  swift_retain(v3);
  swift_retain(v5);
  return a1;
}