-[NSString tsu_rangeOfString:options:updatingSearchRange:]
// local variable allocation has failed, the output may be wrong!
_NSRange __cdecl -[NSString tsu_rangeOfString:options:updatingSearchRange:](
        NSString *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        _NSRange *a5)
{
  id v8; // x0
  void *v9; // x19
  NSUInteger location; // x24
  NSUInteger length; // x25
  void *v12; // x0
  NSUInteger v13; // x1
  void *v14; // x20
  NSUInteger v15; // x21
  NSUInteger v16; // x1
  NSUInteger v17; // x0
  NSUInteger v18; // x1
  _NSRange result; // 0:x0.16

  v8 = objc_retain(a3);
  v9 = v8;
  if ( a5 )
  {
    location = a5->location;
    length = a5->length;
    v12 = -[NSString rangeOfString:options:range:](self, "rangeOfString:options:range:", v8, a4, a5->location, length);
    v14 = v12;
    v15 = v13;
    if ( v12 == (void *)0x7FFFFFFFFFFFFFFFLL )
    {
      *a5 = (_NSRange)TSUInvalidRange;
    }
    else if ( (a4 & 4) != 0 )
    {
      a5->location = location;
      a5->length = (NSUInteger)v12 - location;
    }
    else
    {
      a5->location = (NSUInteger)v12 + v13;
      a5->length = length + location - ((_QWORD)v12 + v13);
    }
  }
  else
  {
    v14 = -[NSString rangeOfString:options:range:](
            self,
            "rangeOfString:options:range:",
            v8,
            a4,
            0LL,
            objc_msgSend(v8, "length"));
    v15 = v16;
  }
  objc_release(v9);
  v17 = (NSUInteger)v14;
  v18 = v15;
  result.length = v18;
  result.location = v17;
  return result;
}