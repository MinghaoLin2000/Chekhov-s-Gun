__Z31liteAddPrinterForCurrentNetworkP12NSDictionary
void __fastcall liteAddPrinterForCurrentNetwork(NSDictionary *a1)
{
  id v1; // x19
  _QWORD v2[4]; // [xsp+8h] [xbp-38h] BYREF
  id v3; // [xsp+28h] [xbp-18h]

  v2[0] = _NSConcreteStackBlock;
  v2[1] = 3254779904LL;
  v2[2] = sub_100046E40;
  v2[3] = &unk_10009EF68;
  v3 = objc_retain(a1);
  v1 = objc_retain(v3);
  sub_100046A48(v2);
  objc_release(v3);
  objc_release(v1);
}