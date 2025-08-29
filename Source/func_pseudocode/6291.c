-[PAMediaConversionServiceImageConversionJob mainSourceResourceURL]
NSURL *__cdecl -[PAMediaConversionServiceImageConversionJob mainSourceResourceURL](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  id v4; // x19
  NSAssertionHandler *v6; // x22
  uint8_t v7[16]; // [xsp+0h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(
         -[PAMediaConversionServiceResourceURLCollection resourceURLForRole:](
           self->_sourceResourceURLCollection,
           "resourceURLForRole:",
           CFSTR("PAMediaConversionResourceRoleMainResource")));
  if ( -[PAMediaConversionServiceResourceURLCollection isBlastDoorAccessRequired](
         self->_sourceResourceURLCollection,
         "isBlastDoorAccessRequired") )
  {
    if ( !v4 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)v7 = 0;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "[BlastDoor] Unexpected nil main resource URL for blastDoorAccess",
        v7,
        2u);
    }
  }
  else if ( !v4 )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v6,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1160LL,
      CFSTR("Unexpected nil main resource URL"));
    objc_release(v6);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSURL *)objc_autoreleaseReturnValue(v4);
}