-[SiriNCService makeKeyWithReady:]
void __cdecl -[SiriNCService makeKeyWithReady:](SiriNCService *self, SEL a2, id a3)
{
  id v4; // x19
  SiriNCClientProtocol *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( (void *)-[SiriNCService breakoutState](self, "breakoutState") == (void *)2 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[SiriNCService ncClientObjectProxy](self, "ncClientObjectProxy"));
    -[SiriNCClientProtocol hostAppActivate](v5, "hostAppActivate");
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(-[SiriNCService alert](self, "alert"));
    -[SiriNCClientProtocol makeKeyWithReady:](v5, "makeKeyWithReady:", v4);
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}