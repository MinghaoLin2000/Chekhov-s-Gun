__Z32liteGetPrintersForCurrentNetworkv
NameAndPrinters *liteGetPrintersForCurrentNetwork(void)
{
  NameAndPrinters *v0; // x19
  _QWORD v2[4]; // [xsp+8h] [xbp-38h] BYREF
  id v3; // [xsp+28h] [xbp-18h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v2[0] = _NSConcreteStackBlock;
  v2[1] = 3254779904LL;
  v2[2] = sub_100046D00;
  v2[3] = &unk_10009EF68;
  v0 = objc_retain(objc_opt_new(&OBJC_CLASS___NameAndPrinters));
  v3 = v0;
  sub_100046A48(v2);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v0);
}