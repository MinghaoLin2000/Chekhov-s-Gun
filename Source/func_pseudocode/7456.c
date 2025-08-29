_$s16EyeCandyGraphics8CGSSpaceV7setName_10connectionySS_AA13CGSConnectionVtF
// local variable allocation has failed, the output may be wrong!
Swift::Void __swiftcall CGSSpace.setName(_:connection:)(Swift::String _, EyeCandyGraphics::CGSConnection connection)
{
  __int64 v2; // x20
  void *v3; // x21
  __int64 v4; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = *(_QWORD *)&connection.cid;
  v3 = (void *)sub_10001CAC0(_._countAndFlagsBits, _._object);
  v4 = sub_1000122C4(v2);
  CGSSpaceSetName(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}