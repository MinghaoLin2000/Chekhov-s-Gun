-[TSUZipWriter entryWithName:]
id __cdecl -[TSUZipWriter entryWithName:](TSUZipWriter *self, SEL a2, id a3)
{
  id v4; // x0
  dispatch_queue_s *writeQueue; // x20
  id v6; // x19
  id v7; // x20
  _QWORD block[5]; // [xsp+8h] [xbp-78h] BYREF
  id v10; // [xsp+30h] [xbp-50h]
  __int64 *v11; // [xsp+38h] [xbp-48h]
  __int64 v12; // [xsp+40h] [xbp-40h] BYREF
  __int64 *v13; // [xsp+48h] [xbp-38h]
  __int64 v14; // [xsp+50h] [xbp-30h]
  __int64 (__fastcall *v15)(); // [xsp+58h] [xbp-28h]
  __int64 (__fastcall *v16)(); // [xsp+60h] [xbp-20h]
  id v17; // [xsp+68h] [xbp-18h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v4 = objc_retain(a3);
  v12 = 0LL;
  v13 = &v12;
  v14 = 0x3032000000LL;
  v15 = sub_100155CE8;
  v16 = sub_100155CF8;
  v17 = 0LL;
  writeQueue = (dispatch_queue_s *)self->_writeQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100156A08;
  block[3] = &unk_1001DD750;
  v10 = v4;
  v11 = &v12;
  block[4] = self;
  v6 = objc_retain(v4);
  dispatch_sync(writeQueue, block);
  v7 = objc_retain((id)v13[5]);
  objc_release(v10);
  _Block_object_dispose(&v12, 8);
  objc_release(v17);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}