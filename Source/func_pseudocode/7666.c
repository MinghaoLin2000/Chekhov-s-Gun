_$sSo17SLSTransactionRefa16EyeCandyGraphicsE29setManagedDisplayCurrentSpace_5spaceySS_AC8CGSSpaceVtF
Swift::Void __swiftcall SLSTransactionRef.setManagedDisplayCurrentSpace(_:space:)(
        Swift::String _,
        EyeCandyGraphics::CGSSpace space)
{
  __int64 v2; // x20
  void *v4; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (void *)sub_10001CAC0(_._countAndFlagsBits, _._object);
  SLSTransactionSetManagedDisplayCurrentSpace(v2, v4, space.spid);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}