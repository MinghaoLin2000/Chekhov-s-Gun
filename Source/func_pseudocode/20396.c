-[device_http_t _updateInitialMessageIfDefaultCredential:]
void __cdecl -[device_http_t _updateInitialMessageIfDefaultCredential:](
        device_http_t *self,
        SEL a2,
        Real_IPP_Message *a3)
{
  NSURLCredential *defaultCredential; // x0
  int v5; // w19
  NSString *v6; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  defaultCredential = self->_defaultCredential;
  if ( defaultCredential )
  {
    v5 = (int)a3;
    if ( -[NSURLCredential hasPassword](defaultCredential, "hasPassword") )
    {
      v6 = objc_retainAutoreleasedReturnValue(-[NSURLCredential user](self->_defaultCredential, "user"));
      if ( v6 )
        sub_100009AF0(v5, v6);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      objc_release(v6);
    }
  }
}