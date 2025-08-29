-[TSUFileIOChannel initWithType:URL:oflag:mode:error:cleanupHandler:]
TSUFileIOChannel *__cdecl -[TSUFileIOChannel initWithType:URL:oflag:mode:error:cleanupHandler:](
        TSUFileIOChannel *self,
        SEL a2,
        unsigned __int64 a3,
        id a4,
        int a5,
        unsigned __int16 a6,
        id *a7,
        id a8)
{
  unsigned int v10; // w26
  id v14; // x19
  void (__fastcall **v15)(id, __int64); // x20
  TSUFileIOChannel *v16; // x22
  void (__fastcall **v17)(id, __int64); // x27
  void *v18; // x23
  const char *v19; // x28
  dispatch_fd_t v20; // w25
  dispatch_queue_attr_s *v21; // x26
  dispatch_queue_t v22; // x0
  OS_dispatch_queue *ioQueue; // x8
  dispatch_queue_s *v24; // x23
  dispatch_io_t v25; // x0
  OS_dispatch_io *channel; // x8
  id v27; // x24
  TSUFileIOChannel *v28; // x21
  void *v30; // x25
  int *v31; // x0
  int v32; // w0
  int *v33; // x0
  id v34; // x0
  _QWORD *v35; // [xsp+8h] [xbp-128h]
  _QWORD cleanup_handler[4]; // [xsp+10h] [xbp-120h] BYREF
  void (__fastcall **v37)(id, __int64); // [xsp+30h] [xbp-100h]
  dispatch_fd_t v38; // [xsp+38h] [xbp-F8h]
  _QWORD v39[4]; // [xsp+40h] [xbp-F0h] BYREF
  id v40; // [xsp+60h] [xbp-D0h]
  _QWORD *v41; // [xsp+68h] [xbp-C8h]
  _QWORD v42[3]; // [xsp+70h] [xbp-C0h] BYREF
  char v43; // [xsp+88h] [xbp-A8h]
  objc_super v44; // [xsp+90h] [xbp-A0h] BYREF
  uint8_t buf[32]; // [xsp+A0h] [xbp-90h] BYREF

  v10 = a6;
  v14 = objc_retain(a4);
  v15 = (void (__fastcall **)(id, __int64))objc_retain(a8);
  if ( !v14 || ((unsigned int)objc_msgSend(v14, "isFileURL") & 1) == 0 )
  {
    if ( a7 )
      *a7 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                  2LL,
                  0LL)));
    if ( v15 )
      v15[2](v15, 2LL);
    goto LABEL_19;
  }
  v44.receiver = self;
  v44.super_class = (Class)&OBJC_CLASS___TSUFileIOChannel;
  v16 = -[TSUFileIOChannel init](&v44, "init");
  if ( !v16 )
  {
    if ( a7 )
      *a7 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                  12LL,
                  0LL)));
    if ( v15 )
      v15[2](v15, 12LL);
    self = 0LL;
LABEL_19:
    v28 = 0LL;
    goto LABEL_20;
  }
  v42[0] = 0LL;
  v42[1] = v42;
  v42[2] = 0x2020000000LL;
  v43 = 0;
  v39[0] = _NSConcreteStackBlock;
  v39[1] = 3254779904LL;
  v39[2] = sub_10014E224;
  v39[3] = &unk_1001DE7F8;
  v41 = v42;
  v17 = objc_retain(v15);
  v40 = v17;
  v35 = objc_retainBlock(v39);
  v16->_oflag = a5;
  v18 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "path")));
  v19 = (const char *)objc_msgSend(v18, "fileSystemRepresentation");
  objc_release(v18);
  if ( v19 )
  {
    if ( (a5 & 0x400) != 0 )
      unlink(v19);
    v20 = open(v19, a5, v10);
    if ( v20 < 0 )
    {
      v27 = objc_retainAutoreleasedReturnValue(
              +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                &OBJC_CLASS___NSError,
                "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                (unsigned int)*__error(),
                0LL));
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001DE878);
      v30 = objc_retain(TSUDefaultCat_log_t);
      if ( os_log_type_enabled((os_log_t)v30, OS_LOG_TYPE_ERROR) )
      {
        v31 = __error();
        v32 = (unsigned int)strerror(*v31);
        sub_100172CF0(v32, buf, (int)v19, (os_log_t)v30);
      }
      objc_release(v30);
      v33 = __error();
      ((void (__fastcall *)(_QWORD *, _QWORD))v35[2])(v35, (unsigned int)*v33);
      goto LABEL_26;
    }
    v21 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v22 = dispatch_queue_create("TSUFileIOChannel.IO", v21);
    ioQueue = v16->_ioQueue;
    v16->_ioQueue = (OS_dispatch_queue *)v22;
    objc_release(ioQueue);
    objc_release(v21);
    v24 = (dispatch_queue_s *)v16->_ioQueue;
    cleanup_handler[0] = _NSConcreteStackBlock;
    cleanup_handler[1] = 3254779904LL;
    cleanup_handler[2] = sub_10014E278;
    cleanup_handler[3] = &unk_1001DE848;
    v38 = v20;
    v37 = objc_retain(v17);
    v25 = dispatch_io_create(a3, v20, v24, cleanup_handler);
    channel = v16->_channel;
    v16->_channel = (OS_dispatch_io *)v25;
    objc_release(channel);
    objc_release(v37);
  }
  v27 = 0LL;
LABEL_26:
  if ( !v16->_channel )
  {
    if ( a7 )
    {
      if ( v27 )
      {
        *a7 = objc_retainAutorelease(v27);
      }
      else
      {
        v34 = objc_retainAutorelease(
                objc_retainAutoreleasedReturnValue(
                  +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                    &OBJC_CLASS___NSError,
                    "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                    2LL,
                    0LL)));
        *a7 = v34;
        objc_release(v34);
      }
    }
    ((void (__fastcall *)(_QWORD *, __int64))v35[2])(v35, 2LL);
    objc_release(v16);
    v16 = 0LL;
  }
  self = objc_retain(v16);
  objc_release(v27);
  objc_release(v35);
  objc_release(v40);
  _Block_object_dispose(v42, 8);
  v28 = self;
LABEL_20:
  objc_release(v15);
  objc_release(v14);
  objc_release(self);
  return v28;
}