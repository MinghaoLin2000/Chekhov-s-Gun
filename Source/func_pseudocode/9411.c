-[TSPPackage fileCoordinatorDelegate]
TSPFileCoordinatorDelegate *__cdecl -[TSPPackage fileCoordinatorDelegate](TSPPackage *self, SEL a2)
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
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v6 = 0LL;
  v7 = &v6;
  v8 = 0x3032000000LL;
  v9 = sub_10002D5BC;
  v10 = sub_10002D5CC;
  v11 = 0LL;
  accessQueue = (dispatch_queue_s *)self->_accessQueue;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_10002D5D4;
  v5[3] = &unk_1001D13C8;
  v5[4] = self;
  v5[5] = &v6;
  dispatch_sync(accessQueue, v5);
  v3 = objc_retain((id)v7[5]);
  _Block_object_dispose(&v6, 8);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (TSPFileCoordinatorDelegate *)objc_autoreleaseReturnValue(v3);
}