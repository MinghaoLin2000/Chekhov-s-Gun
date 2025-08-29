-[IPPSessionTransaction prependLogLeader:]
void __cdecl -[IPPSessionTransaction prependLogLeader:](IPPSessionTransaction *self, SEL a2, id a3)
{
  id v4; // x19
  NSString *v5; // x0
  NSString *logLeader; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@: "), v4));
  logLeader = self->_logLeader;
  self->_logLeader = v5;
  objc_release(logLeader);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}