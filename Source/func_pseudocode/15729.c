-[UARPDFUUpdater queryCompleteForAccessory:friendlyName:error:]
void __cdecl -[UARPDFUUpdater queryCompleteForAccessory:friendlyName:error:](
        UARPDFUUpdater *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  id v11; // x22
  OS_dispatch_queue *delegateQueue; // x24
  OS_os_log *log; // x23
  void **v14; // [xsp+0h] [xbp-70h] BYREF
  __int64 v15; // [xsp+8h] [xbp-68h]
  __int64 (__fastcall *v16)(); // [xsp+10h] [xbp-60h]
  void *v17; // [xsp+18h] [xbp-58h]
  UARPDFUUpdater *v18; // [xsp+20h] [xbp-50h]
  id v19; // [xsp+28h] [xbp-48h]
  id v20; // [xsp+30h] [xbp-40h]
  id v21; // [xsp+38h] [xbp-38h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = objc_retainAutoreleasedReturnValue(-[UARPDFUUpdater getDfuAccessoryForUarpAccessory:](self, "getDfuAccessoryForUarpAccessory:", v8));
  if ( v11 )
  {
    if ( (objc_opt_respondsToSelector(self->_goldRestoreDelegate, "queryCompleteForAccessoryID:friendlyName:error:") & 1) != 0 )
    {
      delegateQueue = self->_delegateQueue;
      v14 = _NSConcreteStackBlock;
      v15 = 3254779904LL;
      v16 = sub_1000094F4;
      v17 = &unk_100024480;
      v18 = self;
      v19 = objc_retain(v11);
      v20 = objc_retain(v9);
      v21 = objc_retain(v10);
      dispatch_async((dispatch_queue_t)delegateQueue, &v14);
      objc_release(v21);
      objc_release(v20);
      objc_release(v19);
    }
    objc_msgSend(v11, "updateQueriesCompleted:", &off_100024C80, v14, v15, v16, v17, v18);
  }
  else
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_100018C78(v8, log);
  }
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}