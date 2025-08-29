-[NotesImporter unarchiveEvernoteNoteFromArchiveId:noteArchiveId:completionBlock:]
void __cdecl -[NotesImporter unarchiveEvernoteNoteFromArchiveId:noteArchiveId:completionBlock:](
        NotesImporter *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  void (__fastcall **v8)(id, void *); // x19
  id v9; // x23
  id v10; // x21
  ICEvernoteNoteParser *v11; // x22
  void *v12; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = (void (__fastcall **)(id, void *))objc_retain(a5);
  v9 = objc_retain(a4);
  v10 = objc_retain(a3);
  v11 = objc_retainAutoreleasedReturnValue(-[NotesImporter evernoteNoteParser](self, "evernoteNoteParser"));
  v12 = objc_retainAutoreleasedReturnValue(
          -[ICEvernoteNoteParser unarchiveEvernoteNoteFromArchiveId:noteArchiveId:](
            v11,
            "unarchiveEvernoteNoteFromArchiveId:noteArchiveId:",
            v10,
            v9));
  objc_release(v9);
  objc_release(v10);
  objc_release(v11);
  if ( v8 )
    v8[2](v8, v12);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}