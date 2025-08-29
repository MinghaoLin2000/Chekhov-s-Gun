-[LocalProxyConnection _shutdown]
void __cdecl -[LocalProxyConnection _shutdown](LocalProxyConnection *self, SEL a2)
{
  OS_dispatch_source *rs; // x0
  OS_dispatch_source *v4; // x0
  dispatch_source_s *ws; // x0
  OS_dispatch_source *v6; // x0
  OS_nw_connection *conn; // x0
  OS_nw_connection *v8; // x0
  int fd; // w0
  id cleanupBlock; // x0
  void (__fastcall **v11)(id, LocalProxyConnection *); // x20
  id v12; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  rs = self->_rs;
  if ( rs )
  {
    dispatch_source_cancel((dispatch_source_t)rs);
    v4 = self->_rs;
    self->_rs = 0LL;
    objc_release(v4);
  }
  ws = (dispatch_source_s *)self->_ws;
  if ( ws )
  {
    if ( self->_ws_suspended )
    {
      self->_ws_suspended = 0;
      dispatch_resume(ws);
      ws = (dispatch_source_s *)self->_ws;
    }
    dispatch_source_cancel(ws);
    v6 = self->_ws;
    self->_ws = 0LL;
    objc_release(v6);
  }
  conn = self->_conn;
  if ( conn )
  {
    nw_connection_cancel(conn);
    v8 = self->_conn;
    self->_conn = 0LL;
    objc_release(v8);
  }
  fd = self->_fd;
  if ( fd != -1 )
  {
    close(fd);
    self->_fd = -1;
  }
  cleanupBlock = self->_cleanupBlock;
  if ( cleanupBlock )
  {
    v11 = (void (__fastcall **)(id, LocalProxyConnection *))objc_retainBlock(cleanupBlock);
    v12 = self->_cleanupBlock;
    self->_cleanupBlock = 0LL;
    objc_release(v12);
    v11[2](v11, self);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v11);
  }
}