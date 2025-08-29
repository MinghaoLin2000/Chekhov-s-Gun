$s27BackgroundReplacementHelper21BackgroundStylePickerVwcp
__int64 __fastcall initializeWithCopy for BackgroundStylePicker(__int64 a1, __int64 *a2)
{
  __int64 v3; // x0
  __int64 v4; // x20
  __int64 v5; // x21

  v3 = *a2;
  v4 = a2[1];
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = v4;
  v5 = a2[2];
  *(_QWORD *)(a1 + 16) = v5;
  *(_BYTE *)(a1 + 24) = *((_BYTE *)a2 + 24);
  swift_bridgeObjectRetain(v3);
  swift_retain(v4);
  swift_retain(v5);
  return a1;
}