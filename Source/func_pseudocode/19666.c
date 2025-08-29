-[IPPSession getLogLeader]
id __cdecl -[IPPSession getLogLeader](IPPSession *self, SEL a2)
{
  NSString *v2; // x0
  NSString *v3; // x0
  __int64 v5; // [xsp+8h] [xbp-28h]
  __int64 v6; // [xsp+10h] [xbp-20h]
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( self->_clientID )
    v2 = +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@<%p> { client %d }"),
           objc_opt_class(self, a2),
           self,
           (unsigned int)self->_clientID);
  else
    v2 = +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("GlobalSession<%p>"),
           self,
           v5,
           v6);
  v3 = objc_retainAutoreleasedReturnValue(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}