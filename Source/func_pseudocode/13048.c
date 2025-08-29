-[NSIndexSet tsu_enumerateSkippedIndexesWithOptions:usingBlock:]
void __cdecl -[NSIndexSet tsu_enumerateSkippedIndexesWithOptions:usingBlock:](
        NSIndexSet *self,
        SEL a2,
        unsigned __int64 a3,
        id a4)
{
  id v5; // x19
  _QWORD v6[4]; // [xsp+0h] [xbp-50h] BYREF
  NSIndexSet *v7; // [xsp+20h] [xbp-30h]
  id v8; // [xsp+28h] [xbp-28h]

  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_100146068;
  v6[3] = &unk_1001DE238;
  v7 = self;
  v8 = objc_retain(a4);
  v5 = objc_retain(v8);
  -[NSIndexSet enumerateRangesWithOptions:usingBlock:](v7, "enumerateRangesWithOptions:usingBlock:", a3, v6);
  objc_release(v8);
  objc_release(v5);
}