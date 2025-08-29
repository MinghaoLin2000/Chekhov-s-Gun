-[TSUZipFileArchive newArchiveReadChannel]
id __cdecl -[TSUZipFileArchive newArchiveReadChannel](TSUZipFileArchive *self, SEL a2)
{
  dispatch_queue_s *accessQueue; // x8
  id v3; // x19
  _QWORD v5[6]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v6; // [xsp+30h] [xbp-40h] BYREF
  __int64 *v7; // [xsp+38h] [xbp-38h]
  __int64 v8; // [xsp+40h] [xbp-30h]
  __int64 (__fastcall *v9)(); // [xsp+48h] [xbp-28h]
  __int64 (__fastcall *v10)(); // [xsp+50h] [xbp-20h]
  id v11; // [xsp+58h] [xbp-18h]

  v6 = 0LL;
  v7 = &v6;
  v8 = 0x3032000000LL;
  v9 = sub_10012810C;
  v10 = sub_10012811C;
  v11 = 0LL;
  accessQueue = (dispatch_queue_s *)self->_accessQueue;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_100129D50;
  v5[3] = &unk_1001D1A10;
  v5[4] = self;
  v5[5] = &v6;
  dispatch_sync(accessQueue, v5);
  v3 = objc_retain((id)v7[5]);
  _Block_object_dispose(&v6, 8);
  objc_release(v11);
  return v3;
}