-[ClientRequest description]
id __cdecl -[ClientRequest description](ClientRequest *self, SEL a2)
{
  unsigned __int64 v3; // x22
  NSString *v4; // x21
  unsigned __int64 v5; // x0
  __CFString *v6; // x0
  __CFString *v7; // x23
  NSString *v8; // x19
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = -[MediaConversionRequestTracker requestNumber](self->_requestTracker, "requestNumber");
  v4 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker requestIdentifier](self->_requestTracker, "requestIdentifier"));
  v5 = -[MediaConversionRequestTracker effectivePriority](self->_requestTracker, "effectivePriority");
  if ( v5 > 4 )
    v6 = 0LL;
  else
    v6 = off_1000414A8[v5];
  v7 = objc_retain(v6);
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("<Request #%lu (%p) %@ %@>"),
           v3,
           self,
           v4,
           v7));
  objc_release(v7);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}