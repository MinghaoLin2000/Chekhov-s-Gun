-[TSPDocumentProperties description]
id __cdecl -[TSPDocumentProperties description](TSPDocumentProperties *self, SEL a2)
{
  objc_class *v3; // x0
  NSString *v4; // x19
  NSUUID *v5; // x20
  NSUUID *v6; // x21
  NSUUID *v7; // x22
  NSUUID *v8; // x25
  TSPDocumentRevision *v9; // x26
  NSString *v10; // x23
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v3 = (objc_class *)objc_opt_class(self);
  v4 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v3));
  v5 = objc_retainAutoreleasedReturnValue(-[TSPDocumentProperties documentUUID](self, "documentUUID"));
  v6 = objc_retainAutoreleasedReturnValue(-[TSPDocumentProperties versionUUID](self, "versionUUID"));
  v7 = objc_retainAutoreleasedReturnValue(-[TSPDocumentProperties shareUUID](self, "shareUUID"));
  v8 = objc_retainAutoreleasedReturnValue(-[TSPDocumentProperties stableDocumentUUID](self, "stableDocumentUUID"));
  v9 = objc_retainAutoreleasedReturnValue(-[TSPDocumentProperties revision](self, "revision"));
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("<%@ %p documentUUID:%@, versionUUID:%@, shareUUID:%@, stableDocumentUUID:%@, revision:%@>"),
            v4,
            self,
            v5,
            v6,
            v7,
            v8,
            v9));
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}