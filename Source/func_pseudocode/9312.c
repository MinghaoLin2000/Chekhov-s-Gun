-[TSPPackageConverter progressTotalUnitCountWithZipArchive:]
unsigned __int64 __cdecl -[TSPPackageConverter progressTotalUnitCountWithZipArchive:](
        TSPPackageConverter *self,
        SEL a2,
        id a3)
{
  unsigned __int64 v3; // x19
  _QWORD v5[5]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v6; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v7; // [xsp+38h] [xbp-28h]
  __int64 v8; // [xsp+40h] [xbp-20h]
  __int64 v9; // [xsp+48h] [xbp-18h]

  v6 = 0LL;
  v7 = &v6;
  v8 = 0x2020000000LL;
  v9 = 0LL;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_10001FE08;
  v5[3] = &unk_1001D2530;
  v5[4] = &v6;
  objc_msgSend(a3, "enumerateEntriesUsingBlock:", v5);
  v3 = v7[3];
  _Block_object_dispose(&v6, 8);
  return v3;
}