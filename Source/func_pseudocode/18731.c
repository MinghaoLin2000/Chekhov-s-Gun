$s27BackgroundReplacementHelper21BackgroundStylePickerVwca
__int64 *__fastcall assignWithCopy for BackgroundStylePicker(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x0
  __int64 v5; // x21
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x21

  v4 = *a2;
  v5 = *a1;
  *a1 = *a2;
  swift_bridgeObjectRetain(v4);
  swift_bridgeObjectRelease(v5);
  v6 = a1[1];
  v7 = a2[1];
  a1[1] = v7;
  swift_retain(v7);
  swift_release(v6);
  v8 = a2[2];
  v9 = a1[2];
  a1[2] = v8;
  swift_retain(v8);
  swift_release(v9);
  *((_BYTE *)a1 + 24) = *((_BYTE *)a2 + 24);
  return a1;
}