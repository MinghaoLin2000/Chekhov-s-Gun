-[TSUZipArchive hasNonEmptyEntries]
bool __cdecl -[TSUZipArchive hasNonEmptyEntries](TSUZipArchive *self, SEL a2)
{
  char v2; // w19
  _QWORD v4[5]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v5; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v6; // [xsp+38h] [xbp-28h]
  __int64 v7; // [xsp+40h] [xbp-20h]
  char v8; // [xsp+48h] [xbp-18h]

  v5 = 0LL;
  v6 = &v5;
  v7 = 0x2020000000LL;
  v8 = 0;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_10012F894;
  v4[3] = &unk_1001DCF38;
  v4[4] = &v5;
  -[TSUZipArchive enumerateEntriesUsingBlock:](self, "enumerateEntriesUsingBlock:", v4);
  v2 = *((_BYTE *)v6 + 24);
  _Block_object_dispose(&v5, 8);
  return v2;
}