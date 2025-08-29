-[PAMediaConversionServiceAddPFMetadataPolicy .cxx_destruct]
void __cdecl -[PAMediaConversionServiceAddPFMetadataPolicy .cxx_destruct](
        PAMediaConversionServiceAddPFMetadataPolicy *self,
        SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong(&self->_value, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_key, 0LL);
}