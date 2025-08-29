-[IPPSessionTransaction updateInitialPayloadUserName:]
void __cdecl -[IPPSessionTransaction updateInitialPayloadUserName:](IPPSessionTransaction *self, SEL a2, id a3)
{
  id v5; // x19
  ipp_request_t *initialRequest; // x20
  NSString *v7; // x21
  _BYTE v8[24]; // [xsp+8h] [xbp-38h] BYREF

  v5 = objc_retain(a3);
  if ( v5 )
  {
    initialRequest = self->_initialRequest;
    v7 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
    sub_10000D940((int)v8, initialRequest);
    objc_release(v7);
    sub_100009AF0((int)v8, v5);
    sub_10000DA08(v8);
  }
  objc_release(v5);
}