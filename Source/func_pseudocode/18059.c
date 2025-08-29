_NetFSClearAllURLApprovals
const __CFArray *NetFSClearAllURLApprovals()
{
  const __CFArray *result; // x0
  const __CFArray *v1; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]
  CFRange v3; // 0:x1.16

  CFPreferencesSynchronize(CFSTR("com.apple.netfs.urlapprovals"), kCFPreferencesCurrentUser, kCFPreferencesAnyHost);
  result = CFPreferencesCopyKeyList(
             CFSTR("com.apple.netfs.urlapprovals"),
             kCFPreferencesCurrentUser,
             kCFPreferencesAnyHost);
  if ( result )
  {
    v1 = result;
    v3.length = CFArrayGetCount(result);
    v3.location = 0LL;
    CFArrayApplyFunction(v1, v3, (CFArrayApplierFunction)sub_10000A440, 0LL);
    CFRelease(v1);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (const __CFArray *)CFPreferencesSynchronize(
                                CFSTR("com.apple.netfs.urlapprovals"),
                                kCFPreferencesCurrentUser,
                                kCFPreferencesAnyHost);
  }
  return result;
}