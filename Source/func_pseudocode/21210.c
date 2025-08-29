-[DistributionHelperService fileAtPathExistsOnGraft:reply:]
void __cdecl -[DistributionHelperService fileAtPathExistsOnGraft:reply:](
        DistributionHelperService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  __int64 v6; // x22
  NSDictionary *v7; // x23
  NSError *v8; // x20
  _QWORD v9[2]; // [xsp+8h] [xbp-58h] BYREF
  NSErrorUserInfoKey v10; // [xsp+18h] [xbp-48h] BYREF
  const __CFString *v11; // [xsp+20h] [xbp-40h] BYREF

  v5 = objc_retain(a4);
  v9[0] = 0LL;
  v9[1] = 0LL;
  if ( fsctl((const char *)objc_msgSend(objc_retainAutorelease(a3), "fileSystemRepresentation"), 0xC0104A66uLL, v9, 0) )
  {
    v6 = *__error();
    v10 = NSDebugDescriptionErrorKey;
    v11 = CFSTR("failed to get graft info (number of records)");
    v7 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             &v11,
             &v10,
             1LL));
    v8 = objc_retainAutoreleasedReturnValue(
           +[NSError errorWithDomain:code:userInfo:](
             &OBJC_CLASS___NSError,
             "errorWithDomain:code:userInfo:",
             NSPOSIXErrorDomain,
             v6,
             v7));
    objc_release(v7);
    (*((void (__fastcall **)(id, _QWORD, _QWORD, NSError *))v5 + 2))(v5, 0LL, 0LL, v8);
    objc_release(v8);
  }
  else
  {
    (*((void (__fastcall **)(id, __int64, bool, _QWORD))v5 + 2))(v5, 1LL, BYTE4(v9[0]) != 0, 0LL);
  }
  objc_release(v5);
}