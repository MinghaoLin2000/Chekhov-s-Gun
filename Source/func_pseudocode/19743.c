-[platform_http_get URLSession:task:didCompleteWithError:]
void __cdecl -[platform_http_get URLSession:task:didCompleteWithError:](
        platform_http_get *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  os_log_s *v6; // x20
  unsigned int v7; // w0
  id *p_cb; // x19
  void (**cb)(void); // t1
  id v10; // x0
  id v11; // x0
  _DWORD v12[2]; // [xsp+0h] [xbp-20h] BYREF

  v6 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v6, OS_LOG_TYPE_DEFAULT) )
  {
    v7 = (unsigned int)-[NSMutableData length](self->_data, "length");
    v12[0] = 67109120;
    v12[1] = v7;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v6,
      OS_LOG_TYPE_DEFAULT,
      "fetch completed with %d bytes",
      (uint8_t *)v12,
      8u);
  }
  objc_release(v6);
  cb = (void (**)(void))self->_cb;
  p_cb = &self->_cb;
  cb[2]();
  v10 = *p_cb;
  *p_cb = 0LL;
  objc_release(v10);
  v11 = p_cb[1];
  p_cb[1] = 0LL;
  objc_release(v11);
}