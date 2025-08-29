-[PAMediaConversionServiceImageConversionJob orientationTransformBehavior]
unsigned __int64 __cdecl -[PAMediaConversionServiceImageConversionJob orientationTransformBehavior](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  NSAssertionHandler *v5; // x21

  if ( !-[PAMediaConversionServiceImageConversionJob valid](self, "valid") )
  {
    v5 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v5,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1148LL,
      CFSTR("Invalid job"));
    objc_release(v5);
  }
  return self->_orientationTransformBehavior;
}