-[TSPDocumentRevision description]
id __cdecl -[TSPDocumentRevision description](TSPDocumentRevision *self, SEL a2)
{
  objc_class *v3; // x0
  NSString *v4; // x19
  NSString *v5; // x22
  NSString *v6; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = (objc_class *)objc_opt_class(self);
  v4 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v3));
  v5 = objc_retainAutoreleasedReturnValue(-[TSPDocumentRevision revisionString](self, "revisionString"));
  v6 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("<%@: %p %@>"), v4, self, v5));
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}