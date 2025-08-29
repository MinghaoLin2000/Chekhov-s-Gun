-[NotesImporter countEvernoteNotesFromBookmarkData:completionBlock:]
void __cdecl -[NotesImporter countEvernoteNotesFromBookmarkData:completionBlock:](
        NotesImporter *self,
        SEL a2,
        id a3,
        id a4)
{
  void (__fastcall **v6)(id, void *); // x19
  id v7; // x22
  ICEvernoteNoteParser *v8; // x21
  void *v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = (void (__fastcall **)(id, void *))objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = objc_retainAutoreleasedReturnValue(-[NotesImporter evernoteNoteParser](self, "evernoteNoteParser"));
  v9 = -[ICEvernoteNoteParser countEvernoteNotesFromBookmarkData:](v8, "countEvernoteNotesFromBookmarkData:", v7);
  objc_release(v7);
  objc_release(v8);
  if ( v6 )
    v6[2](v6, v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}