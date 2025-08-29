-[TSPDocumentRevision revisionString]
NSString *__cdecl -[TSPDocumentRevision revisionString](TSPDocumentRevision *self, SEL a2)
{
  __int64 sequence; // x21
  NSString *v3; // x19
  NSString *v4; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  sequence = (unsigned int)self->_sequence;
  v3 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](self->_identifier, "UUIDString"));
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%d%@%@"),
           sequence,
           CFSTR("::"),
           v3));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}