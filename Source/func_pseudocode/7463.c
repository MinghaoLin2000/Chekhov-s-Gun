_$s16EyeCandyGraphics8CGSSpaceV9setOwners_10connectionySays5Int32VG_AA13CGSConnectionVtF
// local variable allocation has failed, the output may be wrong!
Swift::Void __swiftcall CGSSpace.setOwners(_:connection:)(
        Swift::OpaquePointer _,
        EyeCandyGraphics::CGSConnection connection)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x22
  __int64 v7; // x19
  __int64 v8; // x21
  __int64 v9; // x23
  unsigned int *v10; // x25
  unsigned int v11; // t1
  id v12; // x0
  id v13; // x23
  unsigned __int64 v14; // x28
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x0
  __int64 v19; // x22
  void *v20; // x0
  __int64 v21; // x1
  __int64 v22; // [xsp+68h] [xbp+68h]

  v2 = sub_1000120C4(_._rawValue, *(_QWORD *)&connection.cid);
  v22 = v5;
  v6 = *(_QWORD *)(v2 + 16);
  if ( v6 )
  {
    v7 = v4;
    v8 = v3;
    v9 = v2;
    sub_10000A5B4(0LL, v6, 0LL);
    v10 = (unsigned int *)(v9 + 32);
    do
    {
      v11 = *v10++;
      v12 = objc_msgSend(objc_allocWithZone((Class)&OBJC_CLASS___NSNumber), "initWithInt:", v11);
      v13 = v12;
      v14 = _swiftEmptyArrayStorage[2];
      if ( v14 >= _swiftEmptyArrayStorage[3] >> 1 )
      {
        v15 = sub_100012168(v12);
        sub_10000A5B4(v15, v16, v17);
      }
      _swiftEmptyArrayStorage[2] = v14 + 1;
      _swiftEmptyArrayStorage[v14 + 4] = v13;
      --v6;
    }
    while ( v6 );
    v18 = sub_100011930(0LL);
    v19 = sub_10001CB60(_swiftEmptyArrayStorage, v18);
    swift_release(_swiftEmptyArrayStorage);
    CGSSpaceSetOwners(v8, v7, v19);
    v20 = (void *)sub_1000120A8(v19, v22);
    if ( ((v21 ^ (2 * v21)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v20);
  }
  else
  {
    sub_1000120A8(v5, v3);
  }
}