-[SiriNCService ncClientObjectProxy]
SiriNCClientProtocol *__cdecl -[SiriNCService ncClientObjectProxy](SiriNCService *self, SEL a2)
{
  NSXPCConnection *v3; // x19
  id v4; // x0
  void *v5; // x20
  SiriNCClientProtocol *v6; // x0
  SiriNCClientProtocol *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[SiriNCService connection](self, "connection"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection remoteObjectProxy](v3, "remoteObjectProxy"));
  v5 = v4;
  if ( v4 )
    v6 = (SiriNCClientProtocol *)objc_retain(v4);
  else
    v6 = objc_retainAutoreleasedReturnValue(-[SiriNCService localObjectProxy](self, "localObjectProxy"));
  v7 = v6;
  objc_release(v5);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}