-[NotesImporter archiveEvernoteNotesFromBookmarkData:completionBlock:]
void __cdecl -[NotesImporter archiveEvernoteNotesFromBookmarkData:completionBlock:](
        NotesImporter *self,
        SEL a2,
        id a3,
        id a4)
{
  void (__fastcall **v6)(id, void *, id); // x19
  id v7; // x22
  ICEvernoteNoteParser *v8; // x23
  void *v9; // x20
  id v10; // x21
  id v11; // [xsp+8h] [xbp-38h] BYREF

  v6 = (void (__fastcall **)(id, void *, id))objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = objc_retainAutoreleasedReturnValue(-[NotesImporter evernoteNoteParser](self, "evernoteNoteParser"));
  v11 = 0LL;
  v9 = objc_retainAutoreleasedReturnValue(
         -[ICEvernoteNoteParser archiveItemsFromBookmarkData:error:](
           v8,
           "archiveItemsFromBookmarkData:error:",
           v7,
           &v11));
  objc_release(v7);
  v10 = objc_retain(v11);
  objc_release(v8);
  if ( v6 )
    v6[2](v6, v9, v10);
  objc_release(v9);
  objc_release(v10);
  objc_release(v6);
}