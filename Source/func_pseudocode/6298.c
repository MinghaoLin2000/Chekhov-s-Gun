-[PAMediaConversionServiceImageConversionJob valid]
bool __cdecl -[PAMediaConversionServiceImageConversionJob valid](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  unsigned __int64 validationState; // x8
  NSAssertionHandler *v6; // x21

  validationState = self->_validationState;
  if ( !validationState )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v6,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1117LL,
      CFSTR("Call validateSourceAndOptions on job before calling valid"));
    objc_release(v6);
    validationState = self->_validationState;
  }
  return validationState == 2;
}