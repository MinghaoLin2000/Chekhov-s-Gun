-[PAMediaConversionServiceResourceURLCollection enumerateResourceURLs:]
void __cdecl -[PAMediaConversionServiceResourceURLCollection enumerateResourceURLs:](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  _QWORD v5[4]; // [xsp+8h] [xbp-38h] BYREF
  id v6; // [xsp+28h] [xbp-18h]

  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_100009228;
  v5[3] = &unk_100040FB0;
  v6 = objc_retain(a3);
  v4 = objc_retain(v6);
  -[PAMediaConversionServiceResourceURLCollection enumerateResourceURLReferences:](
    self,
    "enumerateResourceURLReferences:",
    v5);
  objc_release(v6);
  objc_release(v4);
}