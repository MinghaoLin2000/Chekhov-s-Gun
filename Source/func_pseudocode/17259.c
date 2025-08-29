-[AMRemoteActionExecution executionAfterPausing]
id __cdecl -[AMRemoteActionExecution executionAfterPausing](AMRemoteActionExecution *self, SEL a2)
{
  void *v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = -[AMRemoteActionExecution copy](self, "copy");
  objc_msgSend(v2, "setPaused:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}