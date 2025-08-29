-[TSPDocumentProperties updateDocumentUUIDAndPreserveShareUUID:preserveStableDocumentUUID:]
void __cdecl -[TSPDocumentProperties updateDocumentUUIDAndPreserveShareUUID:preserveStableDocumentUUID:](
        TSPDocumentProperties *self,
        SEL a2,
        bool a3,
        bool a4)
{
  NSUUID *documentUUID; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  -[TSPDocumentProperties updateDocumentUUID](self, "updateDocumentUUID");
  if ( !a3 )
    objc_storeStrong((id *)&self->_shareUUID, self->_documentUUID);
  if ( !a4 )
  {
    documentUUID = self->_documentUUID;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_storeStrong((id *)&self->_stableDocumentUUID, documentUUID);
  }
}