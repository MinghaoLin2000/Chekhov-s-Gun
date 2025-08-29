-[TSPDocumentProperties stableDocumentUUID]
NSUUID *__cdecl -[TSPDocumentProperties stableDocumentUUID](TSPDocumentProperties *self, SEL a2)
{
  NSUUID **p_stableDocumentUUID; // x0
  NSUUID *v4; // x8
  NSUUID *stableDocumentUUID; // t1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  stableDocumentUUID = self->_stableDocumentUUID;
  p_stableDocumentUUID = &self->_stableDocumentUUID;
  v4 = stableDocumentUUID;
  if ( !stableDocumentUUID )
  {
    objc_storeStrong((id *)p_stableDocumentUUID, self->_documentUUID);
    v4 = self->_stableDocumentUUID;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v4);
}