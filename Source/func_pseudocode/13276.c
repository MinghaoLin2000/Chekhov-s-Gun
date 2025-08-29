-[TSUFileIOChannel isValid]
bool __cdecl -[TSUFileIOChannel isValid](TSUFileIOChannel *self, SEL a2)
{
  unsigned __int8 v2; // w8
  dispatch_fd_t descriptor; // w0
  char v5; // [xsp+Fh] [xbp-1h] BYREF

  v2 = atomic_load((unsigned __int8 *)&self->_isClosed);
  if ( (v2 & 1) != 0 )
    return 0;
  descriptor = dispatch_io_get_descriptor((dispatch_io_t)self->_channel);
  v5 = 0;
  return read(descriptor, &v5, 0LL) == 0;
}