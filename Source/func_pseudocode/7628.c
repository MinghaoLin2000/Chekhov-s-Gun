_$sSo17SLSTransactionRefa16EyeCandyGraphicsE8withSync10connection_yAC13CGSConnectionV_yABXEtFZ
void static SLSTransactionRef.withSync(connection:_:)()
{
  void (*v0)(void); // x19
  void *v1; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = (void *)sub_100014D6C();
  v0();
  SLSTransactionCommit(v1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v1);
}