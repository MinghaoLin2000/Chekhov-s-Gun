-[MediaConversionRequestTracker shouldDump]
bool __cdecl -[MediaConversionRequestTracker shouldDump](MediaConversionRequestTracker *self, SEL a2)
{
  NSUserDefaults *v2; // x19
  unsigned __int8 v3; // w20

  v2 = objc_retainAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
  v3 = -[NSUserDefaults boolForKey:](v2, "boolForKey:", CFSTR("MediaConversionServiceKeepTemporaryFiles"));
  objc_release(v2);
  return v3;
}