-[TSUReadChannelInputStreamAdapter readToBuffer:size:]
unsigned __int64 __cdecl -[TSUReadChannelInputStreamAdapter readToBuffer:size:](
        TSUReadChannelInputStreamAdapter *self,
        SEL a2,
        char *a3,
        unsigned __int64 a4)
{
  signed __int64 offset; // x8
  unsigned __int64 length; // x9
  bool v6; // vf
  signed __int64 v7; // x8
  size_t v9; // x19
  dispatch_data_s *leftoverData; // x20
  dispatch_data_s *subrange; // x20
  dispatch_data_s *v12; // x0
  unsigned __int64 v13; // x19
  size_t v14; // x8
  dispatch_data_s *v15; // x20
  size_t size; // x0
  OS_dispatch_data *v17; // x0
  dispatch_semaphore_s *v18; // x20
  _QWORD *v19; // x22
  TSUReadChannel *readChannel; // x0
  __int64 v21; // x21
  void *v22; // x23
  NSString *v23; // x21
  NSString *v24; // x24
  _QWORD v26[5]; // [xsp+8h] [xbp-168h] BYREF
  id v27; // [xsp+30h] [xbp-140h]
  __int64 *v28; // [xsp+38h] [xbp-138h]
  _QWORD *v29; // [xsp+40h] [xbp-130h]
  __int64 *v30; // [xsp+48h] [xbp-128h]
  _QWORD *v31; // [xsp+50h] [xbp-120h]
  _QWORD v32[3]; // [xsp+58h] [xbp-118h] BYREF
  char v33; // [xsp+70h] [xbp-100h]
  __int64 v34; // [xsp+78h] [xbp-F8h] BYREF
  __int64 *v35; // [xsp+80h] [xbp-F0h]
  __int64 v36; // [xsp+88h] [xbp-E8h]
  __int64 (__fastcall *v37)(); // [xsp+90h] [xbp-E0h]
  __int64 (__fastcall *v38)(); // [xsp+98h] [xbp-D8h]
  id v39; // [xsp+A0h] [xbp-D0h]
  _QWORD applier[7]; // [xsp+A8h] [xbp-C8h] BYREF
  _QWORD v41[4]; // [xsp+E0h] [xbp-90h] BYREF
  __int64 v42; // [xsp+100h] [xbp-70h] BYREF
  __int64 *v43; // [xsp+108h] [xbp-68h]
  __int64 v44; // [xsp+110h] [xbp-60h]
  size_t v45; // [xsp+118h] [xbp-58h]

  offset = self->_offset;
  length = self->_length;
  v6 = __OFSUB__(length, offset);
  v7 = length - offset;
  if ( !((v7 < 0) ^ v6 | (v7 == 0)) )
  {
    if ( v7 >= a4 )
      v9 = a4;
    else
      v9 = v7;
    v42 = 0LL;
    v43 = &v42;
    v44 = 0x2020000000LL;
    v45 = v9;
    v41[0] = 0LL;
    v41[1] = v41;
    v41[2] = 0x2020000000LL;
    v41[3] = a3;
    leftoverData = (dispatch_data_s *)self->_leftoverData;
    if ( dispatch_data_get_size(leftoverData) )
    {
      applier[0] = _NSConcreteStackBlock;
      applier[1] = 3254779904LL;
      applier[2] = sub_10015B19C;
      applier[3] = &unk_1001DF128;
      applier[5] = &v42;
      applier[6] = v41;
      applier[4] = self;
      dispatch_data_apply(leftoverData, applier);
      if ( v43[3] )
      {
        subrange = &_dispatch_data_empty;
        v12 = objc_retain(&_dispatch_data_empty);
      }
      else
      {
        v15 = (dispatch_data_s *)self->_leftoverData;
        size = dispatch_data_get_size(v15);
        subrange = dispatch_data_create_subrange(v15, v9, size - v9);
      }
      v17 = self->_leftoverData;
      self->_leftoverData = (OS_dispatch_data *)subrange;
      objc_release(v17);
      v14 = v43[3];
      if ( v14 )
      {
LABEL_13:
        if ( self->_readChannel )
        {
          v34 = 0LL;
          v35 = &v34;
          v36 = 0x3032000000LL;
          v37 = sub_10015B230;
          v38 = sub_10015B240;
          v39 = 0LL;
          v32[0] = 0LL;
          v32[1] = v32;
          v32[2] = 0x2020000000LL;
          v33 = 0;
          v26[0] = _NSConcreteStackBlock;
          v26[1] = 3254779904LL;
          v26[2] = sub_10015B248;
          v26[3] = &unk_1001DF188;
          v28 = &v42;
          v29 = v41;
          v26[4] = self;
          v30 = &v34;
          v31 = v32;
          v18 = objc_retain(dispatch_semaphore_create(0LL));
          v27 = v18;
          v19 = objc_retainBlock(v26);
          readChannel = self->_readChannel;
          if ( readChannel )
          {
            -[TSUReadChannel readFromOffset:length:handler:](
              readChannel,
              "readFromOffset:length:handler:",
              self->_offset,
              v43[3],
              v19);
          }
          else
          {
            v21 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                    &OBJC_CLASS___TSUAssertionHandler,
                    "_atomicIncrementAssertCount");
            if ( TSUAssertCat_init_token != -1 )
              dispatch_once(&TSUAssertCat_init_token, &stru_1001DF1B8);
            v22 = TSUAssertCat_log_t;
            if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
              sub_1001742C4(v21, v22);
            v23 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithUTF8String:](
                      &OBJC_CLASS___NSString,
                      "stringWithUTF8String:",
                      "-[TSUReadChannelInputStreamAdapter readToBuffer:size:]"));
            v24 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithUTF8String:](
                      &OBJC_CLASS___NSString,
                      "stringWithUTF8String:",
                      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xb"
                      "s/Sources/iWorkXPC/shared/utility/TSUReadChannelInputStreamAdapter.m"));
            +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
              &OBJC_CLASS___TSUAssertionHandler,
              "handleFailureInFunction:file:lineNumber:isFatal:description:",
              v23,
              v24,
              118LL,
              0LL,
              "nil read channels");
            objc_release(v24);
            objc_release(v23);
            +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
            dispatch_semaphore_signal(v18);
          }
          dispatch_semaphore_wait(v18, 0xFFFFFFFFFFFFFFFFLL);
          if ( v35[5] )
            +[NSException tsu_raiseWithError:](&OBJC_CLASS___NSException, "tsu_raiseWithError:");
          objc_release(v19);
          objc_release(v27);
          objc_release(v18);
          _Block_object_dispose(v32, 8);
          _Block_object_dispose(&v34, 8);
          objc_release(v39);
          v14 = v43[3];
        }
      }
    }
    else
    {
      v14 = v9;
      if ( v9 )
        goto LABEL_13;
    }
    v13 = v9 - v14;
    _Block_object_dispose(v41, 8);
    _Block_object_dispose(&v42, 8);
    return v13;
  }
  return 0LL;
}