-[VideoConversionService requestStatusWithReply:]
void __cdecl -[VideoConversionService requestStatusWithReply:](VideoConversionService *self, SEL a2, id a3)
{
  id v4; // x21
  NSNumber *v5; // x20
  NSDictionary *v6; // x22
  const __CFString *v7; // [xsp+8h] [xbp-38h] BYREF
  NSNumber *v8; // [xsp+10h] [xbp-30h] BYREF

  v7 = CFSTR("PAMediaConversionServiceProcessIdentifierKey");
  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", getpid()));
  v8 = v5;
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           &v8,
           &v7,
           1LL));
  (*((void (__fastcall **)(id, NSDictionary *, _QWORD))a3 + 2))(v4, v6, 0LL);
  objc_release(v4);
  objc_release(v6);
  objc_release(v5);
}