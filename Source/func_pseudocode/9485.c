-[TSPDocumentProperties readDocumentPropertiesFromDictionary:]
void __cdecl -[TSPDocumentProperties readDocumentPropertiesFromDictionary:](TSPDocumentProperties *self, SEL a2, id a3)
{
  id v4; // x19
  NSUUID *v5; // x0
  NSUUID *documentUUID; // x8
  NSUUID *v7; // x0
  NSUUID *versionUUID; // x8
  NSUUID *v9; // x0
  NSUUID *shareUUID; // x8
  NSUUID *v11; // x0
  NSUUID *stableDocumentUUID; // x8
  NSUUID *v13; // x0
  NSUUID *privateUUID; // x8
  void *v15; // x23
  TSPDocumentRevision *v16; // x24
  void *v17; // x23
  TSPDocumentRevision *v18; // x0
  TSPDocumentRevision *revision; // x8
  NSUUID *v20; // x0
  NSUUID *v21; // x8
  NSDictionary *v22; // x21
  id v23; // x22
  void *v24; // x23
  __int64 v25; // x24
  void *i; // x25
  NSDictionary *additionalProperties; // x0
  __int128 v28; // [xsp+0h] [xbp-110h] BYREF
  __int128 v29; // [xsp+10h] [xbp-100h]
  __int128 v30; // [xsp+20h] [xbp-F0h]
  __int128 v31; // [xsp+30h] [xbp-E0h]
  _BYTE v32[128]; // [xsp+48h] [xbp-C8h] BYREF

  v4 = objc_retain(a3);
  v5 = (NSUUID *)objc_retainAutoreleasedReturnValue(
                   -[TSPDocumentProperties UUIDFromDocumentProperties:key:](
                     self,
                     "UUIDFromDocumentProperties:key:",
                     v4,
                     CFSTR("documentUUID")));
  documentUUID = self->_documentUUID;
  self->_documentUUID = v5;
  objc_release(documentUUID);
  v7 = (NSUUID *)objc_retainAutoreleasedReturnValue(
                   -[TSPDocumentProperties UUIDFromDocumentProperties:key:](
                     self,
                     "UUIDFromDocumentProperties:key:",
                     v4,
                     CFSTR("versionUUID")));
  versionUUID = self->_versionUUID;
  self->_versionUUID = v7;
  objc_release(versionUUID);
  v9 = (NSUUID *)objc_retainAutoreleasedReturnValue(
                   -[TSPDocumentProperties UUIDFromDocumentProperties:key:](
                     self,
                     "UUIDFromDocumentProperties:key:",
                     v4,
                     CFSTR("shareUUID")));
  shareUUID = self->_shareUUID;
  self->_shareUUID = v9;
  objc_release(shareUUID);
  v11 = (NSUUID *)objc_retainAutoreleasedReturnValue(
                    -[TSPDocumentProperties UUIDFromDocumentProperties:key:](
                      self,
                      "UUIDFromDocumentProperties:key:",
                      v4,
                      CFSTR("stableDocumentUUID")));
  stableDocumentUUID = self->_stableDocumentUUID;
  self->_stableDocumentUUID = v11;
  objc_release(stableDocumentUUID);
  v13 = (NSUUID *)objc_retainAutoreleasedReturnValue(
                    -[TSPDocumentProperties UUIDFromDocumentProperties:key:](
                      self,
                      "UUIDFromDocumentProperties:key:",
                      v4,
                      CFSTR("privateUUID")));
  privateUUID = self->_privateUUID;
  self->_privateUUID = v13;
  objc_release(privateUUID);
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("fileFormatVersion")));
  self->_fileFormatVersion = UnsafePointer();
  objc_release(v15);
  v16 = objc_alloc(&OBJC_CLASS___TSPDocumentRevision);
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("revision")));
  v18 = -[TSPDocumentRevision initWithRevisionString:](v16, "initWithRevisionString:", v17);
  revision = self->_revision;
  self->_revision = v18;
  objc_release(revision);
  objc_release(v17);
  if ( !self->_documentUUID )
    -[TSPDocumentProperties updateDocumentUUID](self, "updateDocumentUUID");
  if ( !self->_shareUUID )
    objc_storeStrong((id *)&self->_shareUUID, self->_documentUUID);
  if ( !self->_stableDocumentUUID )
    objc_storeStrong((id *)&self->_stableDocumentUUID, self->_documentUUID);
  if ( !self->_privateUUID )
  {
    v20 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
    v21 = self->_privateUUID;
    self->_privateUUID = v20;
    objc_release(v21);
  }
  v22 = (NSDictionary *)objc_msgSend(v4, "mutableCopy");
  v30 = 0u;
  v31 = 0u;
  v28 = 0u;
  v29 = 0u;
  v23 = objc_retainAutoreleasedReturnValue((id)sub_100034F88(v22));
  v24 = objc_msgSend(v23, "countByEnumeratingWithState:objects:count:", &v28, v32, 16LL);
  if ( v24 )
  {
    v25 = *(_QWORD *)v29;
    do
    {
      for ( i = 0LL; i != v24; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v29 != v25 )
          objc_enumerationMutation(v23);
        -[NSDictionary removeObjectForKey:](
          v22,
          "removeObjectForKey:",
          *(_QWORD *)(*((_QWORD *)&v28 + 1) + 8LL * (_QWORD)i));
      }
      v24 = objc_msgSend(v23, "countByEnumeratingWithState:objects:count:", &v28, v32, 16LL);
    }
    while ( v24 );
  }
  objc_release(v23);
  additionalProperties = self->_additionalProperties;
  self->_additionalProperties = v22;
  objc_release(additionalProperties);
  objc_release(v4);
}