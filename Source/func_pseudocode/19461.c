-[MDRemoteServiceSupport generateNoncesForUUID:type:withReply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[MDRemoteServiceSupport generateNoncesForUUID:type:withReply:](
        MDRemoteServiceSupport *self,
        SEL a2,
        id a3,
        unsigned int a4,
        id a5)
{
  __int64 v5; // x20
  void (__fastcall **v8)(id, NSData *, NSData *); // x19
  id v9; // x0
  void *v10; // x20
  const void *data; // x0
  NSData *v12; // x21
  NSData *v13; // x22
  const void *v14; // x0
  size_t length; // [xsp+8h] [xbp-28h] BYREF

  v5 = *(_QWORD *)&a4;
  v8 = (void (__fastcall **)(id, NSData *, NSData *))objc_retain(a5);
  v9 = -[MDRemoteServiceSupport _copyReplyFromRestoreServiceCommand:toRemoteDeviceWithUUID:type:](
         self,
         "_copyReplyFromRestoreServiceCommand:toRemoteDeviceWithUUID:type:",
         "getnonces",
         a3,
         v5);
  v10 = v9;
  if ( v9 )
  {
    length = 0LL;
    data = xpc_dictionary_get_data(v9, "apNonce", &length);
    if ( data )
      v12 = objc_retainAutoreleasedReturnValue(+[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", data, length));
    else
      v12 = 0LL;
    v14 = xpc_dictionary_get_data(v10, "sepNonce", &length);
    if ( v14 )
      v13 = objc_retainAutoreleasedReturnValue(+[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", v14, length));
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
    v12 = 0LL;
  }
  v8[2](v8, v12, v13);
  objc_release(v10);
  objc_release(v13);
  objc_release(v12);
  objc_release(v8);
}