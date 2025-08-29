-[UARPDFUUpdater removeAccessory:]
bool __cdecl -[UARPDFUUpdater removeAccessory:](UARPDFUUpdater *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  OS_dispatch_queue *accessoriesQueue; // x21
  id v7; // x22
  void **v9; // [xsp+0h] [xbp-50h] BYREF
  __int64 v10; // [xsp+8h] [xbp-48h]
  __int64 (__fastcall *v11)(); // [xsp+10h] [xbp-40h]
  void *v12; // [xsp+18h] [xbp-38h]
  UARPDFUUpdater *v13; // [xsp+20h] [xbp-30h]
  id v14; // [xsp+28h] [xbp-28h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( v4 )
  {
    accessoriesQueue = self->_accessoriesQueue;
    v9 = _NSConcreteStackBlock;
    v10 = 3254779904LL;
    v11 = sub_100006DF8;
    v12 = &unk_1000243F0;
    v13 = self;
    v7 = objc_retain(v4);
    v14 = v7;
    dispatch_sync((dispatch_queue_t)accessoriesQueue, &v9);
    -[UARPDFUUpdater disconnectUARPForUARPAccessory:](
      self,
      "disconnectUARPForUARPAccessory:",
      v7,
      v9,
      v10,
      v11,
      v12,
      v13);
    objc_release(v14);
  }
  objc_release(v5);
  return v5 != 0LL;
}