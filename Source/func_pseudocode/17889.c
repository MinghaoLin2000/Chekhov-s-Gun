__Z21FileProvidersByIDSyncv
id FileProvidersByIDSync(void)
{
  dispatch_semaphore_s *v0; // x19
  void *v1; // x20
  id v2; // x21
  _QWORD v4[5]; // [xsp+8h] [xbp-58h] BYREF
  id v5; // [xsp+30h] [xbp-30h]
  id v6; // [xsp+38h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v6 = 0LL;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3321888768LL;
  v4[2] = sub_100001290;
  v4[3] = &unk_100004160;
  v0 = objc_retain(dispatch_semaphore_create(0LL));
  v4[4] = &v6;
  v5 = v0;
  v1 = objc_retainAutoreleasedReturnValue(
         +[FPProviderDomain beginMonitoringProviderDomainChangesWithHandler:](
           &OBJC_CLASS___FPProviderDomain,
           "beginMonitoringProviderDomainChangesWithHandler:",
           v4));
  dispatch_semaphore_wait(v0, 0xFFFFFFFFFFFFFFFFLL);
  +[FPProviderDomain endMonitoringProviderDomainChanges:](
    &OBJC_CLASS___FPProviderDomain,
    "endMonitoringProviderDomainChanges:",
    v1);
  v2 = objc_retain(v6);
  objc_release(v1);
  objc_release(v5);
  objc_release(v0);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}