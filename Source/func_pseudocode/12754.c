-[TSUZipArchive readCentralDirectoryWithEntryCount:offset:size:channel:completion:]
void __cdecl -[TSUZipArchive readCentralDirectoryWithEntryCount:offset:size:channel:completion:](
        TSUZipArchive *self,
        SEL a2,
        unsigned __int64 a3,
        signed __int64 a4,
        unsigned __int64 a5,
        id a6,
        id a7)
{
  id v12; // x22
  _QWORD v13[5]; // [xsp+8h] [xbp-68h] BYREF
  id v14; // [xsp+30h] [xbp-40h]
  unsigned __int64 v15; // [xsp+38h] [xbp-38h]

  v13[0] = _NSConcreteStackBlock;
  v13[1] = 3254779904LL;
  v13[2] = sub_100130B74;
  v13[3] = &unk_1001DD078;
  v14 = objc_retain(a7);
  v15 = a3;
  v13[4] = self;
  v12 = objc_retain(v14);
  +[TSUIOUtils readAllFromChannel:offset:length:completion:](
    &OBJC_CLASS___TSUIOUtils,
    "readAllFromChannel:offset:length:completion:",
    a6,
    a4,
    a5,
    v13);
  objc_release(v14);
  objc_release(v12);
}