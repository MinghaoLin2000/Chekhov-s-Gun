-[TSUZipFileArchive debugDescription]
id __cdecl -[TSUZipFileArchive debugDescription](TSUZipFileArchive *self, SEL a2)
{
  TSUDescription *v3; // x20
  NSString *v4; // x21
  id v5; // x19
  NSString *v6; // x19
  objc_super v8; // [xsp+10h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         +[TSUDescription descriptionWithObject:class:](
           &OBJC_CLASS___TSUDescription,
           "descriptionWithObject:class:",
           self,
           objc_opt_class(self)));
  v4 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%qu"), self->_archiveLength));
  -[TSUDescription addField:value:](v3, "addField:value:", CFSTR("archiveLength"), v4);
  objc_release(v4);
  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___TSUZipFileArchive;
  v5 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive debugDescription](&v8, "debugDescription"));
  -[TSUDescription addFieldValue:](v3, "addFieldValue:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[TSUDescription descriptionString](v3, "descriptionString"));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}