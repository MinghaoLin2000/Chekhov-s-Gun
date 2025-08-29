-[TSUZipArchive readZip64EndOfCentralDirectoryLocatorWithChannel:eocdOffset:completion:]
void __cdecl -[TSUZipArchive readZip64EndOfCentralDirectoryLocatorWithChannel:eocdOffset:completion:](
        TSUZipArchive *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  NSDictionary *v10; // x22
  id v11; // x21
  id v12; // x0
  _QWORD v13[5]; // [xsp+0h] [xbp-80h] BYREF
  id v14; // [xsp+28h] [xbp-58h]
  id v15; // [xsp+30h] [xbp-50h]
  const __CFString *v16; // [xsp+38h] [xbp-48h] BYREF
  const __CFString *v17; // [xsp+40h] [xbp-40h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a5);
  if ( (unsigned __int64)a4 > 0x13 )
  {
    v13[0] = _NSConcreteStackBlock;
    v13[1] = 3254779904LL;
    v13[2] = sub_100130524;
    v13[3] = &unk_1001DD048;
    v13[4] = self;
    v14 = objc_retain(v8);
    v15 = objc_retain(v9);
    +[TSUIOUtils readAllFromChannel:offset:length:completion:](
      &OBJC_CLASS___TSUIOUtils,
      "readAllFromChannel:offset:length:completion:",
      v14,
      a4 - 20,
      20LL,
      v13);
    objc_release(v15);
    v12 = v14;
  }
  else
  {
    v16 = CFSTR("TSUZipArchiveErrorDescription");
    v17 = CFSTR("File isn't long enough for Zip64 locator");
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v17,
              &v16,
              1LL));
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSError tsu_fileReadCorruptedFileErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsu_fileReadCorruptedFileErrorWithUserInfo:",
              v10));
    (*((void (__fastcall **)(id, id))v9 + 2))(v9, v11);
    objc_release(v11);
    v12 = v10;
  }
  objc_release(v12);
  objc_release(v9);
  objc_release(v8);
}