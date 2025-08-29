-[CUPSBrowse_Entity .cxx_destruct]
void __cdecl -[CUPSBrowse_Entity .cxx_destruct](CUPSBrowse_Entity *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_txt, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_bonjourName, 0LL);
}