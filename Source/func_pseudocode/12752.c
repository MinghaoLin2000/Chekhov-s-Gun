-[TSUZipArchive readZip64EndOfCentralDirectoryWithChannel:offset:completion:]
void __cdecl -[TSUZipArchive readZip64EndOfCentralDirectoryWithChannel:offset:completion:](
        TSUZipArchive *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5)
{
  id v7; // x21
  id v8; // x22
  _QWORD v9[5]; // [xsp+8h] [xbp-58h] BYREF
  id v10; // [xsp+30h] [xbp-30h]
  id v11; // [xsp+38h] [xbp-28h]

  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_100130858;
  v9[3] = &unk_1001DD048;
  v9[4] = self;
  v10 = objc_retain(a3);
  v11 = objc_retain(a5);
  v7 = objc_retain(v11);
  v8 = objc_retain(v10);
  +[TSUIOUtils readAllFromChannel:offset:length:completion:](
    &OBJC_CLASS___TSUIOUtils,
    "readAllFromChannel:offset:length:completion:",
    v8,
    a4,
    56LL,
    v9);
  objc_release(v11);
  objc_release(v10);
  objc_release(v7);
  objc_release(v8);
}