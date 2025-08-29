-[DeviceActivationFailedViewController .cxx_destruct]
void __cdecl -[DeviceActivationFailedViewController .cxx_destruct](DeviceActivationFailedViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_activationError, 0LL);
  objc_destroyWeak((id *)&self->_activationExplanationTextField);
  objc_destroyWeak((id *)&self->_activationErrorTextField);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_activationFailedTextField);
}