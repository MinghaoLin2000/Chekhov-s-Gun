-[PAMediaConversionServiceResourceURLCollectionAccessProvider .cxx_destruct]
void __cdecl -[PAMediaConversionServiceResourceURLCollectionAccessProvider .cxx_destruct](
        PAMediaConversionServiceResourceURLCollectionAccessProvider *self,
        SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_collection, 0LL);
  objc_storeStrong((id *)&self->_error, 0LL);
  objc_storeStrong((id *)&self->_blastDoorMainSourceProperties, 0LL);
  objc_storeStrong((id *)&self->_blastDoorSourceURL, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_blastdoorInterface, 0LL);
}