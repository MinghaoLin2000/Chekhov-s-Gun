-[MDRemoteServiceSupport queryPreflightDictionaryForUUID:type:withReply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[MDRemoteServiceSupport queryPreflightDictionaryForUUID:type:withReply:](
        MDRemoteServiceSupport *self,
        SEL a2,
        id a3,
        unsigned int a4,
        id a5)
{
  __int64 v5; // x20
  void (__fastcall **v8)(id, void *); // x19
  id v9; // x0
  void *v10; // x20
  xpc_object_t v11; // x0
  void *v12; // x22
  void *v13; // x21
  CFTypeID TypeID; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = *(_QWORD *)&a4;
  v8 = (void (__fastcall **)(id, void *))objc_retain(a5);
  v9 = -[MDRemoteServiceSupport _copyReplyFromRestoreServiceCommand:toRemoteDeviceWithUUID:type:](
         self,
         "_copyReplyFromRestoreServiceCommand:toRemoteDeviceWithUUID:type:",
         "getpreflightinfo",
         a3,
         v5);
  v10 = v9;
  if ( v9 )
  {
    v11 = objc_retainAutoreleasedReturnValue(xpc_dictionary_get_dictionary(v9, "preflightinfo"));
    v12 = v11;
    if ( v11 )
    {
      v13 = (void *)_CFXPCCreateCFObjectFromXPCObject(v11);
      TypeID = CFDictionaryGetTypeID();
      if ( TypeID == CFGetTypeID(v13) )
      {
LABEL_6:
        objc_release(v12);
        goto LABEL_8;
      }
      CFRelease(v13);
    }
    v13 = 0LL;
    goto LABEL_6;
  }
  v13 = 0LL;
LABEL_8:
  v8[2](v8, v13);
  objc_release(v10);
  objc_release(v13);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}