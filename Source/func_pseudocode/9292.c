-[TSPDocumentRevision copyWithZone:]
id __cdecl -[TSPDocumentRevision copyWithZone:](TSPDocumentRevision *self, SEL a2, _NSZone *a3)
{
  void *v4; // x0
  __int64 sequence; // x2
  NSUUID *identifier; // x3
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_msgSend((id)objc_opt_class(self), "allocWithZone:", a3);
  sequence = (unsigned int)self->_sequence;
  identifier = self->_identifier;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_msgSend(v4, "initWithSequence:identifier:", sequence, identifier);
}