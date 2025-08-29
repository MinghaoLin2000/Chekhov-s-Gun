-[LocalSocketProxy _newConnection:]
void __cdecl -[LocalSocketProxy _newConnection:](LocalSocketProxy *self, SEL a2, id a3)
{
  LocalProxyConnection *v4; // x19
  os_log_s *v5; // x20
  LocalProxyConnection *v6; // x20
  NSMutableSet *v7; // x0
  NSMutableSet *v8; // x21
  os_log_s *v9; // x22
  _QWORD v10[4]; // [xsp+8h] [xbp-68h] BYREF
  id v11; // [xsp+28h] [xbp-48h]
  uint8_t buf[4]; // [xsp+30h] [xbp-40h] BYREF
  LocalProxyConnection *v13; // [xsp+34h] [xbp-3Ch]

  v4 = (LocalProxyConnection *)objc_retain(a3);
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 138412290;
    v13 = v4;
    _os_log_impl((void *)&_mh_execute_header, v5, OS_LOG_TYPE_DEFAULT, "LocalSocketProxy: New connection %@", buf, 0xCu);
  }
  objc_release(v5);
  v6 = -[LocalProxyConnection initWithConnection:path:queue:](
         objc_alloc(&OBJC_CLASS___LocalProxyConnection),
         "initWithConnection:path:queue:",
         v4,
         self->_path,
         self->_queue);
  -[NSMutableSet addObject:](self->_connections, "addObject:", v6);
  v7 = objc_retain(self->_connections);
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_10002899C;
  v10[3] = &unk_10009E038;
  v8 = objc_retain(v7);
  v11 = v8;
  -[LocalProxyConnection setCleanupBlock:](v6, "setCleanupBlock:", v10);
  -[LocalProxyConnection start](v6, "start");
  v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 138412290;
    v13 = v6;
    _os_log_impl((void *)&_mh_execute_header, v9, OS_LOG_TYPE_DEFAULT, "LocalSocketProxy: Started proxy %@", buf, 0xCu);
  }
  objc_release(v9);
  objc_release(v11);
  objc_release(v8);
  objc_release(v6);
  objc_release(v4);
}