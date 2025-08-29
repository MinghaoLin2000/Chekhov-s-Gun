-[TSUZipFileWriter initWithURL:options:error:]
TSUZipFileWriter *__cdecl -[TSUZipFileWriter initWithURL:options:error:](
        TSUZipFileWriter *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id *a5)
{
  id v8; // x19
  TSUZipFileWriter *v9; // x20
  TSUFileIOChannel *v10; // x23
  TSURandomWriteChannel *v11; // x0
  TSURandomWriteChannel *writeChannel; // x8
  TSURandomWriteChannel *v13; // x0
  void **v15; // [xsp+0h] [xbp-70h] BYREF
  __int64 v16; // [xsp+8h] [xbp-68h]
  __int64 (__fastcall *v17)(); // [xsp+10h] [xbp-60h]
  void *v18; // [xsp+18h] [xbp-58h]
  id v19; // [xsp+20h] [xbp-50h] BYREF
  id location; // [xsp+28h] [xbp-48h] BYREF
  objc_super v21; // [xsp+30h] [xbp-40h] BYREF

  v8 = objc_retain(a3);
  v21.receiver = self;
  v21.super_class = (Class)&OBJC_CLASS___TSUZipFileWriter;
  v9 = -[TSUZipWriter initWithOptions:](&v21, "initWithOptions:", a4);
  if ( v9 )
  {
    objc_initWeak(&location, v9);
    v10 = objc_alloc(&OBJC_CLASS___TSUFileIOChannel);
    v15 = _NSConcreteStackBlock;
    v16 = 3254779904LL;
    v17 = sub_10012B934;
    v18 = &unk_1001DCB78;
    objc_copyWeak(&v19, &location);
    v11 = -[TSUFileIOChannel initForRandomWritingURL:error:cleanupHandler:](
            v10,
            "initForRandomWritingURL:error:cleanupHandler:",
            v8,
            a5,
            &v15);
    writeChannel = v9->_writeChannel;
    v9->_writeChannel = v11;
    objc_release(writeChannel);
    v13 = v9->_writeChannel;
    if ( v13 )
    {
      -[TSURandomWriteChannel setLowWater:](v13, "setLowWater:", -1LL, v15, v16, v17, v18);
    }
    else
    {
      objc_release(v9);
      v9 = 0LL;
    }
    objc_destroyWeak(&v19);
    objc_destroyWeak(&location);
  }
  objc_release(v8);
  return v9;
}