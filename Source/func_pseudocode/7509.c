_$s16EyeCandyGraphics8CGSSpaceV11moveToIndex_10forDisplay10connectionySi_SSAA13CGSConnectionVtF
// local variable allocation has failed, the output may be wrong!
Swift::Void __swiftcall CGSSpace.moveToIndex(_:forDisplay:connection:)(
        Swift::Int _,
        Swift::String forDisplay,
        EyeCandyGraphics::CGSConnection connection)
{
  __int64 v3; // x4
  __int64 v4; // x19
  __int64 v5; // x21
  __int64 v7; // x0
  void *v8; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = v3;
  v5 = *(_QWORD *)&connection.cid;
  v7 = sub_10001CAC0(forDisplay._countAndFlagsBits, forDisplay._object);
  if ( _ < 0 )
  {
    __break(1u);
    goto LABEL_7;
  }
  if ( HIDWORD(_) )
  {
LABEL_7:
    __break(1u);
    return;
  }
  v8 = (void *)v7;
  CGSMoveManagedSpaceToDisplayIndex(v5, v4, v7, _);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}