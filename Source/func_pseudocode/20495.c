-[Browse_Implementation .cxx_destruct]
void __cdecl -[Browse_Implementation .cxx_destruct](Browse_Implementation *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong(&self->_updateEntity, 0LL);
  objc_storeStrong(&self->_removeEntity, 0LL);
  objc_storeStrong(&self->_addEntity, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_session, 0LL);
}