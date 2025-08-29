-[TSUZipArchive debugDescription]
id __cdecl -[TSUZipArchive debugDescription](TSUZipArchive *self, SEL a2)
{
  TSUDescription *v3; // x20
  void *v4; // x19
  id v5; // x21
  NSString *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         +[TSUDescription descriptionWithObject:class:](
           &OBJC_CLASS___TSUDescription,
           "descriptionWithObject:class:",
           self,
           objc_opt_class(self)));
  v4 = objc_retainAutoreleasedReturnValue(-[NSMutableOrderedSet array](self->_entries, "array"));
  v5 = objc_retainAutoreleasedReturnValue((id)TSUArrayDescription());
  -[TSUDescription addField:value:](v3, "addField:value:", CFSTR("entries"), v5);
  objc_release(v5);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[TSUDescription descriptionString](v3, "descriptionString"));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}