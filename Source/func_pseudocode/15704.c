-[UARPDFUUpdater getDfuAccessoryForSerialNumber:]
id __cdecl -[UARPDFUUpdater getDfuAccessoryForSerialNumber:](UARPDFUUpdater *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  OS_dispatch_queue *accessoriesQueue; // x21
  id v7; // x20
  _QWORD block[5]; // [xsp+8h] [xbp-88h] BYREF
  id v10; // [xsp+30h] [xbp-60h]
  __int64 *v11; // [xsp+38h] [xbp-58h]
  __int64 v12; // [xsp+40h] [xbp-50h] BYREF
  __int64 *v13; // [xsp+48h] [xbp-48h]
  __int64 v14; // [xsp+50h] [xbp-40h]
  __int64 (__fastcall *v15)(); // [xsp+58h] [xbp-38h]
  __int64 (__fastcall *v16)(); // [xsp+60h] [xbp-30h]
  id v17; // [xsp+68h] [xbp-28h]
  __int64 vars8; // [xsp+98h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  v12 = 0LL;
  v13 = &v12;
  v14 = 0x3032000000LL;
  v15 = sub_100005B9C;
  v16 = sub_100005BAC;
  v17 = 0LL;
  if ( v4 )
  {
    accessoriesQueue = self->_accessoriesQueue;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100006288;
    block[3] = &unk_1000243C0;
    block[4] = self;
    v10 = objc_retain(v4);
    v11 = &v12;
    dispatch_sync((dispatch_queue_t)accessoriesQueue, block);
    v7 = objc_retain((id)v13[5]);
    objc_release(v10);
  }
  else
  {
    v7 = 0LL;
  }
  _Block_object_dispose(&v12, 8);
  objc_release(v17);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}