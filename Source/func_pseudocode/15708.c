-[UARPDFUUpdater addAccessory:enableNotification:]
bool __cdecl -[UARPDFUUpdater addAccessory:enableNotification:](UARPDFUUpdater *self, SEL a2, id a3, bool a4)
{
  _BOOL4 v4; // w21
  id v6; // x0
  void *v7; // x19
  OS_dispatch_queue *accessoriesQueue; // x23
  id v9; // x22
  void **v11; // [xsp+0h] [xbp-60h] BYREF
  __int64 v12; // [xsp+8h] [xbp-58h]
  __int64 (__fastcall *v13)(); // [xsp+10h] [xbp-50h]
  void *v14; // [xsp+18h] [xbp-48h]
  UARPDFUUpdater *v15; // [xsp+20h] [xbp-40h]
  id v16; // [xsp+28h] [xbp-38h]

  v4 = a4;
  v6 = objc_retain(a3);
  v7 = v6;
  if ( v6 )
  {
    accessoriesQueue = self->_accessoriesQueue;
    v11 = _NSConcreteStackBlock;
    v12 = 3254779904LL;
    v13 = sub_1000069C8;
    v14 = &unk_1000243F0;
    v15 = self;
    v9 = objc_retain(v6);
    v16 = v9;
    dispatch_sync((dispatch_queue_t)accessoriesQueue, &v11);
    if ( v4 )
      objc_msgSend(v9, "enableDisconnectCallback:reference:", sub_100006B10, self, v11, v12, v13, v14, v15);
    objc_release(v16);
  }
  objc_release(v7);
  return v7 != 0LL;
}