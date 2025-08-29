-[DocumentCompressor finalChunkCompletionHandler:]
bool __cdecl -[DocumentCompressor finalChunkCompletionHandler:](DocumentCompressor *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, unsigned __int8 *, __int64); // x19
  z_stream_s *stream; // x8
  z_stream_s *v6; // x0
  int v7; // w0
  _BOOL4 v8; // w22

  v4 = (void (__fastcall **)(id, unsigned __int8 *, __int64))objc_retain(a3);
  stream = self->_stream;
  if ( stream )
  {
    stream->next_in = (Bytef *)"";
    self->_stream->avail_in = 0;
    do
    {
      self->_stream->next_out = self->_buffer;
      v6 = self->_stream;
      v6->avail_out = 0x2000;
      v7 = deflate(v6, 4);
      v8 = 0;
      if ( v7 != -5 && v7 != 0 )
      {
        if ( v7 != 1 )
          goto LABEL_11;
        v8 = 1;
      }
      v4[2](v4, self->_buffer, 0x2000LL - self->_stream->avail_out);
    }
    while ( !v8 );
  }
  LOBYTE(v8) = 1;
LABEL_11:
  objc_release(v4);
  return v8;
}