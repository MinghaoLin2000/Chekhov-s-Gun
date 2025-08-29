-[LocalSocketProxy _listenerReady]
void __cdecl -[LocalSocketProxy _listenerReady](LocalSocketProxy *self, SEL a2)
{
  os_log_s *v3; // x20
  OS_nw_listener *listener; // x8
  int port; // w9
  int v6; // [xsp+0h] [xbp-30h] BYREF
  OS_nw_listener *v7; // [xsp+4h] [xbp-2Ch]
  __int16 v8; // [xsp+Ch] [xbp-24h]
  int v9; // [xsp+Eh] [xbp-22h]

  self->_port = nw_listener_get_port(self->_listener);
  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    listener = self->_listener;
    port = self->_port;
    v6 = 138412546;
    v7 = listener;
    v8 = 1024;
    v9 = port;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v3,
      OS_LOG_TYPE_DEFAULT,
      "LocalSocketProxy: Listener %@ ready on port %d",
      (uint8_t *)&v6,
      0x12u);
  }
  objc_release(v3);
  -[LocalSocketProxy _flushWaiters](self, "_flushWaiters");
}