-[AMLoaderServiceAction remoteActionReset]
void __cdecl -[AMLoaderServiceAction remoteActionReset](AMLoaderServiceAction *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[AMLoaderServiceAction _tearDownExecutionWithError:](self, "_tearDownExecutionWithError:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
    self,
    "_executeSynchronouslyWithLoadedActionOnMainThread:",
    &stru_10001C6B8);
}