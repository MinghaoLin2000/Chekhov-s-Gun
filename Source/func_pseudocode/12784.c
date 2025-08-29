-[NSError tsu_zipArchiveErrorDescription]
NSString *__cdecl -[NSError tsu_zipArchiveErrorDescription](NSError *self, SEL a2)
{
  id v2; // x19
  _QWORD v4[5]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v5; // [xsp+30h] [xbp-40h] BYREF
  __int64 *v6; // [xsp+38h] [xbp-38h]
  __int64 v7; // [xsp+40h] [xbp-30h]
  __int64 (__fastcall *v8)(); // [xsp+48h] [xbp-28h]
  __int64 (__fastcall *v9)(); // [xsp+50h] [xbp-20h]
  id v10; // [xsp+58h] [xbp-18h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v5 = 0LL;
  v6 = &v5;
  v7 = 0x3032000000LL;
  v8 = sub_1001331F4;
  v9 = sub_100133204;
  v10 = 0LL;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_1001347C4;
  v4[3] = &unk_1001DD388;
  v4[4] = &v5;
  -[NSError tsu_enumerateErrorUsingBlock:](self, "tsu_enumerateErrorUsingBlock:", v4);
  v2 = objc_retain((id)v6[5]);
  _Block_object_dispose(&v5, 8);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v2);
}