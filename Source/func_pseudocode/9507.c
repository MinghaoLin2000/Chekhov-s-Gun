-[TSPDocumentProperties copyWithZone:]
id __cdecl -[TSPDocumentProperties copyWithZone:](TSPDocumentProperties *self, SEL a2, _NSZone *a3)
{
  TSPDocumentProperties *v5; // x19
  NSUUID *v6; // x0
  NSUUID *documentUUID; // x8
  NSUUID *v8; // x0
  NSUUID *versionUUID; // x8
  NSUUID *v10; // x0
  NSUUID *shareUUID; // x8
  NSUUID *v12; // x0
  NSUUID *stableDocumentUUID; // x8
  NSUUID *v14; // x0
  NSUUID *privateUUID; // x8
  TSPDocumentRevision *v16; // x0
  TSPDocumentRevision *revision; // x8
  NSDictionary *v18; // x0
  NSDictionary *additionalProperties; // x8

  v5 = objc_alloc_init(&OBJC_CLASS___TSPDocumentProperties);
  if ( v5 )
  {
    v6 = (NSUUID *)-[NSUUID copyWithZone:](self->_documentUUID, "copyWithZone:", a3);
    documentUUID = v5->_documentUUID;
    v5->_documentUUID = v6;
    objc_release(documentUUID);
    v8 = (NSUUID *)-[NSUUID copyWithZone:](self->_versionUUID, "copyWithZone:", a3);
    versionUUID = v5->_versionUUID;
    v5->_versionUUID = v8;
    objc_release(versionUUID);
    v10 = (NSUUID *)-[NSUUID copyWithZone:](self->_shareUUID, "copyWithZone:", a3);
    shareUUID = v5->_shareUUID;
    v5->_shareUUID = v10;
    objc_release(shareUUID);
    v12 = (NSUUID *)-[NSUUID copyWithZone:](self->_stableDocumentUUID, "copyWithZone:", a3);
    stableDocumentUUID = v5->_stableDocumentUUID;
    v5->_stableDocumentUUID = v12;
    objc_release(stableDocumentUUID);
    v14 = (NSUUID *)-[NSUUID copyWithZone:](self->_privateUUID, "copyWithZone:", a3);
    privateUUID = v5->_privateUUID;
    v5->_privateUUID = v14;
    objc_release(privateUUID);
    v5->_fileFormatVersion = self->_fileFormatVersion;
    v16 = -[TSPDocumentRevision copyWithZone:](self->_revision, "copyWithZone:", a3);
    revision = v5->_revision;
    v5->_revision = v16;
    objc_release(revision);
    v18 = (NSDictionary *)-[NSDictionary copyWithZone:](self->_additionalProperties, "copyWithZone:", a3);
    additionalProperties = v5->_additionalProperties;
    v5->_additionalProperties = v18;
    objc_release(additionalProperties);
  }
  return v5;
}