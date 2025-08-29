_NetFSCopyURLForRemountingVolume
CFURLRef __cdecl NetFSCopyURLForRemountingVolume(CFURLRef localPathURL)
{
  const __CFURL *v1; // x19
  bool v2; // zf
  const __CFURL *propertyValueTypeRefPtr; // [xsp+8h] [xbp-18h] BYREF

  propertyValueTypeRefPtr = 0LL;
  v1 = 0LL;
  if ( CFURLCopyResourcePropertyForKey(localPathURL, kCFURLVolumeURLKey, &propertyValueTypeRefPtr, 0LL) )
    v2 = propertyValueTypeRefPtr == 0LL;
  else
    v2 = 1;
  if ( !v2 )
  {
    v1 = NetFSCopyURLForRemountingVolumeURL(propertyValueTypeRefPtr);
    CFRelease(propertyValueTypeRefPtr);
  }
  return v1;
}