-[TSUZipArchive readLocalFileHeaderEntriesFromChannel:offset:previousEntry:seekAttempts:seekForward:completion:]
void __cdecl -[TSUZipArchive readLocalFileHeaderEntriesFromChannel:offset:previousEntry:seekAttempts:seekForward:completion:](
        TSUZipArchive *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5,
        unsigned int a6,
        bool a7,
        id a8)
{
  id v14; // x25
  id v15; // x23
  id v16; // x21
  id v17; // x22
  id v18; // x23
  _QWORD v19[5]; // [xsp+0h] [xbp-90h] BYREF
  id v20; // [xsp+28h] [xbp-68h]
  id v21; // [xsp+30h] [xbp-60h]
  id v22; // [xsp+38h] [xbp-58h]
  signed __int64 v23; // [xsp+40h] [xbp-50h]
  unsigned int v24; // [xsp+48h] [xbp-48h]
  bool v25; // [xsp+4Ch] [xbp-44h]

  v14 = objc_retain(a3);
  v15 = objc_retain(a5);
  v19[0] = _NSConcreteStackBlock;
  v19[1] = 3254779904LL;
  v19[2] = sub_100131A44;
  v19[3] = &unk_1001DD158;
  v22 = objc_retain(a8);
  v23 = a4;
  v19[4] = self;
  v20 = v14;
  v25 = a7;
  v24 = a6;
  v21 = v15;
  v16 = objc_retain(v22);
  v17 = objc_retain(v15);
  v18 = objc_retain(v14);
  +[TSUIOUtils readAllFromChannel:offset:length:completion:](
    &OBJC_CLASS___TSUIOUtils,
    "readAllFromChannel:offset:length:completion:",
    v18,
    a4,
    30LL,
    v19);
  objc_release(v22);
  objc_release(v21);
  objc_release(v20);
  objc_release(v16);
  objc_release(v17);
  objc_release(v18);
}