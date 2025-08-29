-[IPPSessionTransaction invalidate]
void __cdecl -[IPPSessionTransaction invalidate](IPPSessionTransaction *self, SEL a2)
{
  id WeakRetained; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  WeakRetained = objc_loadWeakRetained((id *)&self->_task);
  objc_msgSend(WeakRetained, "setDelegate:", 0LL);
  objc_release(WeakRetained);
  -[IPPSessionTransaction setTrust_callback:](self, "setTrust_callback:", 0LL);
  -[IPPSessionTransaction setPass_callback:](self, "setPass_callback:", 0LL);
  -[IPPSessionTransaction setBoundInterfaceSet_callback:](self, "setBoundInterfaceSet_callback:", 0LL);
  -[IPPSessionTransaction setInitialPayloadSentCallback:](self, "setInitialPayloadSentCallback:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[IPPSessionTransaction setTransactionCompletedCallback:](self, "setTransactionCompletedCallback:", 0LL);
}