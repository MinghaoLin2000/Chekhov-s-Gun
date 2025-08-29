-[TSUDescription .cxx_destruct]
void __cdecl -[TSUDescription .cxx_destruct](TSUDescription *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_fieldOrder, 0LL);
  objc_storeStrong((id *)&self->_fields, 0LL);
  objc_storeStrong((id *)&self->_header, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_object);
}