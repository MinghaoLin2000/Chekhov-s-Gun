_$sSo17SLSTransactionRefa16EyeCandyGraphicsE27setManageDisplayIsAnimating_9animatingySS_SbtF
Swift::Void __swiftcall SLSTransactionRef.setManageDisplayIsAnimating(_:animating:)(
        Swift::String _,
        Swift::Bool animating)
{
  __int64 v2; // x20
  void *v4; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (void *)sub_10001CAC0(_._countAndFlagsBits, _._object);
  SLSTransactionSetManagedDisplayIsAnimating(v2, v4, animating);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}