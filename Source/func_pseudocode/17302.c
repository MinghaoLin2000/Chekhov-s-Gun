-[AMParametersObserver .cxx_destruct]
void __cdecl -[AMParametersObserver .cxx_destruct](AMParametersObserver *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_action, 0LL);
  objc_destroyWeak((id *)&self->_delegate);
  objc_storeStrong((id *)&self->__previousParameters, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->__observedParameters, 0LL);
}