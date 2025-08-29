_$s16EyeCandyGraphics8CGSSpaceV13removeWindowsyySayAA9CGSWindowVGF
Swift::Void __swiftcall CGSSpace.removeWindows(_:)(Swift::OpaquePointer a1)
{
  __int64 v2; // x0
  __int64 inited; // x21
  __int64 v4; // x0
  unsigned int *v5; // x20
  __int64 v6; // [xsp+0h] [xbp-60h] BYREF
  _BYTE v7[40]; // [xsp+18h] [xbp-48h] BYREF

  if ( *((_QWORD *)a1._rawValue + 2) )
  {
    v2 = sub_100002BF4(&unk_100029A70);
    inited = swift_initStackObject(v2, v7);
    v4 = sub_100012334((__n128)xmmword_10001FC20);
    v5 = (unsigned int *)CGSConnection.defaultConnection.unsafeMutableAddressor(v4);
    swift_beginAccess(v5, &v6, 0LL, 0LL);
    sub_100010190(a1._rawValue, *v5, inited);
    swift_setDeallocating(inited);
  }
}