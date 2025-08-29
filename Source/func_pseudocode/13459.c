-[TSUStreamCompression processBytes:size:flags:]
bool __cdecl -[TSUStreamCompression processBytes:size:flags:](
        TSUStreamCompression *self,
        SEL a2,
        char *a3,
        unsigned __int64 a4,
        int a5)
{
  int status; // w8
  bool result; // w0
  compression_stream *p_stream; // x21
  int v11; // w0
  uint8_t *v12; // x0
  unsigned __int64 dst_size; // x8
  void *v14; // x25
  uint8_t *dst_ptr; // x8
  dispatch_data_t v17; // x25
  id handler; // x0
  id v19; // x0
  void (__fastcall **v20)(id, TSUStreamCompression *, __int64, _QWORD, NSError *); // x25
  NSError *v21; // x26
  dispatch_data_s *v22; // x0
  dispatch_data_s *v23; // x0
  __int64 (__fastcall **v24)(id, TSUStreamCompression *, __int64, void *, _QWORD); // x0
  id v25; // x0

  status = self->_status;
  if ( status )
    return !a4 && status == 1;
  p_stream = (compression_stream *)&self->_stream;
  self->_stream.src_ptr = a3;
  self->_stream.src_size = a4;
  while ( 1 )
  {
    if ( self->_stream.dst_size )
      goto LABEL_10;
    dst_ptr = p_stream->dst_ptr;
    if ( !p_stream->dst_ptr || dst_ptr == (uint8_t *)&unk_1001F7FFC )
      goto LABEL_46;
    v17 = dispatch_data_create(dst_ptr - 1024, 0x400uLL, 0LL, _dispatch_data_destructor_free);
    self->_stream.dst_ptr = (char *)&unk_1001F7FFC;
    self->_stream.dst_size = 0LL;
    handler = self->_handler;
    if ( handler
      && ((*((__int64 (__fastcall **)(id, TSUStreamCompression *, _QWORD, dispatch_data_t, _QWORD))handler + 2))(
            handler,
            self,
            0LL,
            v17,
            0LL) & 1) == 0 )
    {
      self->_status = -1;
      v19 = self->_handler;
      self->_handler = 0LL;
      objc_release(v19);
    }
    objc_release(v17);
    v11 = self->_status;
    if ( !v11 )
    {
LABEL_46:
      self->_stream.dst_ptr = (char *)malloc_type_malloc(0x400uLL, 0x39E6C050uLL);
      self->_stream.dst_size = 1024LL;
      v11 = self->_status;
      if ( !v11 )
LABEL_10:
        v11 = compression_stream_process(p_stream, a5);
    }
    self->_status = v11;
    if ( v11 == -1 )
    {
      v20 = (void (__fastcall **)(id, TSUStreamCompression *, __int64, _QWORD, NSError *))self->_handler;
      if ( !v20 )
        goto LABEL_42;
      v21 = objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                NSCocoaErrorDomain,
                2048LL,
                0LL));
      v20[2](v20, self, 1LL, 0LL, v21);
      objc_release(v21);
      v14 = self->_handler;
      self->_handler = 0LL;
    }
    else
    {
      if ( v11 != 1 )
        goto LABEL_36;
      v12 = p_stream->dst_ptr;
      if ( !p_stream->dst_ptr || v12 == (uint8_t *)&unk_1001F7FFC )
      {
        v22 = objc_retain(&_dispatch_data_empty);
        v14 = &_dispatch_data_empty;
      }
      else
      {
        dst_size = self->_stream.dst_size;
        if ( dst_size > 0x3FF )
        {
          free(v12);
          v23 = objc_retain(&_dispatch_data_empty);
          v14 = &_dispatch_data_empty;
        }
        else
        {
          v14 = dispatch_data_create(&v12[dst_size - 1024], 1024 - dst_size, 0LL, _dispatch_data_destructor_free);
        }
        self->_stream.dst_ptr = (char *)&unk_1001F7FFC;
        self->_stream.dst_size = 0LL;
      }
      v24 = (__int64 (__fastcall **)(id, TSUStreamCompression *, __int64, void *, _QWORD))self->_handler;
      if ( v24 && (v24[2](v24, self, 1LL, v14, 0LL) & 1) == 0 )
      {
        self->_status = -1;
        v25 = self->_handler;
        self->_handler = 0LL;
        objc_release(v25);
      }
    }
    objc_release(v14);
    v11 = self->_status;
LABEL_36:
    if ( v11 )
      break;
    if ( a5 != 1 && !self->_stream.src_size )
    {
      result = 1;
      goto LABEL_43;
    }
  }
  if ( v11 == 1 )
  {
    result = self->_stream.src_size == 0;
    goto LABEL_43;
  }
LABEL_42:
  result = 0;
LABEL_43:
  self->_stream.src_ptr = (char *)&unk_1001F7FFC;
  self->_stream.src_size = 0LL;
  return result;
}