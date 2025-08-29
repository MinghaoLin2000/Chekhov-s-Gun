-[LocalProxyConnection initWithConnection:path:queue:]
LocalProxyConnection *__cdecl -[LocalProxyConnection initWithConnection:path:queue:](
        LocalProxyConnection *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v9; // x19
  id v10; // x20
  id v11; // x22
  LocalProxyConnection *v12; // x24
  id v13; // x25
  nw_content_context_t v14; // x0
  OS_nw_content_context *context; // x8
  objc_super v17; // [xsp+0h] [xbp-50h] BYREF

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = objc_retain(a5);
  v17.receiver = self;
  v17.super_class = (Class)&OBJC_CLASS___LocalProxyConnection;
  v12 = -[LocalProxyConnection init](&v17, "init");
  if ( v12 )
  {
    v13 = objc_retainAutorelease(v10);
    v14 = nw_content_context_create((const char *)objc_msgSend(v13, "UTF8String"));
    context = v12->_context;
    v12->_context = v14;
    objc_release(context);
    objc_storeStrong((id *)&v12->_conn, a3);
    objc_storeStrong((id *)&v12->_queue, a5);
    objc_storeStrong((id *)&v12->_path, v13);
  }
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  return v12;
}