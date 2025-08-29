_$s16EyeCandyGraphics9CGSWindowV5titleSSSgvs
__int64 __fastcall CGSWindow.title.setter(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // x23
  unsigned __int64 v5; // x20
  int *v6; // x21
  __int64 v7; // x21
  __int64 v8; // x0
  void *v9; // x22
  __int64 v10; // x23
  _QWORD v12[2]; // [xsp+8h] [xbp-58h] BYREF
  _BYTE v13[24]; // [xsp+18h] [xbp-48h] BYREF

  if ( a2 )
    v4 = a1;
  else
    v4 = 0LL;
  if ( a2 )
    v5 = a2;
  else
    v5 = 0xE000000000000000LL;
  v6 = CGSConnection.defaultConnection.unsafeMutableAddressor();
  sub_10001B1D4(v6, v13);
  v7 = (unsigned int)*v6;
  v8 = swift_bridgeObjectRetain(v5);
  v9 = (void *)sub_10001B1EC(v8);
  v12[0] = v4;
  v12[1] = v5;
  swift_bridgeObjectRetain(v5);
  v10 = sub_10001D0F0(v12, &type metadata for String);
  CGSSetWindowProperty(v7, a3, v9, v10);
  swift_bridgeObjectRelease_n(v5, 2LL);
  objc_release(v9);
  return swift_unknownObjectRelease(v10);
}