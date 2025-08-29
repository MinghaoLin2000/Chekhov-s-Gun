-[IPPSession debugDescription]
id __cdecl -[IPPSession debugDescription](IPPSession *self, SEL a2)
{
  id v3; // x19
  NSURLSessionConfiguration *v4; // x20
  NSDictionary *v5; // x22
  NSString *v6; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[IPPSession getLogLeader](self, "getLogLeader"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSURLSession configuration](self->_URLSession, "configuration"));
  v5 = objc_retainAutoreleasedReturnValue(-[NSURLSessionConfiguration HTTPAdditionalHeaders](v4, "HTTPAdditionalHeaders"));
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@ - http headers: %@"),
           v3,
           v5));
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}