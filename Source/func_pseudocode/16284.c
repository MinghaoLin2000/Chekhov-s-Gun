-[FudPersonalizer createPersonalizationObjectCFDict:]
__CFDictionary *__cdecl -[FudPersonalizer createPersonalizationObjectCFDict:](FudPersonalizer *self, SEL a2, id a3)
{
  __CFDictionary *Mutable; // x20
  const void **v5; // x8
  const void **v6; // x8
  const void **v7; // x8
  const __CFString *v9; // x1
  const char *v10; // [xsp+0h] [xbp-30h]

  if ( !objc_msgSend(a3, "objectTag") )
  {
    v9 = CFSTR("%s(): objectTag=nil\n");
LABEL_27:
    FudLog(3LL, v9);
    return 0LL;
  }
  if ( !objc_msgSend(a3, "digest") )
  {
    v9 = CFSTR("%s(): digest=nil\n");
    goto LABEL_27;
  }
  if ( ((unsigned int)objc_msgSend(a3, "isEffectiveProductionModeSet") & 1) == 0 )
  {
    v9 = CFSTR("%s(): epro not set\n");
    goto LABEL_27;
  }
  if ( ((unsigned int)objc_msgSend(a3, "isEffectiveSecurityModeSet") & 1) == 0 )
  {
    v10 = "-[FudPersonalizer createPersonalizationObjectCFDict:]";
    FudLog(4LL, CFSTR("%s(): esec not set.\n"));
  }
  Mutable = CFDictionaryCreateMutable(0LL, 0LL, &kCFTypeDictionaryKeyCallBacks, &kCFTypeDictionaryValueCallBacks);
  if ( Mutable )
  {
    if ( (unsigned int)objc_msgSend(a3, "isEffectiveSecurityModeSet") )
    {
      if ( (unsigned int)objc_msgSend(a3, "effectiveSecurityMode") )
        v5 = (const void **)&kCFBooleanTrue;
      else
        v5 = (const void **)&kCFBooleanFalse;
      CFDictionarySetValue(Mutable, CFSTR("ESEC"), *v5);
    }
    if ( (unsigned int)objc_msgSend(a3, "isEffectiveProductionModeSet", v10) )
    {
      if ( (unsigned int)objc_msgSend(a3, "effectiveProductionMode") )
        v6 = (const void **)&kCFBooleanTrue;
      else
        v6 = (const void **)&kCFBooleanFalse;
      CFDictionarySetValue(Mutable, CFSTR("EPRO"), *v6);
    }
    if ( (unsigned int)objc_msgSend(a3, "isTrustedSet") )
    {
      if ( (unsigned int)objc_msgSend(a3, "trusted") )
        v7 = (const void **)&kCFBooleanTrue;
      else
        v7 = (const void **)&kCFBooleanFalse;
      CFDictionarySetValue(Mutable, CFSTR("Trusted"), *v7);
    }
    CFDictionarySetValue(Mutable, CFSTR("Digest"), objc_msgSend(a3, "digest"));
  }
  else
  {
    FudLog(3LL, CFSTR("%s(): error creating cfdict\n"));
  }
  return Mutable;
}