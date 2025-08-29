+[PAUbiquityController _ubiquitousContainerURL]
id __cdecl +[PAUbiquityController _ubiquitousContainerURL](id a1, SEL a2)
{
  NSFileManager *v2; // x20
  NSURL *v3; // x19
  os_log_s *v4; // x20
  uint8_t v6[16]; // [xsp+0h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v3 = objc_retainAutoreleasedReturnValue(
         -[NSFileManager URLForUbiquityContainerIdentifier:](
           v2,
           "URLForUbiquityContainerIdentifier:",
           PKUbiquityContainerIdentifier));
  objc_release(v2);
  if ( !v3 )
  {
    v4 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)PKLogFacilityTypeGetObject(0LL));
    if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT) )
    {
      *(_WORD *)v6 = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v4,
        OS_LOG_TYPE_DEFAULT,
        "Could not resolve ubiquity container. This may be a bug.",
        v6,
        2u);
    }
    objc_release(v4);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}