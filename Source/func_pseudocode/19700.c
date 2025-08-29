-[IPPSessionTransaction URLSession:dataTask:didReceiveData:]
void __cdecl -[IPPSessionTransaction URLSession:dataTask:didReceiveData:](
        IPPSessionTransaction *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  NSMutableData *responseData; // x0
  NSMutableData *v12; // x0
  NSMutableData *v13; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  if ( self->_initialPayloadSentCallback )
    __assert_rtn(
      "-[IPPSessionTransaction URLSession:dataTask:didReceiveData:]",
      "platform_http.mm",
      899,
      "_initialPayloadSentCallback == nil");
  responseData = self->_responseData;
  if ( responseData )
  {
    -[NSMutableData appendData:](responseData, "appendData:", v10);
  }
  else
  {
    v12 = (NSMutableData *)objc_msgSend(v10, "mutableCopy");
    v13 = self->_responseData;
    self->_responseData = v12;
    objc_release(v13);
  }
  objc_release(v10);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}