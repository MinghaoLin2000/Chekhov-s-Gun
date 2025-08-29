-[TSPPackageConverter hasEntriesMatchingFilter:]
bool __cdecl -[TSPPackageConverter hasEntriesMatchingFilter:](TSPPackageConverter *self, SEL a2, id a3)
{
  id v4; // x19
  TSUZipFileArchive *v5; // x20
  char v6; // w21
  _QWORD v8[5]; // [xsp+8h] [xbp-78h] BYREF
  id v9; // [xsp+30h] [xbp-50h]
  __int64 *v10; // [xsp+38h] [xbp-48h]
  __int64 v11; // [xsp+40h] [xbp-40h] BYREF
  __int64 *v12; // [xsp+48h] [xbp-38h]
  __int64 v13; // [xsp+50h] [xbp-30h]
  char v14; // [xsp+58h] [xbp-28h]

  v4 = objc_retain(a3);
  v11 = 0LL;
  v12 = &v11;
  v13 = 0x2020000000LL;
  v14 = 0;
  v5 = objc_retainAutoreleasedReturnValue(-[TSPPackage zipArchive](self->_package, "zipArchive"));
  if ( v5 )
  {
    v8[0] = _NSConcreteStackBlock;
    v8[1] = 3254779904LL;
    v8[2] = sub_10001F13C;
    v8[3] = &unk_1001D2490;
    v8[4] = self;
    v9 = objc_retain(v4);
    v10 = &v11;
    -[TSPPackageConverter enumeratePackageEntriesWithZipArchive:needsReadChannel:accessor:](
      self,
      "enumeratePackageEntriesWithZipArchive:needsReadChannel:accessor:",
      v5,
      0LL,
      v8);
    objc_release(v9);
  }
  v6 = *((_BYTE *)v12 + 24);
  objc_release(v5);
  _Block_object_dispose(&v11, 8);
  objc_release(v4);
  return v6;
}