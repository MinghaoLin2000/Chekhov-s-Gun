-[TSPCryptoReadChannel readWithHandler:]
void __cdecl -[TSPCryptoReadChannel readWithHandler:](TSPCryptoReadChannel *self, SEL a2, id a3)
{
  id v3; // x19
  _QWORD v4[4]; // [xsp+0h] [xbp-40h] BYREF
  TSPCryptoReadChannel *v5; // [xsp+20h] [xbp-20h]
  id v6; // [xsp+28h] [xbp-18h]

  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_100016C34;
  v4[3] = &unk_1001D1F60;
  v5 = self;
  v6 = objc_retain(a3);
  v3 = objc_retain(v6);
  -[TSPCryptoReadChannel _readBlocksWithHandler:](v5, "_readBlocksWithHandler:", v4);
  objc_release(v6);
  objc_release(v3);
}