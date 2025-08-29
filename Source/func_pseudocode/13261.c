-[TSUFileIOChannel initWithType:descriptor:cleanupHandler:]
TSUFileIOChannel *__cdecl -[TSUFileIOChannel initWithType:descriptor:cleanupHandler:](
        TSUFileIOChannel *self,
        SEL a2,
        unsigned __int64 a3,
        int a4,
        id a5)
{
  id v8; // x19
  TSUFileIOChannel *v9; // x0
  TSUFileIOChannel *v10; // x21
  dispatch_queue_attr_s *v11; // x23
  dispatch_queue_t v12; // x0
  OS_dispatch_queue *ioQueue; // x8
  dispatch_queue_s *v14; // x23
  dispatch_io_t v15; // x0
  OS_dispatch_io *channel; // x8
  TSUFileIOChannel *v17; // x20
  _QWORD cleanup_handler[4]; // [xsp+8h] [xbp-68h] BYREF
  id v20; // [xsp+28h] [xbp-48h]
  objc_super v21; // [xsp+30h] [xbp-40h] BYREF

  v8 = objc_retain(a5);
  v21.receiver = self;
  v21.super_class = (Class)&OBJC_CLASS___TSUFileIOChannel;
  v9 = -[TSUFileIOChannel init](&v21, "init");
  if ( v9 )
  {
    v10 = v9;
    v11 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v12 = dispatch_queue_create("TSUFileIOChannel.IO", v11);
    ioQueue = v10->_ioQueue;
    v10->_ioQueue = (OS_dispatch_queue *)v12;
    objc_release(ioQueue);
    objc_release(v11);
    v14 = (dispatch_queue_s *)v10->_ioQueue;
    cleanup_handler[0] = _NSConcreteStackBlock;
    cleanup_handler[1] = 3254779904LL;
    cleanup_handler[2] = sub_10014E5DC;
    cleanup_handler[3] = &unk_1001DE8B8;
    v20 = objc_retain(v8);
    v15 = dispatch_io_create(a3, a4, v14, cleanup_handler);
    channel = v10->_channel;
    v10->_channel = (OS_dispatch_io *)v15;
    objc_release(channel);
    if ( !v10->_channel )
    {
      objc_release(v10);
      v10 = 0LL;
    }
    v17 = objc_retain(v10);
    objc_release(v20);
    objc_release(v17);
  }
  else
  {
    if ( v8 )
      (*((void (__fastcall **)(id, __int64))v8 + 2))(v8, 12LL);
    v17 = 0LL;
  }
  objc_release(v8);
  return v17;
}