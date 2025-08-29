-[TSPDocumentProperties shareUUID]
NSUUID *__cdecl -[TSPDocumentProperties shareUUID](TSPDocumentProperties *self, SEL a2)
{
  NSUUID **p_shareUUID; // x0
  NSUUID *v4; // x8
  NSUUID *shareUUID; // t1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  shareUUID = self->_shareUUID;
  p_shareUUID = &self->_shareUUID;
  v4 = shareUUID;
  if ( !shareUUID )
  {
    objc_storeStrong((id *)p_shareUUID, self->_documentUUID);
    v4 = self->_shareUUID;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v4);
}