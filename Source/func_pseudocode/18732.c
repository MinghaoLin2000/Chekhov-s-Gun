$s27BackgroundReplacementHelper21BackgroundStylePickerVwta
__int64 __fastcall assignWithTake for BackgroundStylePicker(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x0

  swift_bridgeObjectRelease(*(_QWORD *)a1);
  v4 = *(_QWORD *)(a1 + 8);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  swift_release(v4);
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  swift_release(v5);
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  return a1;
}