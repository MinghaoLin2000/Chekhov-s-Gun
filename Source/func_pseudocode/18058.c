_NetFSSetURLApprovalState
void __fastcall NetFSSetURLApprovalState(__int64 a1, int a2)
{
  const __CFString *v3; // x0
  const __CFString *v4; // x19
  const CFBooleanRef *v5; // x8
  CFBooleanRef v6; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = (const __CFString *)NetFSCopyNormalizedURLString();
  if ( !v3 )
    return;
  v4 = v3;
  switch ( a2 )
  {
    case 0:
      v6 = 0LL;
LABEL_10:
      CFPreferencesSetValue(
        v3,
        v6,
        CFSTR("com.apple.netfs.urlapprovals"),
        kCFPreferencesCurrentUser,
        kCFPreferencesAnyHost);
      CFPreferencesSynchronize(CFSTR("com.apple.netfs.urlapprovals"), kCFPreferencesCurrentUser, kCFPreferencesAnyHost);
      break;
    case 2:
      v5 = &kCFBooleanFalse;
      goto LABEL_9;
    case 1:
      v5 = &kCFBooleanTrue;
LABEL_9:
      v6 = *v5;
      goto LABEL_10;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  CFRelease(v4);
}