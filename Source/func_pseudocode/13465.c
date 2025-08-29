-[TSUStreamDataCompression setHandler:]
void __cdecl -[TSUStreamDataCompression setHandler:](TSUStreamDataCompression *self, SEL a2, id a3)
{
  id v4; // x20
  objc_super v5; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v6[4]; // [xsp+18h] [xbp-38h] BYREF
  id v7; // [xsp+38h] [xbp-18h]

  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_10015BE3C;
  v6[3] = &unk_1001DF238;
  v7 = objc_retain(a3);
  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___TSUStreamDataCompression;
  v4 = objc_retain(v7);
  -[TSUStreamCompression setHandler:](&v5, "setHandler:", v6);
  objc_release(v7);
  objc_release(v4);
}