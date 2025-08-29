-[NSURL mapURLFromVCFURL]
id __cdecl -[NSURL mapURLFromVCFURL](NSURL *self, SEL a2)
{
  id v3; // x0
  void *v4; // x8
  NSString *v5; // x20
  NSString *v6; // x21
  void *v7; // x22
  void *v8; // x20
  NSURL *v9; // x24
  void *v11; // x20
  void *v12; // x21
  void *v13; // x22
  __int64 v14; // x23
  void *v15; // x25
  void *v16; // x26
  __int64 vars8; // [xsp+68h] [xbp+8h]

  if ( !qword_100008878 )
  {
    v3 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    v4 = (void *)qword_100008878;
    qword_100008878 = (__int64)v3;
    objc_release(v4);
  }
  v5 = objc_retainAutoreleasedReturnValue(-[NSURL pathExtension](self, "pathExtension"));
  if ( !-[NSString isEqualToString:](v5, "isEqualToString:", CFSTR("vcf")) )
  {
    objc_release(v5);
    goto LABEL_8;
  }
  v6 = objc_retainAutoreleasedReturnValue(-[NSURL path](self, "path"));
  v7 = -[NSString rangeOfString:](v6, "rangeOfString:", CFSTR(".loc"));
  objc_release(v6);
  objc_release(v5);
  if ( v7 == (void *)0x7FFFFFFFFFFFFFFFLL )
  {
LABEL_8:
    v9 = 0LL;
    goto LABEL_9;
  }
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)qword_100008878, "objectForKeyedSubscript:", self));
  objc_release(v8);
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)qword_100008878, "objectForKeyedSubscript:", self));
  }
  else
  {
    v11 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSData), "initWithContentsOfURL:", self);
    v12 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___ABPerson), "initWithVCardRepresentation:", v11);
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "valueForProperty:", kABURLsProperty));
    if ( objc_msgSend(v13, "count") )
    {
      v14 = 0LL;
      while ( 1 )
      {
        v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "valueAtIndex:", v14));
        v9 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v15));
        if ( !v9 )
        {
          v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "dataUsingEncoding:", 4LL));
          v9 = objc_retainAutoreleasedReturnValue(
                 +[NSURL URLWithDataRepresentation:relativeToURL:](
                   &OBJC_CLASS___NSURL,
                   "URLWithDataRepresentation:relativeToURL:",
                   v16,
                   0LL));
          objc_release(v16);
        }
        if ( ((unsigned int)+[MKURLParser isValidMapURL:](&OBJC_CLASS___MKURLParser, "isValidMapURL:", v9) & 1) != 0 )
          break;
        objc_release(v9);
        objc_release(v15);
        if ( ++v14 >= (unsigned __int64)objc_msgSend(v13, "count") )
        {
          v9 = 0LL;
          goto LABEL_22;
        }
      }
      objc_release(v15);
      if ( v9 )
        objc_msgSend((id)qword_100008878, "setObject:forKeyedSubscript:", v9, self);
    }
    else
    {
      v9 = 0LL;
    }
LABEL_22:
    objc_release(v13);
    objc_release(v12);
    objc_release(v11);
  }
LABEL_9:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}