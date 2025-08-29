_$sSo17SLSTransactionRefa16EyeCandyGraphicsE8commitCAyySbF
Swift::Void __swiftcall SLSTransactionRef.commitCA(_:)(Swift::Bool a1)
{
  __int64 v1; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  SLSTransactionCommitUsingMethod(v1);
  if ( a1 )
  {
    objc_msgSend((id)objc_opt_self(&OBJC_CLASS___CATransaction), "flush");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    _SLSTransactionWait();
  }
}