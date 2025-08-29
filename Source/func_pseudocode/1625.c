-[BarChoice .cxx_destruct]
void __cdecl -[BarChoice .cxx_destruct](BarChoice *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_identifier, 0LL);
  objc_storeStrong((id *)&self->_menuRepresentation, 0LL);
  objc_storeStrong((id *)&self->_buttonRepresentation, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_title, 0LL);
}