-[TSPPackage componentLocators]
id __cdecl -[TSPPackage componentLocators](TSPPackage *self, SEL a2)
{
  TSUZipFileArchive *v2; // x19
  NSMutableArray *v3; // x20
  NSArray *v4; // x21
  _QWORD v6[4]; // [xsp+8h] [xbp-48h] BYREF
  id v7; // [xsp+28h] [xbp-28h]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[TSPPackage componentZipArchive](self, "componentZipArchive"));
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_10002F774;
  v6[3] = &unk_1001D3120;
  v3 = objc_retain(objc_opt_new(&OBJC_CLASS___NSMutableArray));
  v7 = v3;
  -[TSUZipArchive enumerateEntriesUsingBlock:](v2, "enumerateEntriesUsingBlock:", v6);
  v4 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithArray:](&OBJC_CLASS___NSArray, "arrayWithArray:", v3));
  objc_release(v7);
  objc_release(v3);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}