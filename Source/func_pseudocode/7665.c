_$sSo17SLSTransactionRefa16EyeCandyGraphicsE16willSwitchSpacesyySayAC8CGSSpaceVGSgF
void __fastcall SLSTransactionRef.willSwitchSpaces(_:)(__int64 a1)
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v3; // x21
  __int64 v4; // x0
  void *v5; // x20

  v2 = v1;
  if ( a1 )
  {
    v3 = sub_100002BF4(&unk_100029CC8);
    v4 = sub_100014D1C(&unk_100029CD0, &unk_100029CC8);
    v5 = (void *)Collection<>.spaces.getter(v3, v4);
  }
  else
  {
    v5 = 0LL;
  }
  SLSTransactionWillSwitchSpaces(v2, v5);
  objc_release(v5);
}