-[AMRemoteActionRunner .cxx_destruct]
void __cdecl -[AMRemoteActionRunner .cxx_destruct](AMRemoteActionRunner *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->__workflowID, 0LL);
  objc_storeStrong((id *)&self->__currentRunUUID, 0LL);
  objc_storeStrong(&self->__input, 0LL);
  objc_storeStrong((id *)&self->__action, 0LL);
  objc_destroyWeak((id *)&self->_delegate);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->__error, 0LL);
}