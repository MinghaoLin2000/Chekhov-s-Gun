-[INHService _checkServiceAccessWithError:]
bool __cdecl -[INHService _checkServiceAccessWithError:](INHService *self, SEL a2, id *a3)
{
  NSXPCConnection *v4; // x21
  void *v5; // x20
  void *v6; // x0
  void *v7; // x21
  id v8; // x22
  NSDictionary *v9; // x24
  NSErrorUserInfoKey v11; // [xsp+8h] [xbp-48h] BYREF
  const __CFString *v12; // [xsp+10h] [xbp-40h] BYREF

  v4 = objc_retainAutoreleasedReturnValue(-[INHService servingConnection](self, "servingConnection"));
  v5 = objc_retainAutoreleasedReturnValue(
         +[INHelperServiceAccessSpecifier accessSpecifierAppropriateForXPCConnection:](
           &OBJC_CLASS___INHelperServiceAccessSpecifier,
           "accessSpecifierAppropriateForXPCConnection:",
           v4));
  objc_release(v4);
  v6 = objc_msgSend(v5, "accessLevel");
  v7 = v6;
  if ( a3 && v6 != (void *)2 )
  {
    v8 = objc_alloc((Class)&OBJC_CLASS___NSError);
    v11 = NSDebugDescriptionErrorKey;
    v12 = CFSTR("Client does not have sufficient permissions to access bundle");
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             &v12,
             &v11,
             1LL));
    *a3 = objc_autorelease(objc_msgSend(v8, "initWithDomain:code:userInfo:", INIntentErrorDomain, 6010LL, v9));
    objc_release(v9);
  }
  objc_release(v5);
  return v7 == (void *)2;
}