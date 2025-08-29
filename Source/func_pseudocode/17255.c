-[AMLoaderServiceAction .cxx_destruct]
void __cdecl -[AMLoaderServiceAction .cxx_destruct](AMLoaderServiceAction *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->__variableController, 0LL);
  objc_storeStrong((id *)&self->__parametersObserver, 0LL);
  objc_storeStrong((id *)&self->__actionDelegate, 0LL);
  objc_destroyWeak((id *)&self->__service);
  objc_storeStrong((id *)&self->__workflowUUID, 0LL);
  objc_storeStrong((id *)&self->_uuid, 0LL);
  objc_storeStrong((id *)&self->__amAction, 0LL);
  objc_destroyWeak((id *)&self->__serviceViewController);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->__execution, 0LL);
}