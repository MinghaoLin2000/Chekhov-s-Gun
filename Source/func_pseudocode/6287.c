-[PAMediaConversionServiceImageConversionJob destinationImageProperties]
NSMutableDictionary *__cdecl -[PAMediaConversionServiceImageConversionJob destinationImageProperties](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  NSMutableDictionary *destinationImageProperties; // x0
  NSAssertionHandler *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( !-[PAMediaConversionServiceImageConversionJob valid](self, "valid") )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v6,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1195LL,
      CFSTR("Invalid job"));
    objc_release(v6);
  }
  destinationImageProperties = self->_destinationImageProperties;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(destinationImageProperties);
}