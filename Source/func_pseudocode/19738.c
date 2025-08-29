-[platform_http_get start]
void __cdecl -[platform_http_get start](platform_http_get *self, SEL a2)
{
  NSMutableURLRequest *v3; // x19
  id v4; // x0
  NSURLSession *v5; // x22
  NSURLSessionDataTask *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableURLRequest requestWithURL:](&OBJC_CLASS___NSMutableURLRequest, "requestWithURL:", self->_url));
  v4 = objc_unsafeClaimAutoreleasedReturnValue((id)sub_100008454(v3));
  v5 = objc_retainAutoreleasedReturnValue(-[IPPSession URLSession](self->_session, "URLSession"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSURLSession dataTaskWithRequest:](v5, "dataTaskWithRequest:", v3));
  objc_release(v5);
  -[NSURLSessionDataTask setDelegate:](v6, "setDelegate:", self);
  -[NSURLSessionDataTask resume](v6, "resume");
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}