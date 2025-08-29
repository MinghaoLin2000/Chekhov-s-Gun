-[PrintdRPCService startBrowsing:provenance:]
void __cdecl -[PrintdRPCService startBrowsing:provenance:](PrintdRPCService *self, SEL a2, id a3, unsigned __int64 a4)
{
  id v6; // x19
  os_log_s *v7; // x22
  id v8; // x22
  BrowseService *v9; // x24
  id v10; // x22
  IPPSession *v11; // x23
  BrowseService *v12; // x0
  BrowseService *browser; // x8
  uint8_t v14[16]; // [xsp+0h] [xbp-40h] BYREF

  v6 = objc_retain(a3);
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v14 = 0;
    _os_log_impl((void *)&_mh_execute_header, v7, OS_LOG_TYPE_DEFAULT, "startBrowsing", v14, 2u);
  }
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue((id)getPrintdRPCBrowseProtocolInterface());
  -[NSXPCConnection setRemoteObjectInterface:](self->_connection, "setRemoteObjectInterface:", v8);
  objc_release(v8);
  v9 = objc_alloc(&OBJC_CLASS___BrowseService);
  v10 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection remoteObjectProxy](self->_connection, "remoteObjectProxy"));
  v11 = objc_retainAutoreleasedReturnValue(-[PrintdRPCService ippNetworkingSession](self, "ippNetworkingSession"));
  v12 = -[BrowseService initWithProxy:session:](v9, "initWithProxy:session:", v10, v11);
  browser = self->_browser;
  self->_browser = v12;
  objc_release(browser);
  objc_release(v11);
  objc_release(v10);
  -[BrowseService startBrowsing:provenance:](self->_browser, "startBrowsing:provenance:", v6, a4);
  objc_release(v6);
}