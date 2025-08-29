-[TSPDocumentProperties encodedPropertyListWithError:]
id __cdecl -[TSPDocumentProperties encodedPropertyListWithError:](TSPDocumentProperties *self, SEL a2, id *a3)
{
  NSDictionary *v5; // x19
  void *v6; // x20
  NSUUID *v7; // x23
  NSString *v8; // x24
  NSUUID *v9; // x23
  NSString *v10; // x24
  NSUUID *v11; // x23
  NSString *v12; // x24
  NSUUID *v13; // x23
  NSString *v14; // x24
  NSString *v15; // x23
  id v16; // x23
  TSPDocumentRevision *v17; // x0
  TSPDocumentRevision *v18; // x22
  NSString *v19; // x23
  NSData *v20; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(self->_additionalProperties);
  v6 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
         "initWithCapacity:",
         (char *)-[NSDictionary count](v5, "count") + 5);
  v7 = objc_retainAutoreleasedReturnValue(-[TSPDocumentProperties documentUUID](self, "documentUUID"));
  v8 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](v7, "UUIDString"));
  objc_msgSend(v6, "setObject:forKeyedSubscript:", v8, CFSTR("documentUUID"));
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[TSPDocumentProperties versionUUID](self, "versionUUID"));
  v10 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](v9, "UUIDString"));
  objc_msgSend(v6, "setObject:forKeyedSubscript:", v10, CFSTR("versionUUID"));
  objc_release(v10);
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(-[TSPDocumentProperties shareUUID](self, "shareUUID"));
  v12 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](v11, "UUIDString"));
  objc_msgSend(v6, "setObject:forKeyedSubscript:", v12, CFSTR("shareUUID"));
  objc_release(v12);
  objc_release(v11);
  v13 = objc_retainAutoreleasedReturnValue(-[TSPDocumentProperties stableDocumentUUID](self, "stableDocumentUUID"));
  v14 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](v13, "UUIDString"));
  objc_msgSend(v6, "setObject:forKeyedSubscript:", v14, CFSTR("stableDocumentUUID"));
  objc_release(v14);
  objc_release(v13);
  v15 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](self->_privateUUID, "UUIDString"));
  objc_msgSend(v6, "setObject:forKeyedSubscript:", v15, CFSTR("privateUUID"));
  objc_release(v15);
  v16 = objc_retainAutoreleasedReturnValue((id)NSStringFromTSPVersion(-[TSPDocumentProperties fileFormatVersion](self, "fileFormatVersion")));
  objc_msgSend(v6, "setObject:forKeyedSubscript:", v16, CFSTR("fileFormatVersion"));
  objc_release(v16);
  v17 = objc_retain(self->_revision);
  v18 = v17;
  if ( v17 )
  {
    v19 = objc_retainAutoreleasedReturnValue(-[TSPDocumentRevision revisionString](v17, "revisionString"));
    objc_msgSend(v6, "setObject:forKeyedSubscript:", v19, CFSTR("revision"));
    objc_release(v19);
  }
  if ( v5 )
    objc_msgSend(v6, "addEntriesFromDictionary:", v5);
  v20 = objc_retainAutoreleasedReturnValue(
          +[NSPropertyListSerialization dataWithPropertyList:format:options:error:](
            &OBJC_CLASS___NSPropertyListSerialization,
            "dataWithPropertyList:format:options:error:",
            v6,
            200LL,
            0LL,
            a3));
  objc_release(v18);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v20);
}