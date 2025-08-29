_NetFSGetURLApprovalState
__int64 NetFSGetURLApprovalState()
{
  __int64 v0; // x0
  const __CFString *v1; // x19
  const __CFBoolean *v2; // x0
  const __CFBoolean *v3; // x20
  CFTypeID v4; // x21
  __int64 v5; // x21

  v0 = NetFSCopyNormalizedURLString();
  if ( !v0 )
    return 0LL;
  v1 = (const __CFString *)v0;
  CFPreferencesSynchronize(CFSTR("com.apple.netfs.urlapprovals"), kCFPreferencesCurrentUser, kCFPreferencesAnyHost);
  v2 = (const __CFBoolean *)CFPreferencesCopyValue(
                              v1,
                              CFSTR("com.apple.netfs.urlapprovals"),
                              kCFPreferencesCurrentUser,
                              kCFPreferencesAnyHost);
  if ( v2 )
  {
    v3 = v2;
    v4 = CFGetTypeID(v2);
    if ( v4 == CFBooleanGetTypeID() )
    {
      if ( CFBooleanGetValue(v3) )
        v5 = 1LL;
      else
        v5 = 2LL;
    }
    else
    {
      v5 = 0LL;
    }
    CFRelease(v3);
  }
  else
  {
    v5 = 0LL;
  }
  CFRelease(v1);
  return v5;
}