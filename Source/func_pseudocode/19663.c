-[IPPSession initWithBundleIdentifier:clientID:]
// local variable allocation has failed, the output may be wrong!
IPPSession *__cdecl -[IPPSession initWithBundleIdentifier:clientID:](IPPSession *self, SEL a2, id a3, int a4)
{
  return (IPPSession *)-[IPPSession _initWithBundleIdentifier:clientID:completeConfiguraton:](
                         self,
                         "_initWithBundleIdentifier:clientID:completeConfiguraton:",
                         a3,
                         *(_QWORD *)&a4,
                         0LL);
}