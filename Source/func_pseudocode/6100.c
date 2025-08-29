-[PAMediaConversionServiceResourceURLCollection allURLsAreReadable]
bool __cdecl -[PAMediaConversionServiceResourceURLCollection allURLsAreReadable](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2)
{
  NSFileManager *v3; // x20
  _QWORD v5[4]; // [xsp+0h] [xbp-60h] BYREF
  id v6; // [xsp+20h] [xbp-40h]
  __int64 *v7; // [xsp+28h] [xbp-38h]
  __int64 v8; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v9; // [xsp+38h] [xbp-28h]
  __int64 v10; // [xsp+40h] [xbp-20h]
  char v11; // [xsp+48h] [xbp-18h]

  v8 = 0LL;
  v9 = &v8;
  v10 = 0x2020000000LL;
  v11 = 0;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_100009A90;
  v5[3] = &unk_100040F00;
  v7 = &v8;
  v3 = objc_retain(objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager")));
  v6 = v3;
  -[PAMediaConversionServiceResourceURLCollection enumerateResourceURLs:](self, "enumerateResourceURLs:", v5);
  LOBYTE(self) = *((_BYTE *)v9 + 24);
  objc_release(v6);
  objc_release(v3);
  _Block_object_dispose(&v8, 8);
  return (char)self;
}