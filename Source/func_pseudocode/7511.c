_$s16EyeCandyGraphics8CGSSpaceV22setAsCurrentForDisplay_10connectionySS_AA13CGSConnectionVtF
// local variable allocation has failed, the output may be wrong!
Swift::Void __swiftcall CGSSpace.setAsCurrentForDisplay(_:connection:)(
        Swift::String _,
        EyeCandyGraphics::CGSConnection connection)
{
  __int64 v2; // x3
  __int64 v3; // x19
  __int64 v4; // x20
  void *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = v2;
  v4 = *(_QWORD *)&connection.cid;
  v5 = (void *)sub_10001CAC0(_._countAndFlagsBits, _._object);
  CGSManagedDisplaySetCurrentSpace(v4, v5, v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}