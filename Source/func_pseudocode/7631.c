_$sSo17SLSTransactionRefa16EyeCandyGraphicsE10withCASync10connection_yAC13CGSConnectionV_yABXEtFZ
void static SLSTransactionRef.withCASync(connection:_:)()
{
  void (__fastcall *v0)(void *); // x19
  void *v1; // x21
  void *v2; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = (void *)sub_100014D6C();
  v2 = (void *)objc_opt_self(&OBJC_CLASS___CATransaction);
  objc_msgSend(v2, "begin");
  v0(v1);
  objc_msgSend(v2, "commit");
  SLSTransactionRef.commitCA(_:)(1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v1);
}