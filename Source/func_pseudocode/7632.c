_$sSo17SLSTransactionRefa16EyeCandyGraphicsE8addFenceyySo13CAFenceHandleCSgF
void __fastcall SLSTransactionRef.addFence(_:)(void *a1)
{
  __int64 v1; // x20
  id v2; // x19
  id v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( a1 )
  {
    v2 = objc_retain(a1);
    v3 = objc_retainAutoreleasedReturnValue((id)SLSTransactionGetFencingContext(v1));
    objc_msgSend(v3, "addFence:", v2);
    objc_release(v2);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v3);
  }
}