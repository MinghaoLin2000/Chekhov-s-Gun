_$s16EyeCandyGraphics8CGSSpaceV10addWindows_10connectionySayAA9CGSWindowVG_AA13CGSConnectionVtF
// local variable allocation has failed, the output may be wrong!
Swift::Void __swiftcall CGSSpace.addWindows(_:connection:)(
        Swift::OpaquePointer _,
        EyeCandyGraphics::CGSConnection connection)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 inited; // x22
  __int64 v5; // x21
  __int64 v6; // x0
  void *v7; // x20
  void *v8; // x21
  _BYTE v9[40]; // [xsp+8h] [xbp-48h] BYREF

  if ( *((_QWORD *)_._rawValue + 2) )
  {
    v2 = *(_QWORD *)&connection.cid;
    v3 = sub_100002BF4(&unk_100029A70);
    inited = swift_initStackObject(v3, v9);
    sub_100012334((__n128)xmmword_10001FC20);
    v5 = sub_100002BF4(&unk_100029BE0);
    v6 = sub_100011A98(v5);
    v7 = (void *)Collection<>.cfarray.getter(v5, v6);
    v8 = (void *)sub_10000A704(inited);
    CGSAddWindowsToSpaces(v2, v7, v8);
    objc_release(v7);
    objc_release(v8);
    swift_setDeallocating(inited);
  }
}