-[IsExtensionEnabled requestingAppURL]
id __cdecl -[IsExtensionEnabled requestingAppURL](IsExtensionEnabled *self, SEL a2)
{
  NSRunningApplication *v2; // x19
  NSURL *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(
         +[NSRunningApplication runningApplicationWithProcessIdentifier:](
           &OBJC_CLASS___NSRunningApplication,
           "runningApplicationWithProcessIdentifier:",
           -[IsExtensionEnabled requestingProcessIdentifier](self, "requestingProcessIdentifier")));
  v3 = objc_retainAutoreleasedReturnValue(-[NSRunningApplication bundleURL](v2, "bundleURL"));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}