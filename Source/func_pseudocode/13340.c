-[TSUZipWriter writeEntryWithName:force32BitSize:lastModificationDate:size:CRC:fromReadChannel:completion:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[TSUZipWriter writeEntryWithName:force32BitSize:lastModificationDate:size:CRC:fromReadChannel:completion:](
        TSUZipWriter *self,
        SEL a2,
        id a3,
        bool a4,
        id a5,
        unsigned __int64 a6,
        unsigned int a7,
        id a8,
        id a9)
{
  __int64 v10; // x20
  _BOOL8 v13; // x23
  id v16; // x26
  _QWORD v17[4]; // [xsp+8h] [xbp-78h] BYREF
  id v18; // [xsp+28h] [xbp-58h]

  v10 = *(_QWORD *)&a7;
  v13 = a4;
  v17[0] = _NSConcreteStackBlock;
  v17[1] = 3254779904LL;
  v17[2] = sub_100153A64;
  v17[3] = &unk_1001DECE8;
  v18 = objc_retain(a9);
  v16 = objc_retain(v18);
  -[TSUZipWriter writeEntryWithName:force32BitSize:lastModificationDate:size:CRC:fromReadChannel:writeHandler:](
    self,
    "writeEntryWithName:force32BitSize:lastModificationDate:size:CRC:fromReadChannel:writeHandler:",
    a3,
    v13,
    a5,
    a6,
    v10,
    a8,
    v17);
  objc_release(v18);
  objc_release(v16);
}