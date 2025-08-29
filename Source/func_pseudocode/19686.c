-[IPPSessionTransaction getLogLeader]
id __cdecl -[IPPSessionTransaction getLogLeader](IPPSessionTransaction *self, SEL a2)
{
  NSString *logLeader; // x21
  void *v3; // x19
  NSString *v4; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  logLeader = self->_logLeader;
  if ( logLeader )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[IPPSessionTransaction description](self, "description"));
    v4 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@: %@"), logLeader, v3));
    objc_release(v3);
  }
  else
  {
    v4 = objc_retainAutoreleasedReturnValue(-[IPPSessionTransaction description](self, "description"));
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}