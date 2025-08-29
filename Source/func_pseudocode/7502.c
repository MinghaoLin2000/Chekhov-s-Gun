_$s16EyeCandyGraphics8CGSSpaceV8containsySbAA9CGSWindowVF
Swift::Bool __swiftcall CGSSpace.contains(_:)(EyeCandyGraphics::CGSWindow a1)
{
  __int64 v2; // x0
  __int64 inited; // x22
  __int64 v4; // x0
  unsigned int *v5; // x0
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x20
  __int64 v9; // x22
  __int64 v10; // x25
  int v11; // w8
  char v12; // w23
  Swift::UInt32 wid; // [xsp+0h] [xbp-70h] BYREF
  int v16; // [xsp+4h] [xbp-6Ch] BYREF
  _BYTE v17[40]; // [xsp+8h] [xbp-68h] BYREF

  v2 = sub_100002BF4(&unk_100029A70);
  inited = swift_initStackObject(v2, v17);
  v4 = sub_100012334((__n128)xmmword_10001FC20);
  v5 = (unsigned int *)CGSConnection.null.unsafeMutableAddressor(v4);
  v6 = sub_10000F97C(*v5, 3LL, 0LL, 0LL, inited);
  v7 = swift_bridgeObjectRelease(inited);
  v8 = *(_QWORD *)(v6 + 16);
  if ( v8 )
  {
    v9 = sub_100011AEC(v7);
    swift_bridgeObjectRetain(v6);
    v10 = 0LL;
    do
    {
      v11 = *(_DWORD *)(v6 + 4 * v10 + 32);
      wid = a1.wid;
      v16 = v11;
      v12 = sub_10001CAB0(&v16, &wid, &type metadata for CGSWindow, v9);
      if ( (v12 & 1) != 0 )
        break;
    }
    while ( v8 - 1 != v10++ );
    swift_bridgeObjectRelease(v6);
  }
  else
  {
    v12 = 0;
  }
  swift_bridgeObjectRelease(v6);
  return v12 & 1;
}