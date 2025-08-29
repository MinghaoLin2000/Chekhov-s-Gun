-[TSPDocumentProperties updateDocumentUUID]
void __cdecl -[TSPDocumentProperties updateDocumentUUID](TSPDocumentProperties *self, SEL a2)
{
  NSUUID *v3; // x0
  NSUUID *documentUUID; // x8
  NSUUID *v5; // x0
  NSUUID *privateUUID; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
  documentUUID = self->_documentUUID;
  self->_documentUUID = v3;
  objc_release(documentUUID);
  v5 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
  privateUUID = self->_privateUUID;
  self->_privateUUID = v5;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(privateUUID);
}