-[AMRemoteActionExecution .cxx_destruct]
void __cdecl -[AMRemoteActionExecution .cxx_destruct](AMRemoteActionExecution *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong(&self->_overallCompletionHandler, 0LL);
  objc_storeStrong(&self->_xpcCompletionHandler, 0LL);
  objc_storeStrong((id *)&self->_allOperations, 0LL);
  objc_storeStrong((id *)&self->_runActionOperation, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_runner, 0LL);
}