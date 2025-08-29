-[platform_http_get initWithSession:url:callback:]
platform_http_get *__cdecl -[platform_http_get initWithSession:url:callback:](
        platform_http_get *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v9; // x19
  id v10; // x20
  id v11; // x21
  platform_http_get *v12; // x0
  platform_http_get *v13; // x23
  id v14; // x0
  id cb; // x8
  objc_super v17; // [xsp+0h] [xbp-40h] BYREF

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = objc_retain(a5);
  v17.receiver = self;
  v17.super_class = (Class)&OBJC_CLASS___platform_http_get;
  v12 = -[platform_http_get init](&v17, "init");
  v13 = v12;
  if ( v12 )
  {
    objc_storeStrong((id *)&v12->_session, a3);
    objc_storeStrong((id *)&v13->_url, a4);
    v14 = objc_retainBlock(v11);
    cb = v13->_cb;
    v13->_cb = v14;
    objc_release(cb);
  }
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  return v13;
}