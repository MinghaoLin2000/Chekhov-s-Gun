-[MediaConversionQueueEntry clientRequestForIdentifier:]
id __cdecl -[MediaConversionQueueEntry clientRequestForIdentifier:](MediaConversionQueueEntry *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x20
  _QWORD v7[4]; // [xsp+0h] [xbp-80h] BYREF
  id v8; // [xsp+20h] [xbp-60h]
  __int64 *v9; // [xsp+28h] [xbp-58h]
  __int64 v10; // [xsp+30h] [xbp-50h] BYREF
  __int64 *v11; // [xsp+38h] [xbp-48h]
  __int64 v12; // [xsp+40h] [xbp-40h]
  __int64 (__fastcall *v13)(); // [xsp+48h] [xbp-38h]
  __int64 (__fastcall *v14)(); // [xsp+50h] [xbp-30h]
  id v15; // [xsp+58h] [xbp-28h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v10 = 0LL;
  v11 = &v10;
  v12 = 0x3032000000LL;
  v13 = sub_10000D020;
  v14 = sub_10000D030;
  v15 = 0LL;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_10000D1EC;
  v7[3] = &unk_1000410B0;
  v4 = objc_retain(objc_retain(a3));
  v8 = v4;
  v9 = &v10;
  -[MediaConversionQueueEntry withLockEnumerateClientRequests:](self, "withLockEnumerateClientRequests:", v7);
  v5 = objc_retain((id)v11[5]);
  objc_release(v8);
  _Block_object_dispose(&v10, 8);
  objc_release(v15);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}