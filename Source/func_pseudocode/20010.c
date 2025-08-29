-[LocalProxyConnection _canReadFromSocket]
void __cdecl -[LocalProxyConnection _canReadFromSocket](LocalProxyConnection *self, SEL a2)
{
  ssize_t v3; // x1
  dispatch_data_s *v4; // x20
  _BYTE buffer[16384]; // [xsp+8h] [xbp-4028h] BYREF

  v3 = read(self->_fd, buffer, 0x4000uLL);
  if ( v3 <= 0 )
  {
    -[LocalProxyConnection _shutdown](self, "_shutdown");
  }
  else
  {
    v4 = dispatch_data_create(buffer, v3, 0LL, 0LL);
    nw_connection_send(self->_conn, v4, self->_context, 0, &stru_10009E168);
    objc_release(v4);
  }
}