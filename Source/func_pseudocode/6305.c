-[PAMediaConversionServiceImageConversionJob validateSourceAndOptions]
bool __cdecl -[PAMediaConversionServiceImageConversionJob validateSourceAndOptions](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( !self->_validationState )
    -[PAMediaConversionServiceImageConversionJob _validate](self, "_validate");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[PAMediaConversionServiceImageConversionJob valid](self, "valid");
}