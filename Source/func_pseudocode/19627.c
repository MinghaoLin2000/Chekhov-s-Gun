-[DocumentCompressor compressChunk:length:completionHandler:]
bool __cdecl -[DocumentCompressor compressChunk:length:completionHandler:](
        DocumentCompressor *self,
        SEL a2,
        const char *a3,
        unsigned __int64 a4,
        id a5)
{
  __int64 (__fastcall **v8)(id, unsigned __int8 *, __int64); // x19
  bool v9; // w21
  z_stream_s *stream; // x8
  z_stream_s *v11; // x8
  z_stream_s *v12; // x0

  v8 = (__int64 (__fastcall **)(id, unsigned __int8 *, __int64))objc_retain(a5);
  v9 = 1;
  if ( a4 )
  {
    stream = self->_stream;
    if ( stream )
    {
      stream->next_in = (Bytef *)a3;
      self->_stream->avail_in = a4;
      while ( 1 )
      {
        v11 = self->_stream;
        if ( !v11->avail_in )
        {
LABEL_7:
          v9 = 1;
          goto LABEL_9;
        }
        v11->next_out = self->_buffer;
        v12 = self->_stream;
        v12->avail_out = 0x2000;
        if ( deflate(v12, 0) )
          break;
        if ( (v8[2](v8, self->_buffer, 0x2000LL - self->_stream->avail_out) & 1) == 0 )
          goto LABEL_7;
      }
      v9 = 0;
    }
  }
LABEL_9:
  objc_release(v8);
  return v9;
}