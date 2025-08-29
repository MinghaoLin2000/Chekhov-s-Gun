-[platform_http_get URLSession:dataTask:didReceiveData:]
void __cdecl -[platform_http_get URLSession:dataTask:didReceiveData:](
        platform_http_get *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v6; // x19
  NSUInteger v7; // x21
  NSMutableData *data; // x0
  NSMutableData *v9; // x0
  NSMutableData *v10; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a5);
  v7 = -[NSMutableData length](self->_data, "length");
  if ( (unsigned __int64)objc_msgSend(v6, "length") + v7 <= 0x100000 )
  {
    data = self->_data;
    if ( data )
    {
      -[NSMutableData appendData:](data, "appendData:", v6);
    }
    else
    {
      v9 = (NSMutableData *)objc_msgSend(v6, "mutableCopy");
      v10 = self->_data;
      self->_data = v9;
      objc_release(v10);
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}