-[FMMFileLogger logMessage:]
void __cdecl -[FMMFileLogger logMessage:](FMMFileLogger *self, SEL a2, id a3)
{
  void *v5; // x20
  __int64 v6; // [xsp+30h] [xbp+10h] BYREF

  if ( -[NSDictionary objectForKeyedSubscript:](
         -[NSProcessInfo environment](
           +[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"),
           "environment"),
         "objectForKeyedSubscript:",
         CFSTR("__OSINSTALL_ENVIRONMENT")) )
  {
    v5 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithFormat:arguments:", a3, &v6);
    -[FMMFileLogger logString:](self, "logString:", v5);
    objc_release(v5);
  }
}