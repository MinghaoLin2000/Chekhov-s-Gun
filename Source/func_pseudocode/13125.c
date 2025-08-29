-[TSUBacktrace callerAtIndex:]
id __cdecl -[TSUBacktrace callerAtIndex:](TSUBacktrace *self, SEL a2, signed __int64 a3)
{
  Dl_info v6; // [xsp+10h] [xbp-30h] BYREF

  memset(&v6, 0, sizeof(v6));
  if ( dladdr(*((const void **)&self->_callstack[self->_initAdjustment] + a3), &v6) )
    return +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v6.dli_sname);
  else
    return +[NSString stringWithFormat:](
             &OBJC_CLASS___NSString,
             "stringWithFormat:",
             CFSTR("(%s @ %p)"),
             v6.dli_fname,
             *((_QWORD *)&self->_callstack[self->_initAdjustment] + a3));
}