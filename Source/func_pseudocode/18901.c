-[SiriNCService startMyriadAdvertisingWithRequestOptions:]
void __cdecl -[SiriNCService startMyriadAdvertisingWithRequestOptions:](SiriNCService *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( (unsigned int)+[AFFeatureFlags isSCDAFrameworkEnabled](&OBJC_CLASS___AFFeatureFlags, "isSCDAFrameworkEnabled") )
    -[SiriNCService _startSCDAAdvertisingWithRequestOptions:](self, "_startSCDAAdvertisingWithRequestOptions:", v4);
  else
    -[SiriNCService _startMyriadAdvertisingWithRequestOptions:](self, "_startMyriadAdvertisingWithRequestOptions:", v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}